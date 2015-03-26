/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class CUIPSDGradient, NSDictionary;

@interface CUIThemeSchemaRendition : CUIThemeRendition {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    long long _columnSlices;
    } _contentInsets;
    } _elementRect;
    CUIPSDGradient *_gradient;
    struct CGImage {} *_image[9];
    } _intrinsicSize;
    } _layoutRects[9];
    unsigned long long _nimages;
    long long _rowSlices;
    NSDictionary *cuiInfo;
}

@property(readonly) CUIPSDGradient * gradient;
@property(readonly) unsigned long long numberOfSlices;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }* sliceRects;

- (id).cxx_construct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentRectangle;
- (long long)columnSlices;
- (struct { double x1; double x2; double x3; double x4; })contentInsets;
- (id)coreUIOptions;
- (void)dealloc;
- (id)defaultTemplateName;
- (id)description;
- (unsigned short)dimension1;
- (id)dimension1LocalizedString;
- (unsigned short)dimension2;
- (id)dimension2LocalizedString;
- (unsigned short)direction;
- (id)directionLocalizedString;
- (unsigned short)drawingLayer;
- (id)drawingLayerLocalizedString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })edgeInsets:(bool)arg1;
- (id)gradient;
- (unsigned short)identifier;
- (id)initWithCoreUIOptions:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2 artworkStatus:(long long)arg3;
- (id)initWithCoreUIOptions:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2;
- (unsigned short)keyScale;
- (unsigned short)layer;
- (unsigned short)look;
- (id)lookLocalizedString;
- (unsigned long long)numberOfSlices;
- (unsigned short)presentationState;
- (id)presentationStateLocalizedString;
- (unsigned short)previousState;
- (id)previousStateLocalizedString;
- (unsigned short)previousValue;
- (id)previousValueLocalizedString;
- (id)referenceImage;
- (struct CGPoint { double x1; double x2; })renditionCoordinatesForPartFeatures:(long long)arg1;
- (long long)rowSlices;
- (double)scale;
- (id)scaleLocalizedString;
- (unsigned short)size;
- (id)sizeLocalizedString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)sliceRects;
- (id)slices;
- (unsigned short)state;
- (id)stateLocalizedString;
- (id)stringForState:(unsigned short)arg1;
- (id)stringForValue:(unsigned short)arg1;
- (id)typeLocalizedString;
- (unsigned short)value;
- (id)valueLocalizedString;

@end
