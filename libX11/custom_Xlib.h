// gta3 / libglfw
#include <X11/Xresource.h>
#include <X11/XKBlib.h>

DECLSPEC XFontStruct *XQueryFont(
    Display*		display,
    XID			font_ID
)
{
    WARN_STUB;
    return 0;
};


DECLSPEC XTimeCoord *XGetMotionEvents(
    Display*		display,
    Window		w,
    Time		start,
    Time		stop,
    int*		nevents_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC XModifierKeymap *XDeleteModifiermapEntry(
    XModifierKeymap*	modmap,
#if NeedWidePrototypes
    unsigned int	keycode_entry,
#else
    KeyCode		keycode_entry,
#endif
    int			modifier
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC XModifierKeymap	*XGetModifierMapping(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC XModifierKeymap	*XInsertModifiermapEntry(
    XModifierKeymap*	modmap,
#if NeedWidePrototypes
    unsigned int	keycode_entry,
#else
    KeyCode		keycode_entry,
#endif
    int			modifier
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC XModifierKeymap *XNewModifiermap(
    int			max_keys_per_mod
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC XImage *XCreateImage(
    Display*		display,
    Visual*		visual,
    unsigned int	depth,
    int			format,
    int			offset,
    char*		data,
    unsigned int	width,
    unsigned int	height,
    int			bitmap_pad,
    int			bytes_per_line
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC Status XInitImage(
    XImage*		image
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC XImage *XGetImage(
    Display*		display,
    Drawable		d,
    int			x,
    int			y,
    unsigned int	width,
    unsigned int	height,
    unsigned long	plane_mask,
    int			format
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC XImage *XGetSubImage(
    Display*		display,
    Drawable		d,
    int			x,
    int			y,
    unsigned int	width,
    unsigned int	height,
    unsigned long	plane_mask,
    int			format,
    XImage*		dest_image,
    int			dest_x,
    int			dest_y
)
{
    WARN_STUB;
    return 0;
};

/*
 * X function declarations.
 */

DECLSPEC void XrmInitialize(
    void
)
{
    WARN_STUB;
};

DECLSPEC char *XFetchBytes(
    Display*		display,
    int*		nbytes_return
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC char *XFetchBuffer(
    Display*		display,
    int*		nbytes_return,
    int			buffer
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC char *XGetAtomName(
    Display*		display,
    Atom		atom
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC Status XGetAtomNames(
    Display*		dpy,
    Atom*		atoms,
    int			count,
    char**		names_return
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC char *XGetDefault(
    Display*		display,
    _Xconst char*	program,
    _Xconst char*	option
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC char *XDisplayName(
    _Xconst char*	string
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC char *XKeysymToString(
    KeySym		keysym
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Colormap XCopyColormapAndFree(
    Display*		display,
    Colormap		colormap
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Cursor XCreateGlyphCursor(
    Display*		display,
    Font		source_font,
    Font		mask_font,
    unsigned int	source_char,
    unsigned int	mask_char,
    XColor _Xconst *	foreground_color,
    XColor _Xconst *	background_color
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Font XLoadFont(
    Display*		display,
    _Xconst char*	name
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC GC XCreateGC(
    Display*		display,
    Drawable		d,
    unsigned long	valuemask,
    XGCValues*		values
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC GContext XGContextFromGC(
    GC			gc
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC void XFlushGC(
    Display*		display,
    GC			gc
)
{
    WARN_STUB;
};
DECLSPEC Pixmap XCreatePixmap(
    Display*		display,
    Drawable		d,
    unsigned int	width,
    unsigned int	height,
    unsigned int	depth
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Pixmap XCreatePixmapFromBitmapData(
    Display*		display,
    Drawable		d,
    char*		data,
    unsigned int	width,
    unsigned int	height,
    unsigned long	fg,
    unsigned long	bg,
    unsigned int	depth
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC Window XCreateSimpleWindow(
    Display*		display,
    Window		parent,
    int			x,
    int			y,
    unsigned int	width,
    unsigned int	height,
    unsigned int	border_width,
    unsigned long	border,
    unsigned long	background
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC Window XGetSelectionOwner(
    Display*		display,
    Atom		selection
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Colormap *XListInstalledColormaps(
    Display*		display,
    Window		w,
    int*		num_return
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC char **XListFonts(
    Display*		display,
    _Xconst char*	pattern,
    int			maxnames,
    int*		actual_count_return
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC char **XListFontsWithInfo(
    Display*		display,
    _Xconst char*	pattern,
    int			maxnames,
    int*		count_return,
    XFontStruct**	info_return
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC char **XGetFontPath(
    Display*		display,
    int*		npaths_return
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC char **XListExtensions(
    Display*		display,
    int*		nextensions_return
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC Atom *XListProperties(
    Display*		display,
    Window		w,
    int*		num_prop_return
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC XHostAddress *XListHosts(
    Display*		display,
    int*		nhosts_return,
    Bool*		state_return
)
{
    WARN_STUB;
    return 0;
};
_X_DEPRECATED
DECLSPEC KeySym XKeycodeToKeysym(
    Display*		display,
#if NeedWidePrototypes
    unsigned int	keycode,
#else
    KeyCode		keycode,
#endif
    int			index
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC KeySym XLookupKeysym(
    XKeyEvent*		key_event,
    int			index
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC KeySym *XGetKeyboardMapping(
    Display*		display,
#if NeedWidePrototypes
    unsigned int	first_keycode,
#else
    KeyCode		first_keycode,
#endif
    int			keycode_count,
    int*		keysyms_per_keycode_return
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC KeySym XStringToKeysym(
    _Xconst char*	string
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC long XMaxRequestSize(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC long XExtendedMaxRequestSize(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC char *XResourceManagerString(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC char *XScreenResourceString(
	Screen*		screen
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC unsigned long XDisplayMotionBufferSize(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC VisualID XVisualIDFromVisual(
    Visual*		visual
)
{
    WARN_STUB;
    return 0;
};

/*
multithread routines
*/

DECLSPEC Status XInitThreads(
    void
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC void XLockDisplay(
    Display*		display
)
{
    WARN_STUB;
};

DECLSPEC void XUnlockDisplay(
    Display*		display
)
{
    WARN_STUB;
};

/*
routines for dealing with extensions
*/

DECLSPEC XExtCodes *XInitExtension(
    Display*		display,
    _Xconst char*	name
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC XExtCodes *XAddExtension(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC XExtData *XFindOnExtensionList(
    XExtData**		structure,
    int			number
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC XExtData **XEHeadOfExtensionList(
    XEDataObject	object
)
{
    WARN_STUB;
    return 0;
};

/*
these are routines for which there are also macros
*/
DECLSPEC Window XRootWindow(
    Display*		display,
    int			screen_number
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC Window XDefaultRootWindow(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC Window XRootWindowOfScreen(
    Screen*		screen
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC Visual *XDefaultVisual(
    Display*		display,
    int			screen_number
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC Visual *XDefaultVisualOfScreen(
    Screen*		screen
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC GC XDefaultGC(
    Display*		display,
    int			screen_number
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC GC XDefaultGCOfScreen(
    Screen*		screen
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC unsigned long XBlackPixel(
    Display*		display,
    int			screen_number
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC unsigned long XWhitePixel(
    Display*		display,
    int			screen_number
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC unsigned long XAllPlanes(
    void
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC unsigned long XBlackPixelOfScreen(
    Screen*		screen
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC unsigned long XWhitePixelOfScreen(
    Screen*		screen
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC unsigned long XNextRequest(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC unsigned long XLastKnownRequestProcessed(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC char *XServerVendor(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC char *XDisplayString(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC Colormap XDefaultColormap(
    Display*		display,
    int			screen_number
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC Colormap XDefaultColormapOfScreen(
    Screen*		screen
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC Display *XDisplayOfScreen(
    Screen*		screen
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC Screen *XScreenOfDisplay(
    Display*		display,
    int			screen_number
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC Screen *XDefaultScreenOfDisplay(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC long XEventMaskOfScreen(
    Screen*		screen
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XScreenNumberOfScreen(
    Screen*		screen
)
{
    WARN_STUB;
    return 0;
};

typedef int (*XErrorHandler)
(	    /*WARNING, this type not in Xlib spec*/
    Display*		display,
    XErrorEvent*	error_event
);

DECLSPEC XErrorHandler XSetErrorHandler (
    XErrorHandler	handler
)
{
    WARN_STUB;
    return 0;
};


typedef int (*XIOErrorHandler)
(    /*WARNING, this type not in Xlib spec*/
    Display*		display
);

DECLSPEC XIOErrorHandler XSetIOErrorHandler (
    XIOErrorHandler	handler
)
{
    WARN_STUB;
    return 0;
};


DECLSPEC XPixmapFormatValues *XListPixmapFormats(
    Display*		display,
    int*		count_return
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC int *XListDepths(
    Display*		display,
    int			screen_number,
    int*		count_return
)
{
    WARN_STUB;
    return 0;
};

/*
ICCCM routines for things that don't require special include files;
other declarations are given in Xutil.h                            
*/
DECLSPEC Status XReconfigureWMWindow(
    Display*		display,
    Window		w,
    int			screen_number,
    unsigned int	mask,
    XWindowChanges*	changes
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XGetWMProtocols(
    Display*		display,
    Window		w,
    Atom**		protocols_return,
    int*		count_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XIconifyWindow(
    Display*		display,
    Window		w,
    int			screen_number
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC Status XWithdrawWindow(
    Display*		display,
    Window		w,
    int			screen_number
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC Status XGetCommand(
    Display*		display,
    Window		w,
    char***		argv_return,
    int*		argc_return
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC Status XGetWMColormapWindows(
    Display*		display,
    Window		w,
    Window**		windows_return,
    int*		count_return
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC Status XSetWMColormapWindows(
    Display*		display,
    Window		w,
    Window*		colormap_windows,
    int			count
)
{
    WARN_STUB;
    return 0;
};
DECLSPEC void XFreeStringList(
    char**		list
)
{
    WARN_STUB;
};

/*The following are given in alphabetical order*/

DECLSPEC int XActivateScreenSaver(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XAddHost(
    Display*		display,
    XHostAddress*	host
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XAddHosts(
    Display*		display,
    XHostAddress*	hosts,
    int			num_hosts
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XAddToExtensionList(
    struct _XExtData**	structure,
    XExtData*		ext_data
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XAddToSaveSet(
    Display*		display,
    Window		w
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XAllocColor(
    Display*		display,
    Colormap		colormap,
    XColor*		screen_in_out
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XAllocColorCells(
    Display*		display,
    Colormap		colormap,
    Bool	        contig,
    unsigned long*	plane_masks_return,
    unsigned int	nplanes,
    unsigned long*	pixels_return,
    unsigned int 	npixels
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XAllocColorPlanes(
    Display*		display,
    Colormap		colormap,
    Bool		contig,
    unsigned long*	pixels_return,
    int			ncolors,
    int			nreds,
    int			ngreens,
    int			nblues,
    unsigned long*	rmask_return,
    unsigned long*	gmask_return,
    unsigned long*	bmask_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XAllocNamedColor(
    Display*		display,
    Colormap		colormap,
    _Xconst char*	color_name,
    XColor*		screen_def_return,
    XColor*		exact_def_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XAllowEvents(
    Display*		display,
    int			event_mode,
    Time		time
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XAutoRepeatOff(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XAutoRepeatOn(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XBell(
    Display*		display,
    int			percent
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XBitmapBitOrder(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XBitmapPad(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XBitmapUnit(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XCellsOfScreen(
    Screen*		screen
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XChangeActivePointerGrab(
    Display*		display,
    unsigned int	event_mask,
    Cursor		cursor,
    Time		time
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XChangeGC(
    Display*		display,
    GC			gc,
    unsigned long	valuemask,
    XGCValues*		values
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XChangeKeyboardControl(
    Display*		display,
    unsigned long	value_mask,
    XKeyboardControl*	values
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XChangeKeyboardMapping(
    Display*		display,
    int			first_keycode,
    int			keysyms_per_keycode,
    KeySym*		keysyms,
    int			num_codes
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XChangePointerControl(
    Display*		display,
    Bool		do_accel,
    Bool		do_threshold,
    int			accel_numerator,
    int			accel_denominator,
    int			threshold
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XChangeSaveSet(
    Display*		display,
    Window		w,
    int			change_mode
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XChangeWindowAttributes(
    Display*		display,
    Window		w,
    unsigned long	valuemask,
    XSetWindowAttributes* attributes
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool XCheckMaskEvent(
    Display*		display,
    long		event_mask,
    XEvent*		event_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool XCheckTypedEvent(
    Display*		display,
    int			event_type,
    XEvent*		event_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool XCheckTypedWindowEvent(
    Display*		display,
    Window		w,
    int			event_type,
    XEvent*		event_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool XCheckWindowEvent(
    Display*		display,
    Window		w,
    long		event_mask,
    XEvent*		event_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XCirculateSubwindows(
    Display*		display,
    Window		w,
    int			direction
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XCirculateSubwindowsDown(
    Display*		display,
    Window		w
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XCirculateSubwindowsUp(
    Display*		display,
    Window		w
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XClearArea(
    Display*		display,
    Window		w,
    int			x,
    int			y,
    unsigned int	width,
    unsigned int	height,
    Bool		exposures
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XCloseDisplay(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XConnectionNumber(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XConvertSelection(
    Display*		display,
    Atom		selection,
    Atom 		target,
    Atom		property,
    Window		requestor,
    Time		time
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XCopyArea(
    Display*		display,
    Drawable		src,
    Drawable		dest,
    GC			gc,
    int			src_x,
    int			src_y,
    unsigned int	width,
    unsigned int	height,
    int			dest_x,
    int			dest_y
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XCopyGC(
    Display*		display,
    GC			src,
    unsigned long	valuemask,
    GC			dest
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XCopyPlane(
    Display*		display,
    Drawable		src,
    Drawable		dest,
    GC			gc,
    int			src_x,
    int			src_y,
    unsigned int	width,
    unsigned int	height,
    int			dest_x,
    int			dest_y,
    unsigned long	plane
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XDefaultDepthOfScreen(
    Screen*		screen
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XDefaultScreen(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XDeleteProperty(
    Display*		display,
    Window		w,
    Atom		property
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XDestroyWindow(
    Display*		display,
    Window		w
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XDestroySubwindows(
    Display*		display,
    Window		w
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XDoesBackingStore(
    Screen*		screen
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool XDoesSaveUnders(
    Screen*		screen
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XDisableAccessControl(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};


DECLSPEC int XDisplayCells(
    Display*		display,
    int			screen_number
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XDisplayKeycodes(
    Display*		display,
    int*		min_keycodes_return,
    int*		max_keycodes_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XDisplayPlanes(
    Display*		display,
    int			screen_number
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XDrawArc(
    Display*		display,
    Drawable		d,
    GC			gc,
    int			x,
    int			y,
    unsigned int	width,
    unsigned int	height,
    int			angle1,
    int			angle2
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XDrawArcs(
    Display*		display,
    Drawable		d,
    GC			gc,
    XArc*		arcs,
    int			narcs
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XDrawImageString(
    Display*		display,
    Drawable		d,
    GC			gc,
    int			x,
    int			y,
    _Xconst char*	string,
    int			length
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XDrawImageString16(
    Display*		display,
    Drawable		d,
    GC			gc,
    int			x,
    int			y,
    _Xconst XChar2b*	string,
    int			length
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XDrawLine(
    Display*		display,
    Drawable		d,
    GC			gc,
    int			x1,
    int			y1,
    int			x2,
    int			y2
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XDrawLines(
    Display*		display,
    Drawable		d,
    GC			gc,
    XPoint*		points,
    int			npoints,
    int			mode
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XDrawPoint(
    Display*		display,
    Drawable		d,
    GC			gc,
    int			x,
    int			y
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XDrawPoints(
    Display*		display,
    Drawable		d,
    GC			gc,
    XPoint*		points,
    int			npoints,
    int			mode
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XDrawRectangle(
    Display*		display,
    Drawable		d,
    GC			gc,
    int			x,
    int			y,
    unsigned int	width,
    unsigned int	height
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XDrawRectangles(
    Display*		display,
    Drawable		d,
    GC			gc,
    XRectangle*		rectangles,
    int			nrectangles
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XDrawSegments(
    Display*		display,
    Drawable		d,
    GC			gc,
    XSegment*		segments,
    int			nsegments
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XDrawString(
    Display*		display,
    Drawable		d,
    GC			gc,
    int			x,
    int			y,
    _Xconst char*	string,
    int			length
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XDrawString16(
    Display*		display,
    Drawable		d,
    GC			gc,
    int			x,
    int			y,
    _Xconst XChar2b*	string,
    int			length
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XDrawText(
    Display*		display,
    Drawable		d,
    GC			gc,
    int			x,
    int			y,
    XTextItem*		items,
    int			nitems
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XDrawText16(
    Display*		display,
    Drawable		d,
    GC			gc,
    int			x,
    int			y,
    XTextItem16*	items,
    int			nitems
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XEnableAccessControl(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XFetchName(
    Display*		display,
    Window		w,
    char**		window_name_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XFillArc(
    Display*		display,
    Drawable		d,
    GC			gc,
    int			x,
    int			y,
    unsigned int	width,
    unsigned int	height,
    int			angle1,
    int			angle2
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XFillArcs(
    Display*		display,
    Drawable		d,
    GC			gc,
    XArc*		arcs,
    int			narcs
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XFillPolygon(
    Display*		display,
    Drawable		d,
    GC			gc,
    XPoint*		points,
    int			npoints,
    int			shape,
    int			mode
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XFillRectangle(
    Display*		display,
    Drawable		d,
    GC			gc,
    int			x,
    int			y,
    unsigned int	width,
    unsigned int	height
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XFillRectangles(
    Display*		display,
    Drawable		d,
    GC			gc,
    XRectangle*		rectangles,
    int			nrectangles
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XFlush(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XForceScreenSaver(
    Display*		display,
    int			mode
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XFreeColormap(
    Display*		display,
    Colormap		colormap
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XFreeColors(
    Display*		display,
    Colormap		colormap,
    unsigned long*	pixels,
    int			npixels,
    unsigned long	planes
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XFreeExtensionList(
    char**		list
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XFreeFont(
    Display*		display,
    XFontStruct*	font_struct
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XFreeFontInfo(
    char**		names,
    XFontStruct*	free_info,
    int			actual_count
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XFreeFontNames(
    char**		list
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XFreeFontPath(
    char**		list
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XFreeGC(
    Display*		display,
    GC			gc
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XFreeModifiermap(
    XModifierKeymap*	modmap
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XFreePixmap(
    Display*		display,
    Pixmap		pixmap
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XGeometry(
    Display*		display,
    int			screen,
    _Xconst char*	position,
    _Xconst char*	default_position,
    unsigned int	bwidth,
    unsigned int	fwidth,
    unsigned int	fheight,
    int			xadder,
    int			yadder,
    int*		x_return,
    int*		y_return,
    int*		width_return,
    int*		height_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XGetErrorDatabaseText(
    Display*		display,
    _Xconst char*	name,
    _Xconst char*	message,
    _Xconst char*	default_string,
    char*		buffer_return,
    int			length
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XGetErrorText(
    Display*		display,
    int			code,
    char*		buffer_return,
    int			length
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool XGetFontProperty(
    XFontStruct*	font_struct,
    Atom		atom,
    unsigned long*	value_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XGetGCValues(
    Display*		display,
    GC			gc,
    unsigned long	valuemask,
    XGCValues*		values_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XGetIconName(
    Display*		display,
    Window		w,
    char**		icon_name_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XGetInputFocus(
    Display*		display,
    Window*		focus_return,
    int*		revert_to_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XGetKeyboardControl(
    Display*		display,
    XKeyboardState*	values_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XGetPointerControl(
    Display*		display,
    int*		accel_numerator_return,
    int*		accel_denominator_return,
    int*		threshold_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XGetPointerMapping(
    Display*		display,
    unsigned char*	map_return,
    int			nmap
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XGetScreenSaver(
    Display*		display,
    int*		timeout_return,
    int*		interval_return,
    int*		prefer_blanking_return,
    int*		allow_exposures_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XGetTransientForHint(
    Display*		display,
    Window		w,
    Window*		prop_window_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XGetWindowProperty(
    Display*		display,
    Window		w,
    Atom		property,
    long		long_offset,
    long		long_length,
    Bool		delete,
    Atom		req_type,
    Atom*		actual_type_return,
    int*		actual_format_return,
    unsigned long*	nitems_return,
    unsigned long*	bytes_after_return,
    unsigned char**	prop_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XGrabButton(
    Display*		display,
    unsigned int	button,
    unsigned int	modifiers,
    Window		grab_window,
    Bool		owner_events,
    unsigned int	event_mask,
    int			pointer_mode,
    int			keyboard_mode,
    Window		confine_to,
    Cursor		cursor
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XGrabKey(
    Display*		display,
    int			keycode,
    unsigned int	modifiers,
    Window		grab_window,
    Bool		owner_events,
    int			pointer_mode,
    int			keyboard_mode
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XGrabKeyboard(
    Display*		display,
    Window		grab_window,
    Bool		owner_events,
    int			pointer_mode,
    int			keyboard_mode,
    Time		time
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XGrabPointer(
    Display*		display,
    Window		grab_window,
    Bool		owner_events,
    unsigned int	event_mask,
    int			pointer_mode,
    int			keyboard_mode,
    Window		confine_to,
    Cursor		cursor,
    Time		time
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XGrabServer(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XHeightMMOfScreen(
    Screen*		screen
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XHeightOfScreen(
    Screen*		screen
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XImageByteOrder(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XInstallColormap(
    Display*		display,
    Colormap		colormap
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC KeyCode XKeysymToKeycode(
    Display*		display,
    KeySym		keysym
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XKillClient(
    Display*		display,
    XID			resource
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XLookupColor(
    Display*		display,
    Colormap		colormap,
    _Xconst char*	color_name,
    XColor*		exact_def_return,
    XColor*		screen_def_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XLowerWindow(
    Display*		display,
    Window		w
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XMapSubwindows(
    Display*		display,
    Window		w
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XMapWindow(
    Display*		display,
    Window		w
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XMaskEvent(
    Display*		display,
    long		event_mask,
    XEvent*		event_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XMaxCmapsOfScreen(
    Screen*		screen
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XMinCmapsOfScreen(
    Screen*		screen
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XMoveResizeWindow(
    Display*		display,
    Window		w,
    int			x,
    int			y,
    unsigned int	width,
    unsigned int	height
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XNoOp(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XParseColor(
    Display*		display,
    Colormap		colormap,
    _Xconst char*	spec,
    XColor*		exact_def_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XParseGeometry(
    _Xconst char*	parsestring,
    int*		x_return,
    int*		y_return,
    unsigned int*	width_return,
    unsigned int*	height_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XPlanesOfScreen(
    Screen*		screen
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XProtocolRevision(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XProtocolVersion(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};


DECLSPEC int XPutBackEvent(
    Display*		display,
    XEvent*		event
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XPutImage(
    Display*		display,
    Drawable		d,
    GC			gc,
    XImage*		image,
    int			src_x,
    int			src_y,
    int			dest_x,
    int			dest_y,
    unsigned int	width,
    unsigned int	height
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XQLength(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XQueryBestCursor(
    Display*		display,
    Drawable		d,
    unsigned int        width,
    unsigned int	height,
    unsigned int*	width_return,
    unsigned int*	height_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XQueryBestSize(
    Display*		display,
    int			class,
    Drawable		which_screen,
    unsigned int	width,
    unsigned int	height,
    unsigned int*	width_return,
    unsigned int*	height_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XQueryBestStipple(
    Display*		display,
    Drawable		which_screen,
    unsigned int	width,
    unsigned int	height,
    unsigned int*	width_return,
    unsigned int*	height_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XQueryBestTile(
    Display*		display,
    Drawable		which_screen,
    unsigned int	width,
    unsigned int	height,
    unsigned int*	width_return,
    unsigned int*	height_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XQueryColor(
    Display*		display,
    Colormap		colormap,
    XColor*		def_in_out
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XQueryColors(
    Display*		display,
    Colormap		colormap,
    XColor*		defs_in_out,
    int			ncolors
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool XQueryExtension(
    Display*		display,
    _Xconst char*	name,
    int*		major_opcode_return,
    int*		first_event_return,
    int*		first_error_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XQueryKeymap(
    Display*		display,
    char*		keys_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XQueryTextExtents(
    Display*		display,
    XID			font_ID,
    _Xconst char*	string,
    int			nchars,
    int*		direction_return,
    int*		font_ascent_return,
    int*		font_descent_return,
    XCharStruct*	overall_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XQueryTextExtents16(
    Display*		display,
    XID			font_ID,
    _Xconst XChar2b*	string,
    int			nchars,
    int*		direction_return,
    int*		font_ascent_return,
    int*		font_descent_return,
    XCharStruct*	overall_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XQueryTree(
    Display*		display,
    Window		w,
    Window*		root_return,
    Window*		parent_return,
    Window**		children_return,
    unsigned int*	nchildren_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XRaiseWindow(
    Display*		display,
    Window		w
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XReadBitmapFile(
    Display*		display,
    Drawable 		d,
    _Xconst char*	filename,
    unsigned int*	width_return,
    unsigned int*	height_return,
    Pixmap*		bitmap_return,
    int*		x_hot_return,
    int*		y_hot_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XReadBitmapFileData(
    _Xconst char*	filename,
    unsigned int*	width_return,
    unsigned int*	height_return,
    unsigned char**	data_return,
    int*		x_hot_return,
    int*		y_hot_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XRebindKeysym(
    Display*		display,
    KeySym		keysym,
    KeySym*		list,
    int			mod_count,
    _Xconst unsigned char*	string,
    int			bytes_string
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XRecolorCursor(
    Display*		display,
    Cursor		cursor,
    XColor*		foreground_color,
    XColor*		background_color
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XRefreshKeyboardMapping(
    XMappingEvent*	event_map
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XRemoveFromSaveSet(
    Display*		display,
    Window		w
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XRemoveHost(
    Display*		display,
    XHostAddress*	host
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XRemoveHosts(
    Display*		display,
    XHostAddress*	hosts,
    int			num_hosts
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XReparentWindow(
    Display*		display,
    Window		w,
    Window		parent,
    int			x,
    int			y
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XResizeWindow(
    Display*		display,
    Window		w,
    unsigned int	width,
    unsigned int	height
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XRestackWindows(
    Display*		display,
    Window*		windows,
    int			nwindows
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XRotateBuffers(
    Display*		display,
    int			rotate
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XRotateWindowProperties(
    Display*		display,
    Window		w,
    Atom*		properties,
    int			num_prop,
    int			npositions
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XScreenCount(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSelectInput(
    Display*		display,
    Window		w,
    long		event_mask
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetAccessControl(
    Display*		display,
    int			mode
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetArcMode(
    Display*		display,
    GC			gc,
    int			arc_mode
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetBackground(
    Display*		display,
    GC			gc,
    unsigned long	background
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetClipMask(
    Display*		display,
    GC			gc,
    Pixmap		pixmap
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetClipOrigin(
    Display*		display,
    GC			gc,
    int			clip_x_origin,
    int			clip_y_origin
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetClipRectangles(
    Display*		display,
    GC			gc,
    int			clip_x_origin,
    int			clip_y_origin,
    XRectangle*		rectangles,
    int			n,
    int			ordering
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetCloseDownMode(
    Display*		display,
    int			close_mode
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetCommand(
    Display*		display,
    Window		w,
    char**		argv,
    int			argc
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetDashes(
    Display*		display,
    GC			gc,
    int			dash_offset,
    _Xconst char*	dash_list,
    int			n
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetFillRule(
    Display*		display,
    GC			gc,
    int			fill_rule
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetFillStyle(
    Display*		display,
    GC			gc,
    int			fill_style
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetFont(
    Display*		display,
    GC			gc,
    Font		font
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetFontPath(
    Display*		display,
    char**		directories,
    int			ndirs
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetForeground(
    Display*		display,
    GC			gc,
    unsigned long	foreground
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetFunction(
    Display*		display,
    GC			gc,
    int			function
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetGraphicsExposures(
    Display*		display,
    GC			gc,
    Bool		graphics_exposures
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetIconName(
    Display*		display,
    Window		w,
    _Xconst char*	icon_name
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetLineAttributes(
    Display*		display,
    GC			gc,
    unsigned int	line_width,
    int			line_style,
    int			cap_style,
    int			join_style
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetModifierMapping(
    Display*		display,
    XModifierKeymap*	modmap
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetPlaneMask(
    Display*		display,
    GC			gc,
    unsigned long	plane_mask
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetPointerMapping(
    Display*		display,
    _Xconst unsigned char*	map,
    int			nmap
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetScreenSaver(
    Display*		display,
    int			timeout,
    int			interval,
    int			prefer_blanking,
    int			allow_exposures
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetSelectionOwner(
    Display*		display,
    Atom	        selection,
    Window		owner,
    Time		time
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetState(
    Display*		display,
    GC			gc,
    unsigned long 	foreground,
    unsigned long	background,
    int			function,
    unsigned long	plane_mask
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetStipple(
    Display*		display,
    GC			gc,
    Pixmap		stipple
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetSubwindowMode(
    Display*		display,
    GC			gc,
    int			subwindow_mode
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetTSOrigin(
    Display*		display,
    GC			gc,
    int			ts_x_origin,
    int			ts_y_origin
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetTile(
    Display*		display,
    GC			gc,
    Pixmap		tile
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetWindowBackground(
    Display*		display,
    Window		w,
    unsigned long	background_pixel
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetWindowBackgroundPixmap(
    Display*		display,
    Window		w,
    Pixmap		background_pixmap
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetWindowBorder(
    Display*		display,
    Window		w,
    unsigned long	border_pixel
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetWindowBorderPixmap(
    Display*		display,
    Window		w,
    Pixmap		border_pixmap
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetWindowBorderWidth(
    Display*		display,
    Window		w,
    unsigned int	width
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetWindowColormap(
    Display*		display,
    Window		w,
    Colormap		colormap
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XStoreBuffer(
    Display*		display,
    _Xconst char*	bytes,
    int			nbytes,
    int			buffer
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XStoreBytes(
    Display*		display,
    _Xconst char*	bytes,
    int			nbytes
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XStoreColor(
    Display*		display,
    Colormap		colormap,
    XColor*		color
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XStoreColors(
    Display*		display,
    Colormap		colormap,
    XColor*		color,
    int			ncolors
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XStoreName(
    Display*		display,
    Window		w,
    _Xconst char*	window_name
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XStoreNamedColor(
    Display*		display,
    Colormap		colormap,
    _Xconst char*	color,
    unsigned long	pixel,
    int			flags
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XTextExtents(
    XFontStruct*	font_struct,
    _Xconst char*	string,
    int			nchars,
    int*		direction_return,
    int*		font_ascent_return,
    int*		font_descent_return,
    XCharStruct*	overall_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XTextExtents16(
    XFontStruct*	font_struct,
    _Xconst XChar2b*	string,
    int			nchars,
    int*		direction_return,
    int*		font_ascent_return,
    int*		font_descent_return,
    XCharStruct*	overall_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XTextWidth(
    XFontStruct*	font_struct,
    _Xconst char*	string,
    int			count
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XTextWidth16(
    XFontStruct*	font_struct,
    _Xconst XChar2b*	string,
    int			count
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool XTranslateCoordinates(
    Display*		display,
    Window		src_w,
    Window		dest_w,
    int			src_x,
    int			src_y,
    int*		dest_x_return,
    int*		dest_y_return,
    Window*		child_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XUngrabButton(
    Display*		display,
    unsigned int	button,
    unsigned int	modifiers,
    Window		grab_window
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XUngrabKey(
    Display*		display,
    int			keycode,
    unsigned int	modifiers,
    Window		grab_window
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XUngrabKeyboard(
    Display*		display,
    Time		time
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XUngrabPointer(
    Display*		display,
    Time		time
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XUngrabServer(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XUninstallColormap(
    Display*		display,
    Colormap		colormap
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XUnloadFont(
    Display*		display,
    Font		font
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XUnmapSubwindows(
    Display*		display,
    Window		w
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XUnmapWindow(
    Display*		display,
    Window		w
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XVendorRelease(
    Display*		display
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XWidthMMOfScreen(
    Screen*		screen
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XWidthOfScreen(
    Screen*		screen
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XWindowEvent(
    Display*		display,
    Window		w,
    long		event_mask,
    XEvent*		event_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XWriteBitmapFile(
    Display*		display,
    _Xconst char*	filename,
    Pixmap		bitmap,
    unsigned int	width,
    unsigned int	height,
    int			x_hot,
    int			y_hot
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool XSupportsLocale (void)
{
    WARN_STUB;
    return 0;
};

DECLSPEC char *XSetLocaleModifiers(
    const char*		modifier_list
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC XOM XOpenOM(
    Display*			display,
    struct _XrmHashBucketRec*	rdb,
    _Xconst char*		res_name,
    _Xconst char*		res_class
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XCloseOM(
    XOM			om
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Display *XDisplayOfOM(
    XOM			om
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC char *XLocaleOfOM(
    XOM			om
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC void XDestroyOC(
    XOC			oc
)
{
    WARN_STUB;
};

DECLSPEC XOM XOMOfOC(
    XOC			oc
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC XFontSet XCreateFontSet(
    Display*		display,
    _Xconst char*	base_font_name_list,
    char***		missing_charset_list,
    int*		missing_charset_count,
    char**		def_string
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC void XFreeFontSet(
    Display*		display,
    XFontSet		font_set
)
{
    WARN_STUB;
};

DECLSPEC int XFontsOfFontSet(
    XFontSet		font_set,
    XFontStruct***	font_struct_list,
    char***		font_name_list
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC char *XBaseFontNameListOfFontSet(
    XFontSet		font_set
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC char *XLocaleOfFontSet(
    XFontSet		font_set
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool XContextDependentDrawing(
    XFontSet		font_set
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool XDirectionalDependentDrawing(
    XFontSet		font_set
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool XContextualDrawing(
    XFontSet		font_set
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC XFontSetExtents *XExtentsOfFontSet(
    XFontSet		font_set
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XmbTextEscapement(
    XFontSet		font_set,
    _Xconst char*	text,
    int			bytes_text
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XwcTextEscapement(
    XFontSet		font_set,
    _Xconst wchar_t*	text,
    int			num_wchars
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int Xutf8TextEscapement(
    XFontSet		font_set,
    _Xconst char*	text,
    int			bytes_text
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XmbTextExtents(
    XFontSet		font_set,
    _Xconst char*	text,
    int			bytes_text,
    XRectangle*		overall_ink_return,
    XRectangle*		overall_logical_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XwcTextExtents(
    XFontSet		font_set,
    _Xconst wchar_t*	text,
    int			num_wchars,
    XRectangle*		overall_ink_return,
    XRectangle*		overall_logical_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int Xutf8TextExtents(
    XFontSet		font_set,
    _Xconst char*	text,
    int			bytes_text,
    XRectangle*		overall_ink_return,
    XRectangle*		overall_logical_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XmbTextPerCharExtents(
    XFontSet		font_set,
    _Xconst char*	text,
    int			bytes_text,
    XRectangle*		ink_extents_buffer,
    XRectangle*		logical_extents_buffer,
    int			buffer_size,
    int*		num_chars,
    XRectangle*		overall_ink_return,
    XRectangle*		overall_logical_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XwcTextPerCharExtents(
    XFontSet		font_set,
    _Xconst wchar_t*	text,
    int			num_wchars,
    XRectangle*		ink_extents_buffer,
    XRectangle*		logical_extents_buffer,
    int			buffer_size,
    int*		num_chars,
    XRectangle*		overall_ink_return,
    XRectangle*		overall_logical_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status Xutf8TextPerCharExtents(
    XFontSet		font_set,
    _Xconst char*	text,
    int			bytes_text,
    XRectangle*		ink_extents_buffer,
    XRectangle*		logical_extents_buffer,
    int			buffer_size,
    int*		num_chars,
    XRectangle*		overall_ink_return,
    XRectangle*		overall_logical_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC void XmbDrawText(
    Display*		display,
    Drawable		d,
    GC			gc,
    int			x,
    int			y,
    XmbTextItem*	text_items,
    int			nitems
)
{
    WARN_STUB;
};

DECLSPEC void XwcDrawText(
    Display*		display,
    Drawable		d,
    GC			gc,
    int			x,
    int			y,
    XwcTextItem*	text_items,
    int			nitems
)
{
    WARN_STUB;
};

DECLSPEC void Xutf8DrawText(
    Display*		display,
    Drawable		d,
    GC			gc,
    int			x,
    int			y,
    XmbTextItem*	text_items,
    int			nitems
)
{
    WARN_STUB;
};

DECLSPEC void XmbDrawString(
    Display*		display,
    Drawable		d,
    XFontSet		font_set,
    GC			gc,
    int			x,
    int			y,
    _Xconst char*	text,
    int			bytes_text
)
{
    WARN_STUB;
};

DECLSPEC void XwcDrawString(
    Display*		display,
    Drawable		d,
    XFontSet		font_set,
    GC			gc,
    int			x,
    int			y,
    _Xconst wchar_t*	text,
    int			num_wchars
)
{
    WARN_STUB;
};

DECLSPEC void Xutf8DrawString(
    Display*		display,
    Drawable		d,
    XFontSet		font_set,
    GC			gc,
    int			x,
    int			y,
    _Xconst char*	text,
    int			bytes_text
)
{
    WARN_STUB;
};

DECLSPEC void XmbDrawImageString(
    Display*		display,
    Drawable		d,
    XFontSet		font_set,
    GC			gc,
    int			x,
    int			y,
    _Xconst char*	text,
    int			bytes_text
)
{
    WARN_STUB;
};

DECLSPEC void XwcDrawImageString(
    Display*		display,
    Drawable		d,
    XFontSet		font_set,
    GC			gc,
    int			x,
    int			y,
    _Xconst wchar_t*	text,
    int			num_wchars
)
{
    WARN_STUB;
};

DECLSPEC void Xutf8DrawImageString(
    Display*		display,
    Drawable		d,
    XFontSet		font_set,
    GC			gc,
    int			x,
    int			y,
    _Xconst char*	text,
    int			bytes_text
)
{
    WARN_STUB;
};

DECLSPEC XIM XOpenIM(
    Display*			dpy,
    struct _XrmHashBucketRec*	rdb,
    char*			res_name,
    char*			res_class
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XCloseIM(
    XIM im
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC char *XGetIMValues(
    XIM im
)
{
    WARN_STUB;
    return 0;
}

DECLSPEC Display *XDisplayOfIM(
    XIM im
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC char *XLocaleOfIM(
    XIM im
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC XIC XCreateIC(
    XIM im
)
{
    WARN_STUB;
    return 0;
}

DECLSPEC void XDestroyIC(
    XIC ic
)
{
    WARN_STUB;
};

DECLSPEC void XSetICFocus(
    XIC ic
)
{
    WARN_STUB;
};

DECLSPEC void XUnsetICFocus(
    XIC ic
)
{
    WARN_STUB;
};

DECLSPEC wchar_t *XwcResetIC(
    XIC ic
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC char *XmbResetIC(
    XIC ic
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC char *Xutf8ResetIC(
    XIC ic
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC char *XGetICValues(
    XIC ic
)
{
    WARN_STUB;
    return 0;
}

DECLSPEC XIM XIMOfIC(
    XIC ic
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool XFilterEvent(
    XEvent*	event,
    Window	window
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XmbLookupString(
    XIC			ic,
    XKeyPressedEvent*	event,
    char*		buffer_return,
    int			bytes_buffer,
    KeySym*		keysym_return,
    Status*		status_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XwcLookupString(
    XIC			ic,
    XKeyPressedEvent*	event,
    wchar_t*		buffer_return,
    int			wchars_buffer,
    KeySym*		keysym_return,
    Status*		status_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int Xutf8LookupString(
    XIC			ic,
    XKeyPressedEvent*	event,
    char*		buffer_return,
    int			bytes_buffer,
    KeySym*		keysym_return,
    Status*		status_return
)
{
    WARN_STUB;
    return 0;
};

/*
internal connections for IMs
*/

DECLSPEC Bool XRegisterIMInstantiateCallback(
    Display*			dpy,
    struct _XrmHashBucketRec*	rdb,
    char*			res_name,
    char*			res_class,
    XIDProc			callback,
    XPointer			client_data
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool XUnregisterIMInstantiateCallback(
    Display*			dpy,
    struct _XrmHashBucketRec*	rdb,
    char*			res_name,
    char*			res_class,
    XIDProc			callback,
    XPointer			client_data
)
{
    WARN_STUB;
    return 0;
};

typedef void (*XConnectionWatchProc)
(
    Display*			dpy,
    XPointer			client_data,
    int				fd,
    Bool			opening,	/* open or close flag*/
    XPointer*			watch_data /* open sets, close uses */
);


DECLSPEC Status XInternalConnectionNumbers(
    Display*			dpy,
    int**			fd_return,
    int*			count_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC void XProcessInternalConnection(
    Display*			dpy,
    int				fd
)
{
    WARN_STUB;
};

DECLSPEC Status XAddConnectionWatch(
    Display*			dpy,
    XConnectionWatchProc	callback,
    XPointer			client_data
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC void XRemoveConnectionWatch(
    Display*			dpy,
    XConnectionWatchProc	callback,
    XPointer			client_data
)
{
    WARN_STUB;
};

DECLSPEC void XSetAuthorization(
    char *			name,
    int				namelen,
    char *			data,
    int				datalen
)
{
    WARN_STUB;
};

DECLSPEC int _Xmbtowc(
    wchar_t *			wstr,
    char *			str,
    int				len
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int _Xwctomb(
    char *			str,
    wchar_t			wc
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool XGetEventData(
    Display*			dpy,
    XGenericEventCookie*	cookie
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC void XFreeEventData(
    Display*			dpy,
    XGenericEventCookie*	cookie
)
{
    WARN_STUB;
};