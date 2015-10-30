//
//  Criollo.h
//  Criollo
//
//  Created by Cătălin Stan on 28/04/15.
//
//

#import <Foundation/Foundation.h>

#import <Criollo/CRApplication.h>
#import <Criollo/CRServer.h>
#import <Criollo/CRServerConfiguration.h>
#import <Criollo/CRConnection.h>
#import <Criollo/CRMessage.h>
#import <Criollo/CRRequest.h>
#import <Criollo/CRResponse.h>

#import <Criollo/CRHTTPServer.h>
#import <Criollo/CRHTTPConnection.h>

#import <Criollo/CRFCGIServer.h>
#import <Criollo/CRFCGIConnection.h>

FOUNDATION_EXPORT NSString* const Criollo;
FOUNDATION_EXPORT NSString* const CRErrorDomain;

typedef NSUInteger CRError;