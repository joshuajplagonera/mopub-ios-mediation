//
//  UnityAdsInterstitialCustomEvent.h
//  MoPubSDK
//
//  Copyright (c) 2016 MoPub. All rights reserved.
//

#if __has_include(<MoPub/MoPub.h>)
    #import <MoPub/MoPub.h>
#elif __has_include(<MoPubSDKFramework/MoPub.h>)
    #import <MoPubSDKFramework/MoPub.h>
#else
    #import "MPFullscreenAdAdapter.h"
#endif

/*
 * Please reference the Supported Mediation Partner page at http://bit.ly/2mqsuFH for the
 * latest version and ad format certifications.
 */
@interface UnityAdsInterstitialCustomEvent : MPFullscreenAdAdapter <MPThirdPartyFullscreenAdAdapter>

@end
