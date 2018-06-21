//
//  AACEncoder.h
//  AVDecode
//
//  Created by zhaoliang chen on 2018/5/13.
//  Copyright © 2018年 test. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AudioToolbox/AudioToolbox.h>
#import <AVFoundation/AVFoundation.h>

@interface AACEncoder : NSObject

@property(nonatomic) dispatch_queue_t encoderQueue;//编码队列
@property(nonatomic) dispatch_queue_t callBackQueue;//回调队列

//编码sampleBuffer
-(void)encodeSampleBuffer:(CMSampleBufferRef)sampleBuffer completionBlock:(void(^)(NSData *encodedData,NSError *error))completionBlock;

@end
