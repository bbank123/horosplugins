//
//  EjectionFractionDicomSaveDialog.h
//  Ejection Fraction II
//
//  Created by Alessandro Volz on 18.12.09.
//  Copyright 2009 OsiriX Team. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface EjectionFractionDicomSaveDialog : NSWindow {
	IBOutlet NSColorWell* _imageBackgroundColor;
	IBOutlet NSButton* _saveButton;
	IBOutlet NSButton* _cancelButton;
}

-(IBAction)buttonClicked:(id)sender;

-(NSColor*)imageBackgroundColor;
-(void)setImageBackgroundColor:(NSColor*)imageBackgroundColor;

@end