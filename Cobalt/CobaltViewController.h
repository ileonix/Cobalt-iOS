/**
 *
 * CobaltViewController.h
 * Cobalt
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2014 Cobaltians
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */

#import <UIKit/UIKit.h>
#import <JavaScriptCore/JavaScriptCore.h>

#import "CobaltAlert.h"
#import "CobaltToast.h"
#import "CobaltBarButtonItem.h"
#import "BackBarButtonItem.h"

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma mark JAVASCRIPT KEYS

////////////////////////////////////////////////////////////////////////////////////////////////

// GENERAL
#define kJSAction                           @"action"
#define kJSCallback                         @"callback"
#define kJSData                             @"data"
#define kJSName                             @"name"
#define kJSPage                             @"page"
#define kJSTexts                            @"texts"
#define kJSType                             @"type"
#define KJSVersion                          @"version"
#define kJSValue                            @"value"
#define kJSValues                           @"values"
#define kJSResult                           @"result"

// CALLBACK
#define JSTypeCallBack                      @"callback"

// COBALT IS READY
#define JSTypeCobaltIsReady                 @"cobaltIsReady"

// EVENT
#define JSTypeEvent                         @"event"
#define kJSEvent                            @"event"

// PUBSUB
#define JSTypePubsub                        @"pubsub"
#define JSActionSubscribe                   @"subscribe"
#define JSActionUnsubscribe                 @"unsubscribe"
#define JSActionPublish                     @"publish"
#define kJSChannel                          @"channel"
#define kJSMessage                          @"message"

// LOG
#define JSTypeLog                           @"log"

// NAVIGATION
#define JSTypeNavigation                    @"navigation"
#define JSActionNavigationPush              @"push"
#define JSActionNavigationPop               @"pop"
#define JSActionNavigationModal             @"modal"
#define JSActionNavigationDismiss           @"dismiss"
#define kJSActionNavigationReplace          @"replace"
#define kJSNavigationController             @"controller"
#define kJSBars                             @"bars"
#define JSEventOnBackButtonPressed          @"cobalt:onBackButtonPressed"

#define kJSAnimated                         @"animated"
#define kJSClearHistory                     @"clearHistory"

//LIFE CYCLE
#define JSEventOnAppStarted                 @"cobalt:onAppStarted"
#define JSEventOnAppForeground              @"cobalt:onAppForeground"
#define JSEventOnAppBackground              @"cobalt:onAppBackground"
#define JSEventOnPageShown                  @"cobalt:onPageShown"

// PULL TO REFRESH
#define JSEventPullToRefresh                @"cobalt:onPullToRefresh"

// INFINITE SCROLL
#define JSEventInfiniteScroll               @"cobalt:onInfiniteScroll"

// UI
#define JSTypeUI                            @"ui"
#define kJSControl                          @"control"

#define kJSTypeImage                        @"image"
#define JSActionPressed                     @"actionPressed"

// PULL TO REFRESH
#define JSControlPullToRefresh              @"pullToRefresh"
#define JSControlInfiniteScroll             @"infiniteScroll"
#define JSActionDismiss                     @"dismiss"
#define JSActionSetTexts                    @"setTexts"
#define kJSTextsPullToRefresh               @"pullToRefresh"
#define kJSTextsRefreshing                  @"refreshing"

// ALERT
#define JSControlAlert                      @"alert"
#define kJSAlertId                          @"alertId"
#define kJSAlertTitle                       @"title"
#define kJSAlertMessage                     @"message"
#define kJSAlertButtons                     @"buttons"
#define kJSAlertButtonIndex                 @"index"

// BARS
#define FLEXIBLE_SPACE_TAG                  1
#define JSControlBars                       @"bars"
#define JSActionSetBarsVisible              @"setBarsVisible"
#define JSActionSetBarContent               @"setBarContent"
#define JSActionSetActionVisible            @"setActionVisible"
#define JSActionSetActionEnabled            @"setActionEnabled"
#define JSActionSetActionBadge              @"setActionBadge"
#define JSActionSetActionContent            @"setActionContent"
#define JSActionSetBars                     @"setBars"
#define kJSBars                             @"bars"
#define kJSContent                          @"content"
#define kJSName                             @"name"
#define kJSVisible                          @"visible"
#define kJSEnabled                          @"enabled"
#define kJSBadge                            @"badge"

// TOAST
#define JSControlToast                      @"toast"

// WEB LAYER
#define JSTypeWebLayer                      @"webLayer"
#define JSActionWebLayerShow                @"show"
#define JSActionWebLayerDismiss             @"dismiss"
#define JSActionWebLayerBringToFront        @"bringToFront"
#define JSActionWebLayerSendToBack          @"sendToBack"
#define kJSWebLayerFadeDuration             @"fadeDuration"
#define JSEventWebLayerOnDismiss            @"cobalt:onWebLayerDismissed"
#define JSEventWebLayerOnLoading            @"cobalt:onWebLayerLoading"
#define JSEventWebLayerOnLoaded             @"cobalt:onWebLayerLoaded"
#define JSEventWebLayerOnLoadFailed         @"cobalt:onWebLayerLoadFailed"
#define kJSIsWebLayer                       @"isWebLayer"

//INTENT
#define kJSTypeIntent                        @"intent"
#define kJSActionOpenExternalUrl             @"openExternalUrl"
#define kJSUrl                               @"url"

// HTML
#define defaultHtmlPage                     @"index.html"
#define defaultController                   @"default"

//PLUGIN
#define kJSTypePlugin                       @"plugin"
#define kJSPluginName                       @"name"
#define kJSPluginClasses                    @"classes"
#define kJSCallbackChannel                  @"callbackChannel"

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma mark ENUM

////////////////////////////////////////////////////////////////////////////////////////////////

enum {
    WEB_VIEW = 0,
    WEB_LAYER = 1
};
typedef NSInteger WebViewType;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma mark INTERFACE

////////////////////////////////////////////////////////////////////////////////////////////////

/*!
 @class			CobaltViewController
 @abstract		Base class for a webView controller that allows javascript/native dialogs
 */
@interface CobaltViewController : UIViewController <UIScrollViewDelegate, UIWebViewDelegate, CobaltAlertDelegate, CobaltToastDelegate, CobaltBarButtonItemDelegate, BackBarButtonItemDelegate>
{
    // Javascript queues
    NSOperationQueue * toJavaScriptOperationQueue;
    NSOperationQueue * fromJavaScriptOperationQueue;
    
    // Bar button items
    NSMutableArray *topLeftBarButtonItems;
    NSMutableArray *topRightBarButtonItems;
    NSMutableArray *bottomBarButtonItems;
    
@private
    
    float _lastWebviewContentOffset;
	BOOL _isLoadingMore;
    BOOL _isRefreshing;
    
    NSAttributedString * _ptrRefreshText;
    NSAttributedString * _ptrRefreshingText;
}

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma mark PROPERTIES

////////////////////////////////////////////////////////////////////////////////////////////////

/*!
 @property		webView
 @abstract		the webView displaying content
 */
@property (weak, nonatomic) IBOutlet UIWebView * webView;

/*!
 @property		pageName
 @abstract		the name of the HTML file with the content to display in the webview
 @discussion    the file must be located at ressourcePath
 */
@property (strong, nonatomic) NSString * pageName;

/*!
 @property        controller
 @abstract        the name of the configuration in the cobalt.json file to apply for this CobaltViewController 
 */
@property (strong, nonatomic) NSString *controller;

/*!
 @property             navigationData
 @abstract             the data to pass to the webview in onPageShown event on navigation
 */
@property (strong, nonatomic) NSDictionary *navigationData;

@property (weak, nonatomic) IBOutlet UIWebView * webLayer;

/*!
 @property             refreshControl
 @abstract             a refresh control shown for Pull-to-refresh feature
 */
@property (strong, nonatomic) UIRefreshControl *refreshControl;

/*!
 @property		background
 @abstract		background color of the WebView
 */
@property (strong, nonatomic) UIColor *background;

/*!
 @property		scrollsToTop
 @abstract		allows or not the scrollsToTop functionality
 */
@property BOOL scrollsToTop;

/*!
 @property		isPullToRefreshEnabled
 @abstract		allows or not the pullToRefresh functionality
 */
@property BOOL isPullToRefreshEnabled;

/*!
 @property		isInfiniteScrollEnabled
 @abstract		allows or not the infinite scroll functionality
 */
@property BOOL isInfiniteScrollEnabled;

/*!
 @property		infiniteScrollOffset
 @abstract		offset to trigger infinite scroll
 */
@property int infiniteScrollOffset;

/*!
 @property		barsConfiguration
 @abstract		bars configuration as defined in cobalt.json or sent by Web on navigation
 */
@property NSMutableDictionary *barsConfiguration;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma mark COBALT METHODS

////////////////////////////////////////////////////////////////////////////////////////////////

/*!
 @method		- (void)initWithPage:(nonnull NSString *)page andController:(nullable NSString *)controller
 @abstract		this method sets the configuration of the native controller. If the controller is instantiated from a storyboard, override the initWithCoder: method and call it in instead of instantiate it programmatically
 */
- (void)initWithPage:(nonnull NSString *)page
       andController:(nullable NSString *)controller;

/*!
 @method		-(void) customView
 @abstract		a method to custom the webView
 @discussion    must be subclassed in subclasses
 */
- (void)customWebView;

/*!
 @method		- (void)loadPage:(NSString *)page inWebView:(UIWebView *)mWebView
 @abstract		this method loads the page in ressourcePath in the Web view.
 @param         mWebView : Web view to load the page into
 @param         page: the page file
 */
- (void)loadPage:(NSString *)page inWebView:(UIWebView *)mWebView;

/*!
 @method        - (void)onReady;
 @abstract      this method is called when Web has notified native that it is ready to receive messages
 */
- (void)onReady;

/*!
 @method		- (void) sendMessage:(NSDictionary *) message;
 @abstract		this method sends an message who was an Object format in an NSDictionary
 @param         messageId : the messageId given by a former JS call. It's all events aren't send with sendCallback and sendEvent.
 @discussion    This method should NOT be overridden in subclasses.
 */
- (void) sendMessage:(NSDictionary *) message;

- (void) sendMessageToWebLayer:(NSDictionary *) message;

/*!
 @method        - (BOOL)handleDictionarySentByJavaScript:(NSDictionary *)message
 @abstract      Catches the message sent by the WebView as JSON used to fire native methods (allows interactions from the WebView to the native)
 @param         message: the JSON sent by the WebView
 @result        Returns YES if the message has been catched by the native, NO otherwise.
 @discussion    This method SHOULD NOT be overridden in subclasses.
 */
- (BOOL)handleDictionarySentByJavaScript:(NSDictionary *)message;

/*!
 @method		- (void)sendACK
 @abstract		Sends an ACK event as soon as a JS message is received
 @discussion    This is the default acquitment way. More complex acquitment methods may be implemented but on iOS, every call received by JS should send at least this acquitment.
 */
- (void)sendACK;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma mark LIFECYCLE

////////////////////////////////////////////////////////////////////////////////////////////////

- (void)onAppStarted:(NSNotification *)notification;
- (void)onAppBackground:(NSNotification *)notification;
- (void)onAppForeground:(NSNotification *)notification;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma mark BARS

////////////////////////////////////////////////////////////////////////////////////////////////

- (void)configureBars;
- (void)resetBars;
- (void)setBarsVisible:(NSDictionary *)visible;
- (void)setBarButtonItems;
- (void)setBadgeLabelText:(NSString *)text
    forBarButtonItemNamed:(NSString *)name;
- (CobaltBarButtonItem *)barButtonItemForAction:(NSDictionary *)action;
- (void)onBarButtonItemPressed:(NSString *)name;
- (void)setContent:(NSDictionary *)content
forBarButtonItemNamed:(NSString *)name;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma mark PULL-TO-REFRESH METHODS

////////////////////////////////////////////////////////////////////////////////////////////////

/*!
 @method		- (void)refresh
 @abstract		Tells the webview to be refresh its content.
 */
- (void)refresh;

/*!
 @method		- (void)refreshWebView
 @abstract		Sends event to refresh Web view content.
 */
- (void)refreshWebView;


/*!
 @method		- (void)customizeRefreshControlWithAttributedText:(NSAttributedString *)attributedText andTintColor: (UIColor *)tintColor
 @abstract		customize native pull to refresh control
 */
- (void)customizeRefreshControlWithAttributedRefreshText:(NSAttributedString *)attributedRefreshText andAttributedRefreshText:(NSAttributedString *)attributedRefreshingText andTintColor: (UIColor *)tintColor;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma mark INFINITE SCROLL METHOS

////////////////////////////////////////////////////////////////////////////////////////////////

/*!
 @method		- (void)loadMoreItems
 @abstract		Tells the webview to be load more datas
 */
- (void)loadMoreItems;

/*!
 @method		-(void) loadMoreContentInWebview
 @abstract		Starts loading more content in webview
 */
- (void)loadMoreContentInWebview;

////////////////////////////////////////////////////////////////////////////////////////////////

#pragma mark WEB LAYER

////////////////////////////////////////////////////////////////////////////////////////////////

/*!
 @method      - (void)bringWebLayerToFront
 @abstract    this method sends the WebView to the back, so the WebLayer appears above it
 */
- (void)bringWebLayerToFront;

/*!
 @method      - (void)bringWebLayerToFront
 @abstract    this method sends the WebLayer to the back, so the WebView appears above it
 */
- (void)sendWebLayerToBack;

@end
