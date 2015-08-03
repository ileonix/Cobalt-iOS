//
//  FontAwesome.h
//  Cobalt-fontawesome-test
//
//  Created by Quentin deQuelen on 09/10/2014.
//  Copyright (c) 2014 Haploid. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>



static NSString *const kFontAwesomeFamilyName = @"FontAwesome";

/**
 @abstract FontAwesome Icons.
 */
typedef NS_ENUM(NSInteger, FAIcon) {
    FAGlass,
    FAMusic,
    FASearch,
    FAEnvelopeO,
    FAHeart,
    FAStar,
    FAStarO,
    FAUser,
    FAFilm,
    FAThLarge,
    FATh,
    FAThList,
    FACheck,
    FATimes,
    FASearchPlus,
    FASearchMinus,
    FAPowerOff,
    FASignal,
    FACog,
    FATrashO,
    FAHome,
    FAFileO,
    FAClockO,
    FARoad,
    FADownload,
    FAArrowCircleODown,
    FAArrowCircleOUp,
    FAInbox,
    FAPlayCircleO,
    FARepeat,
    FARefresh,
    FAListAlt,
    FALock,
    FAFlag,
    FAHeadphones,
    FAVolumeOff,
    FAVolumeDown,
    FAVolumeUp,
    FAQrcode,
    FABarcode,
    FATag,
    FATags,
    FABook,
    FABookmark,
    FAPrint,
    FACamera,
    FAFont,
    FABold,
    FAItalic,
    FATextHeight,
    FATextWidth,
    FAAlignLeft,
    FAAlignCenter,
    FAAlignRight,
    FAAlignJustify,
    FAList,
    FAOutdent,
    FAIndent,
    FAVideoCamera,
    FAPictureO,
    FAPencil,
    FAMapMarker,
    FAAdjust,
    FATint,
    FAPencilSquareO,
    FAShareSquareO,
    FACheckSquareO,
    FAArrows,
    FAStepBackward,
    FAFastBackward,
    FABackward,
    FAPlay,
    FAPause,
    FAStop,
    FAForward,
    FAFastForward,
    FAStepForward,
    FAEject,
    FAChevronLeft,
    FAChevronRight,
    FAPlusCircle,
    FAMinusCircle,
    FATimesCircle,
    FACheckCircle,
    FAQuestionCircle,
    FAInfoCircle,
    FACrosshairs,
    FATimesCircleO,
    FACheckCircleO,
    FABan,
    FAArrowLeft,
    FAArrowRight,
    FAArrowUp,
    FAArrowDown,
    FAShare,
    FAExpand,
    FACompress,
    FAPlus,
    FAMinus,
    FAAsterisk,
    FAExclamationCircle,
    FAGift,
    FALeaf,
    FAFire,
    FAEye,
    FAEyeSlash,
    FAExclamationTriangle,
    FAPlane,
    FACalendar,
    FARandom,
    FAComment,
    FAMagnet,
    FAChevronUp,
    FAChevronDown,
    FARetweet,
    FAShoppingCart,
    FAFolder,
    FAFolderOpen,
    FAArrowsV,
    FAArrowsH,
    FABarChartO,
    FATwitterSquare,
    FAFacebookSquare,
    FACameraRetro,
    FAKey,
    FACogs,
    FAComments,
    FAThumbsOUp,
    FAThumbsODown,
    FAStarHalf,
    FAHeartO,
    FASignOut,
    FALinkedinSquare,
    FAThumbTack,
    FAExternalLink,
    FASignIn,
    FATrophy,
    FAGithubSquare,
    FAUpload,
    FALemonO,
    FAPhone,
    FASquareO,
    FABookmarkO,
    FAPhoneSquare,
    FATwitter,
    FAFacebook,
    FAGithub,
    FAUnlock,
    FACreditCard,
    FARss,
    FAHddO,
    FABullhorn,
    FABell,
    FACertificate,
    FAHandORight,
    FAHandOLeft,
    FAHandOUp,
    FAHandODown,
    FAArrowCircleLeft,
    FAArrowCircleRight,
    FAArrowCircleUp,
    FAArrowCircleDown,
    FAGlobe,
    FAWrench,
    FATasks,
    FAFilter,
    FABriefcase,
    FAArrowsAlt,
    FAUsers,
    FALink,
    FACloud,
    FAFlask,
    FAScissors,
    FAFilesO,
    FAPaperclip,
    FAFloppyO,
    FASquare,
    FABars,
    FAListUl,
    FAListOl,
    FAStrikethrough,
    FAUnderline,
    FATable,
    FAMagic,
    FATruck,
    FAPinterest,
    FAPinterestSquare,
    FAGooglePlusSquare,
    FAGooglePlus,
    FAMoney,
    FACaretDown,
    FACaretUp,
    FACaretLeft,
    FACaretRight,
    FAColumns,
    FASort,
    FASortAsc,
    FASortDesc,
    FAEnvelope,
    FALinkedin,
    FAUndo,
    FAGavel,
    FATachometer,
    FACommentO,
    FACommentsO,
    FABolt,
    FASitemap,
    FAUmbrella,
    FAClipboard,
    FALightbulbO,
    FAExchange,
    FACloudDownload,
    FACloudUpload,
    FAUserMd,
    FAStethoscope,
    FASuitcase,
    FABellO,
    FACoffee,
    FACutlery,
    FAFileTextO,
    FABuildingO,
    FAHospitalO,
    FAAmbulance,
    FAMedkit,
    FAFighterJet,
    FABeer,
    FAHSquare,
    FAPlusSquare,
    FAAngleDoubleLeft,
    FAAngleDoubleRight,
    FAAngleDoubleUp,
    FAAngleDoubleDown,
    FAAngleLeft,
    FAAngleRight,
    FAAngleUp,
    FAAngleDown,
    FADesktop,
    FALaptop,
    FATablet,
    FAMobile,
    FACircleO,
    FAQuoteLeft,
    FAQuoteRight,
    FASpinner,
    FACircle,
    FAReply,
    FAGithubAlt,
    FAFolderO,
    FAFolderOpenO,
    FASmileO,
    FAFrownO,
    FAMehO,
    FAGamepad,
    FAKeyboardO,
    FAFlagO,
    FAFlagCheckered,
    FATerminal,
    FACode,
    FAReplyAll,
    FAMailReplyAll,
    FAStarHalfO,
    FALocationArrow,
    FACrop,
    FACodeFork,
    FAChainBroken,
    FAQuestion,
    FAInfo,
    FAExclamation,
    FASuperscript,
    FASubscript,
    FAEraser,
    FAPuzzlePiece,
    FAMicrophone,
    FAMicrophoneSlash,
    FAShield,
    FACalendarO,
    FAFireExtinguisher,
    FARocket,
    FAMaxcdn,
    FAChevronCircleLeft,
    FAChevronCircleRight,
    FAChevronCircleUp,
    FAChevronCircleDown,
    FAHtml5,
    FACss3,
    FAAnchor,
    FAUnlockAlt,
    FABullseye,
    FAEllipsisH,
    FAEllipsisV,
    FARssSquare,
    FAPlayCircle,
    FATicket,
    FAMinusSquare,
    FAMinusSquareO,
    FALevelUp,
    FALevelDown,
    FACheckSquare,
    FAPencilSquare,
    FAExternalLinkSquare,
    FAShareSquare,
    FACompass,
    FACaretSquareODown,
    FACaretSquareOUp,
    FACaretSquareORight,
    FAEur,
    FAGbp,
    FAUsd,
    FAInr,
    FAJpy,
    FARub,
    FAKrw,
    FABtc,
    FAFile,
    FAFileText,
    FASortAlphaAsc,
    FASortAlphaDesc,
    FASortAmountAsc,
    FASortAmountDesc,
    FASortNumericAsc,
    FASortNumericDesc,
    FAThumbsUp,
    FAThumbsDown,
    FAYoutubeSquare,
    FAYoutube,
    FAXing,
    FAXingSquare,
    FAYoutubePlay,
    FADropbox,
    FAStackOverflow,
    FAInstagram,
    FAFlickr,
    FAAdn,
    FABitbucket,
    FABitbucketSquare,
    FATumblr,
    FATumblrSquare,
    FALongArrowDown,
    FALongArrowUp,
    FALongArrowLeft,
    FALongArrowRight,
    FAApple,
    FAWindows,
    FAAndroid,
    FALinux,
    FADribbble,
    FASkype,
    FAFoursquare,
    FATrello,
    FAFemale,
    FAMale,
    FAGittip,
    FASunO,
    FAMoonO,
    FAArchive,
    FABug,
    FAVk,
    FAWeibo,
    FARenren,
    FAPagelines,
    FAStackExchange,
    FAArrowCircleORight,
    FAArrowCircleOLeft,
    FACaretSquareOLeft,
    FADotCircleO,
    FAWheelchair,
    FAVimeoSquare,
    FATry,
    FAPlusSquareO,
    
    /* FontAwesome ver 4.1.0 */
    FAautomobile,
    FAbank,
    FAbehance,
    FAbehanceSquare,
    FAbomb,
    FAbuilding,
    FAcab,
    FAcar,
    FAchild,
    FAcircleONotch,
    FAcircleThin,
    FAcodepen,
    FAcube,
    FAcubes,
    FAdatabase,
    FAdelicious,
    FAdeviantart,
    FAdigg,
    FAdrupal,
    FAempire,
    FAenvelopeSquare,
    FAfax,
    FAfileArchiveO,
    FAfileAudioO,
    FAfileCodeO,
    FAfileExcelO,
    FAfileImageO,
    FAfileMovieO,
    FAfilePdfO,
    FAfilePhotoO,
    FAfilePictureO,
    FAfilePowerpointO,
    FAfileSoundO,
    FAfileVideoO,
    FAfileWordO,
    FAfileZipO,
    FAge,
    FAgit,
    FAgitSquare,
    FAgoogle,
    FAgraduationCap,
    FAhackerNews,
    FAheader,
    FAhistory,
    FAinstitution,
    FAjoomla,
    FAjsfiddle,
    FAlanguage,
    FAlifeBouy,
    FAlifeRing,
    FAlifeSaver,
    FAmortarBoard,
    FAopenid,
    FApaperPlane,
    FApaperPlaneO,
    FAparagraph,
    FApaw,
    FApiedPiper,
    FApiedPiperalt,
    FApiedPipersquare,
    FAqq,
    FAra,
    FArebel,
    FArecycle,
    FAreddit,
    FAredditSquare,
    FAsend,
    FAsendO,
    FAshareAlt,
    FAshareAltSquare,
    FAslack,
    FAsliders,
    FAsoundcloud,
    FAspaceShuttle,
    FAspoon,
    FAspotify,
    FAsteam,
    FAsteamSquare,
    FAstumbleupon,
    FAstumbleuponCircle,
    FAsupport,
    FAtaxi,
    FAtencentWeibo,
    FAtree,
    FAuniversity,
    FAvine,
    FAwechat,
    FAweixin,
    FAwordpress,    
    FAyahoo,
    
    /* FontAwesome ver 4.2.0 */
    FAangellist,
    FAareaChart,
    FAat,
    FAbellSlash,
    FAbellSlashO,
    FAbicycle,
    FAbinoculars,
    FAbirthdayCake,
    FAbus,
    FAcalculator,
    FAcc,
    FAccAmex,
    FAccDiscover,
    FAccMastercard,
    FAccPaypal,
    FAccStripe,
    FAccVisa,
    FAcopyright,
    FAeyedropper,
    FAfutbolO,
    FAgoogleWallet,
    FAils,
    FAioxhost,
    FAlastfm,
    FAlastfmSquare,
    FAlineChart,
    FAmeanpath,
    FAnewspaperO,
    FApaintBrush,
    FApaypal,
    FApieChart,
    FAplug,
    FAshekel,
    FAsheqel,
    FAslideshare,
    FAsoccerBallO,
    FAtoggleOff,
    FAtoggleOn,
    FAtrash,
    FAtty,
    FAtwitch,
    FAwifi,
    FAyelp,
};



@interface FontAwesome : NSObject

@end

@interface FAImageView : UIImageView

/* The background color for the default view displayed when the image is missing */
@property (nonatomic, strong) UIColor *defaultIconColor UI_APPEARANCE_SELECTOR;

/* Set the icon using the fontawesome icon's identifier */
@property (nonatomic, strong) NSString *defaultIconIdentifier;

/* Set the icon using the icon enumerations */
@property (nonatomic, assign) FAIcon defaultIcon;

/* The view that is displayed when the image is set to nil */
@property (nonatomic, strong) UILabel *defaultView;

@end

@interface UIFont (FontAwesome)

/**
 @abstract Returns the FontAwesome iconic font.
 */
+ (UIFont*)fontAwesomeFontOfSize:(CGFloat)size;

@end



@interface NSString (FontAwesome)

/**
 @abstract Returns the correct enum for a font-awesome icon.
 @discussion The list of identifiers can be found here: http://fortawesome.github.com/Font-Awesome/#all-icons
 */
+ (FAIcon)fontAwesomeEnumForIconIdentifier:(NSString*)string;

/**
 @abstract Returns the font-awesome character associated to the icon enum passed as argument
 */
+ (NSString*)fontAwesomeIconStringForEnum:(FAIcon)value;

/*
 @abstract Returns the font-awesome character associated to the font-awesome identifier.
 @discussion The list of identifiers can be found here: http://fortawesome.github.com/Font-Awesome/#all-icons
 */
+ (NSString*)fontAwesomeIconStringForIconIdentifier:(NSString*)identifier;

@end

@interface UIImage (FontAwesome)
/**
 *	This method generates an UIImage with a given FontAwesomeIcon and format parameters
 *
 *	@param	identifier	NSString that identifies the icon
 *	@param	bgColor     UIColor for background image Color
 *	@param	iconColor   UIColor for icon color
 *	@param	scale       Scale factor between the image size and the icon size
 *	@param	size        Size of the image to be generated
 *
 *	@return	Image to be used wherever you want
 */
+(UIImage*)imageWithIcon:(NSString*)identifier backgroundColor:(UIColor*)bgColor iconColor:(UIColor*)iconColor iconScale:(CGFloat)scale andSize:(CGSize)size;
/**
 *	This method generates an UIImage with a given FontAwesomeIcon and format parameters
 *
 *	@param	identifier	NSString that identifies the icon
 *	@param	bgColor     UIColor for background image Color
 *	@param	iconColor	UIColor for icon color
 *	@param	scale       Scale factor between the image size and the icon size
 *	@param	fontSize	Font size used to be generate the image
 *
 *	@return	Image to be used wherever you want
 */
+(UIImage*)imageWithIcon:(NSString*)identifier backgroundColor:(UIColor*)bgColor iconColor:(UIColor*)iconColor iconScale:(CGFloat)scale fontSize:(int)fontSize;
@end