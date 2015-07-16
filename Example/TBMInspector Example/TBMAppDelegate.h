//
//  TBMAppDelegate.h
//  TBMInspector Example
//
//  Created by Thore Bartholomäus on 18/03/14.
//
//

#import <Cocoa/Cocoa.h>

@interface TBMAppDelegate : NSObject <NSApplicationDelegate> {
    
    IBOutlet NSView *view1, *view2;
    IBOutlet NSScrollView *scrollView;
}

@property (weak) IBOutlet NSWindow *window;

@end
