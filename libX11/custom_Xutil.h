DECLSPEC XClassHint *XAllocClassHint (
    void
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC XIconSize *XAllocIconSize (
    void
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC XSizeHints *XAllocSizeHints (
    void
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC XStandardColormap *XAllocStandardColormap (
    void
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC XWMHints *XAllocWMHints (
    void
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XClipBox(
    Region		r,
    XRectangle*		rect_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Region XCreateRegion(
    void
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC const char *XDefaultString (void)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XDeleteContext(
    Display*		display,
    XID			rid,
    XContext		context
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XDestroyRegion(
    Region		r
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XEmptyRegion(
    Region		r
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XEqualRegion(
    Region		r1,
    Region		r2
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XFindContext(
    Display*		display,
    XID			rid,
    XContext		context,
    XPointer*		data_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XGetClassHint(
    Display*		display,
    Window		w,
    XClassHint*		class_hints_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XGetIconSizes(
    Display*		display,
    Window		w,
    XIconSize**		size_list_return,
    int*		count_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XGetNormalHints(
    Display*		display,
    Window		w,
    XSizeHints*		hints_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XGetRGBColormaps(
    Display*		display,
    Window		w,
    XStandardColormap** stdcmap_return,
    int*		count_return,
    Atom		property
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XGetSizeHints(
    Display*		display,
    Window		w,
    XSizeHints*		hints_return,
    Atom		property
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XGetStandardColormap(
    Display*		display,
    Window		w,
    XStandardColormap*	colormap_return,
    Atom		property
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XGetTextProperty(
    Display*		display,
    Window		window,
    XTextProperty*	text_prop_return,
    Atom		property
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XGetWMClientMachine(
    Display*		display,
    Window		w,
    XTextProperty*	text_prop_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC XWMHints *XGetWMHints(
    Display*		display,
    Window		w
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XGetWMIconName(
    Display*		display,
    Window		w,
    XTextProperty*	text_prop_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XGetWMName(
    Display*		display,
    Window		w,
    XTextProperty*	text_prop_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XGetWMNormalHints(
    Display*		display,
    Window		w,
    XSizeHints*		hints_return,
    long*		supplied_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XGetWMSizeHints(
    Display*		display,
    Window		w,
    XSizeHints*		hints_return,
    long*		supplied_return,
    Atom		property
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XGetZoomHints(
    Display*		display,
    Window		w,
    XSizeHints*		zhints_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XIntersectRegion(
    Region		sra,
    Region		srb,
    Region		dr_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC void XConvertCase(
    KeySym		sym,
    KeySym*		lower,
    KeySym*		upper
)
{
    WARN_STUB;
};

DECLSPEC Status XMatchVisualInfo(
    Display*		display,
    int			screen,
    int			depth,
    int			class,
    XVisualInfo*	vinfo_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XOffsetRegion(
    Region		r,
    int			dx,
    int			dy
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool XPointInRegion(
    Region		r,
    int			x,
    int			y
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Region XPolygonRegion(
    XPoint*		points,
    int			n,
    int			fill_rule
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XRectInRegion(
    Region		r,
    int			x,
    int			y,
    unsigned int	width,
    unsigned int	height
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSaveContext(
    Display*		display,
    XID			rid,
    XContext		context,
    _Xconst char*	data
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetClassHint(
    Display*		display,
    Window		w,
    XClassHint*		class_hints
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetIconSizes(
    Display*		display,
    Window		w,
    XIconSize*		size_list,
    int			count
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSetNormalHints(
    Display*		display,
    Window		w,
    XSizeHints*		hints
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC void XSetRGBColormaps(
    Display*		display,
    Window		w,
    XStandardColormap*	stdcmaps,
    int			count,
    Atom		property
)
{
    WARN_STUB;
};

DECLSPEC int XSetSizeHints(
    Display*		display,
    Window		w,
    XSizeHints*		hints,
    Atom		property
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC void XSetTextProperty(
    Display*		display,
    Window		w,
    XTextProperty*	text_prop,
    Atom		property
)
{
    WARN_STUB;
};

DECLSPEC void XSetWMClientMachine(
    Display*		display,
    Window		w,
    XTextProperty*	text_prop
)
{
    WARN_STUB;
};

DECLSPEC int XSetWMHints(
    Display*		display,
    Window		w,
    XWMHints*		wm_hints
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC void XSetWMIconName(
    Display*		display,
    Window		w,
    XTextProperty*	text_prop
)
{
    WARN_STUB;
};

DECLSPEC void XSetWMProperties(
    Display*		display,
    Window		w,
    XTextProperty*	window_name,
    XTextProperty*	icon_name,
    char**		argv,
    int			argc,
    XSizeHints*		normal_hints,
    XWMHints*		wm_hints,
    XClassHint*		class_hints
)
{
    WARN_STUB;

};

DECLSPEC void XmbSetWMProperties(
    Display*		display,
    Window		w,
    _Xconst char*	window_name,
    _Xconst char*	icon_name,
    char**		argv,
    int			argc,
    XSizeHints*		normal_hints,
    XWMHints*		wm_hints,
    XClassHint*		class_hints
)
{
    WARN_STUB;
};

DECLSPEC void Xutf8SetWMProperties(
    Display*		display,
    Window		w,
    _Xconst char*	window_name,
    _Xconst char*	icon_name,
    char**		argv,
    int			argc,
    XSizeHints*		normal_hints,
    XWMHints*		wm_hints,
    XClassHint*		class_hints
)
{
    WARN_STUB;
};

DECLSPEC void XSetWMSizeHints(
    Display*		display,
    Window		w,
    XSizeHints*		hints,
    Atom		property
)
{
    WARN_STUB;
};

DECLSPEC int XSetRegion(
    Display*		display,
    GC			gc,
    Region		r
)
{
    WARN_STUB;
};

DECLSPEC void XSetStandardColormap(
    Display*		display,
    Window		w,
    XStandardColormap*	colormap,
    Atom		property
)
{
    WARN_STUB;
};

DECLSPEC int XSetZoomHints(
    Display*		display,
    Window		w,
    XSizeHints*		zhints
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XShrinkRegion(
    Region		r,
    int			dx,
    int			dy
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XSubtractRegion(
    Region		sra,
    Region		srb,
    Region		dr_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XmbTextListToTextProperty(
    Display*		display,
    char**		list,
    int			count,
    XICCEncodingStyle	style,
    XTextProperty*	text_prop_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XwcTextListToTextProperty(
    Display*		display,
    wchar_t**		list,
    int			count,
    XICCEncodingStyle	style,
    XTextProperty*	text_prop_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int Xutf8TextListToTextProperty(
    Display*		display,
    char**		list,
    int			count,
    XICCEncodingStyle	style,
    XTextProperty*	text_prop_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC void XwcFreeStringList(
    wchar_t**		list
)
{
    WARN_STUB;
};

DECLSPEC Status XTextPropertyToStringList(
    XTextProperty*	text_prop,
    char***		list_return,
    int*		count_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XmbTextPropertyToTextList(
    Display*		display,
    const XTextProperty* text_prop,
    char***		list_return,
    int*		count_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XwcTextPropertyToTextList(
    Display*		display,
    const XTextProperty* text_prop,
    wchar_t***		list_return,
    int*		count_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int Xutf8TextPropertyToTextList(
    Display*		display,
    const XTextProperty* text_prop,
    char***		list_return,
    int*		count_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XUnionRectWithRegion(
    XRectangle*		rectangle,
    Region		src_region,
    Region		dest_region_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XUnionRegion(
    Region		sra,
    Region		srb,
    Region		dr_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XWMGeometry(
    Display*		display,
    int			screen_number,
    _Xconst char*	user_geometry,
    _Xconst char*	default_geometry,
    unsigned int	border_width,
    XSizeHints*		hints,
    int*		x_return,
    int*		y_return,
    int*		width_return,
    int*		height_return,
    int*		gravity_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int XXorRegion(
    Region		sra,
    Region		srb,
    Region		dr_return
)
{
    WARN_STUB;
    return 0;
};