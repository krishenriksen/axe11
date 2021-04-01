DECLSPEC Bool	XkbIgnoreExtension(
	Bool			ignore
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Display *XkbOpenDisplay(
	char *			name,
	int *			ev_rtrn,
	int *			err_rtrn,
	int *			major_rtrn,
	int *			minor_rtrn,
	int *			reason
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbQueryExtension(
	Display *		dpy,
	int *			opcodeReturn,
	int *			eventBaseReturn,
	int *			errorBaseReturn,
	int *			majorRtrn,
	int *			minorRtrn
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbUseExtension(
	Display *		dpy,
	int *			major_rtrn,
	int *			minor_rtrn
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbLibraryVersion(
	int *			libMajorRtrn,
	int *			libMinorRtrn
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC unsigned int	XkbSetXlibControls(
	Display*		dpy,
	unsigned int		affect,
	unsigned int		values
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC unsigned int	XkbGetXlibControls(
	Display*		dpy
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC unsigned int	XkbXlibControlsImplemented(void)
{
    WARN_STUB;
    return 0;
};

DECLSPEC void		XkbSetAtomFuncs(
	XkbInternAtomFunc	getAtom,
	XkbGetAtomNameFunc	getName
)
{
    WARN_STUB;
};

DECLSPEC KeySym XkbKeycodeToKeysym(
		Display *	dpy,
#if NeedWidePrototypes
		 unsigned int 	kc,
#else
		 KeyCode 	kc,
#endif
		 int 		group,
		 int		level
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC unsigned int	XkbKeysymToModifiers(
    Display *			dpy,
    KeySym 			ks
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool		XkbLookupKeySym(
    Display *			dpy,
    KeyCode 			keycode,
    unsigned int 		modifiers,
    unsigned int *		modifiers_return,
    KeySym *			keysym_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int		XkbLookupKeyBinding(
    Display *			dpy,
    KeySym 			sym_rtrn,
    unsigned int 		mods,
    char *			buffer,
    int 			nbytes,
    int * 			extra_rtrn
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool		XkbTranslateKeyCode(
    XkbDescPtr			xkb,
    KeyCode 			keycode,
    unsigned int 		modifiers,
    unsigned int *		modifiers_return,
    KeySym *			keysym_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC int		XkbTranslateKeySym(
    Display *			dpy,
    register KeySym *		sym_return,
    unsigned int 		modifiers,
    char *			buffer,
    int 			nbytes,
    int *			extra_rtrn
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbSetAutoRepeatRate(
	Display *		dpy,
	unsigned int		deviceSpec,
	unsigned int		delay,
	unsigned int		interval
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbGetAutoRepeatRate(
	Display *		dpy,
	unsigned int		deviceSpec,
	unsigned int *		delayRtrn,
	unsigned int *		intervalRtrn
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbChangeEnabledControls(
	Display *		dpy,
	unsigned int		deviceSpec,
	unsigned int		affect,
	unsigned int		values
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbDeviceBell(
	Display *		dpy,
	Window			win,
	int			deviceSpec,
	int			bellClass,
	int			bellID,
	int			percent,
	Atom			name
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbForceDeviceBell(
	Display *		dpy,
	int			deviceSpec,
	int			bellClass,
	int			bellID,
	int			percent
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbDeviceBellEvent(
	Display *		dpy,
	Window			win,
	int			deviceSpec,
	int			bellClass,
	int			bellID,
	int			percent,
	Atom			name
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbBell(
	Display *		dpy,
	Window			win,
	int			percent,
	Atom			name
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbForceBell(
	Display *		dpy,
	int			percent
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbBellEvent(
	Display *		dpy,
	Window			win,
	int			percent,
	Atom			name
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbSelectEvents(
	Display *		dpy,
	unsigned int		deviceID,
	unsigned int 		affect,
	unsigned int 		values
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbSelectEventDetails(
	Display *		dpy,
	unsigned int 		deviceID,
	unsigned int 		eventType,
	unsigned long 		affect,
	unsigned long 		details
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC void	XkbNoteMapChanges(
    XkbMapChangesPtr		old,
    XkbMapNotifyEvent	*	new,
    unsigned int	 	wanted
)
{
    WARN_STUB;
};

DECLSPEC void	XkbNoteNameChanges(
    XkbNameChangesPtr		old,
    XkbNamesNotifyEvent	*	new,
    unsigned int	 	wanted
)
{
    WARN_STUB;
};

DECLSPEC Status	XkbGetIndicatorState(
	Display *		dpy,
	unsigned int		deviceSpec,
	unsigned int *		pStateRtrn
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status	XkbGetDeviceIndicatorState(
	Display *		dpy,
	unsigned int		deviceSpec,
	unsigned int		ledClass,
	unsigned int		ledID,
	unsigned int *		pStateRtrn
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status	 XkbGetIndicatorMap(
	Display *		dpy,
	unsigned long		which,
	XkbDescPtr		desc
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	 XkbSetIndicatorMap(
	Display *		dpy,
	unsigned long 		which,
	XkbDescPtr		desc
)
{
    WARN_STUB;
    return 0;
};

#define	XkbNoteIndicatorMapChanges(o,n,w) \
				((o)->map_changes|=((n)->map_changes&(w)))
#define	XkbNoteIndicatorStateChanges(o,n,w)\
				((o)->state_changes|=((n)->state_changes&(w)))
#define	XkbGetIndicatorMapChanges(d,x,c) \
				(XkbGetIndicatorMap((d),(c)->map_changes,x))
#define	XkbChangeIndicatorMaps(d,x,c) \
				(XkbSetIndicatorMap((d),(c)->map_changes,x))

DECLSPEC Bool	XkbGetNamedIndicator(
	Display *		dpy,
	Atom			name,
	int *			pNdxRtrn,
	Bool *			pStateRtrn,
	XkbIndicatorMapPtr	pMapRtrn,
	Bool *			pRealRtrn
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbGetNamedDeviceIndicator(
	Display *		dpy,
	unsigned int		deviceSpec,
	unsigned int		ledClass,
	unsigned int		ledID,
	Atom			name,
	int *			pNdxRtrn,
	Bool *			pStateRtrn,
	XkbIndicatorMapPtr	pMapRtrn,
	Bool *			pRealRtrn
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbSetNamedIndicator(
	Display *		dpy,
	Atom			name,
	Bool			changeState,
	Bool 			state,
	Bool			createNewMap,
	XkbIndicatorMapPtr	pMap
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbSetNamedDeviceIndicator(
	Display *		dpy,
	unsigned int		deviceSpec,
	unsigned int		ledClass,
	unsigned int		ledID,
	Atom			name,
	Bool			changeState,
	Bool 			state,
	Bool			createNewMap,
	XkbIndicatorMapPtr	pMap
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbLockModifiers(
	Display *		dpy,
	unsigned int 		deviceSpec,
	unsigned int 		affect,
	unsigned int 		values
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbLatchModifiers(
	Display *		dpy,
	unsigned int 		deviceSpec,
	unsigned int 		affect,
	unsigned int 		values
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbLockGroup(
	Display *		dpy,
	unsigned int 		deviceSpec,
	unsigned int 		group
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbLatchGroup(
	Display *		dpy,
	unsigned int 		deviceSpec,
	unsigned int 		group
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbSetServerInternalMods(
	Display *		dpy,
	unsigned int 		deviceSpec,
	unsigned int 		affectReal,
	unsigned int 		realValues,
	unsigned int		affectVirtual,
	unsigned int		virtualValues
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbSetIgnoreLockMods(
	Display *		dpy,
	unsigned int 		deviceSpec,
	unsigned int 		affectReal,
	unsigned int 		realValues,
	unsigned int		affectVirtual,
	unsigned int		virtualValues
)
{
    WARN_STUB;
    return 0;
};


DECLSPEC Bool	XkbVirtualModsToReal(
	XkbDescPtr		xkb,
	unsigned int		virtual_mask,
	unsigned int *		mask_rtrn
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbComputeEffectiveMap(
	XkbDescPtr 		xkb,
	XkbKeyTypePtr		type,
	unsigned char *		map_rtrn
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XkbInitCanonicalKeyTypes(
    XkbDescPtr			xkb,
    unsigned int		which,
    int				keypadVMod
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC XkbDescPtr XkbAllocKeyboard(
	void
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC void	XkbFreeKeyboard(
	XkbDescPtr		xkb,
	unsigned int		which,
	Bool			freeDesc
)
{
    WARN_STUB;
};

DECLSPEC Status XkbAllocClientMap(
	XkbDescPtr		xkb,
	unsigned int		which,
	unsigned int		nTypes
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XkbAllocServerMap(
	XkbDescPtr		xkb,
	unsigned int		which,
	unsigned int		nActions
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC void	XkbFreeClientMap(
    XkbDescPtr			xkb,
    unsigned int		what,
    Bool			freeMap
)
{
    WARN_STUB;
};

DECLSPEC void	XkbFreeServerMap(
    XkbDescPtr			xkb,
    unsigned int		what,
    Bool			freeMap
)
{
    WARN_STUB;
};

DECLSPEC XkbKeyTypePtr	XkbAddKeyType(
    XkbDescPtr			xkb,
    Atom			name,
    int				map_count,
    Bool			want_preserve,
    int				num_lvls
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XkbAllocIndicatorMaps(
	XkbDescPtr		xkb
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC void XkbFreeIndicatorMaps(
    XkbDescPtr			xkb
)
{
    WARN_STUB;
};

DECLSPEC XkbDescPtr XkbGetMap(
	Display *		dpy,
	unsigned int 		which,
	unsigned int 		deviceSpec
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status	XkbGetUpdatedMap(
	Display *		dpy,
	unsigned int 		which,
	XkbDescPtr		desc
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status	XkbGetMapChanges(
    Display *			dpy,
    XkbDescPtr			xkb,
    XkbMapChangesPtr		changes
)
{
    WARN_STUB;
    return 0;
};


DECLSPEC Status	XkbRefreshKeyboardMapping(
    XkbMapNotifyEvent *		event
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status	XkbGetKeyTypes(
    Display *			dpy,
    unsigned int		first,
    unsigned int 		num,
    XkbDescPtr			xkb
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status	XkbGetKeySyms(
    Display *			dpy,
    unsigned int		first,
    unsigned int		num,
    XkbDescPtr			xkb
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status	XkbGetKeyActions(
    Display *			dpy,
    unsigned int 		first,
    unsigned int 		num,
    XkbDescPtr			xkb
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status	XkbGetKeyBehaviors(
	Display *		dpy,
	unsigned int 		firstKey,
	unsigned int		nKeys,
	XkbDescPtr		desc
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status	XkbGetVirtualMods(
	Display *		dpy,
	unsigned int 		which,
	XkbDescPtr		desc
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status	XkbGetKeyExplicitComponents(
	Display *		dpy,
	unsigned int 		firstKey,
	unsigned int		nKeys,
	XkbDescPtr		desc
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status	XkbGetKeyModifierMap(
	Display *		dpy,
	unsigned int 		firstKey,
	unsigned int		nKeys,
	XkbDescPtr		desc
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status	XkbGetKeyVirtualModMap(
	Display *		dpy,
	unsigned int		first,
	unsigned int		num,
	XkbDescPtr		xkb
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status	XkbAllocControls(
	XkbDescPtr		xkb,
	unsigned int		which
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC void	XkbFreeControls(
	XkbDescPtr		xkb,
	unsigned int		which,
	Bool			freeMap
)
{
    WARN_STUB;
};

DECLSPEC Status	XkbGetControls(
	Display *		dpy,
	unsigned long		which,
	XkbDescPtr		desc
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbSetControls(
	Display *		dpy,
	unsigned long		which,
	XkbDescPtr		desc
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC void	XkbNoteControlsChanges(
    XkbControlsChangesPtr	old,
    XkbControlsNotifyEvent *	new,
    unsigned int	 	wanted
)
{
    WARN_STUB;
};

#define	XkbGetControlsChanges(d,x,c)	XkbGetControls(d,(c)->changed_ctrls,x)
#define	XkbChangeControls(d,x,c)	XkbSetControls(d,(c)->changed_ctrls,x)

DECLSPEC Status	XkbAllocCompatMap(
    XkbDescPtr			xkb,
    unsigned int		which,
    unsigned int		nInterpret
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC void	XkbFreeCompatMap(
    XkbDescPtr			xkb,
    unsigned int		which,
    Bool			freeMap
)
{
    WARN_STUB;
};

DECLSPEC Status XkbGetCompatMap(
	Display *		dpy,
	unsigned int 		which,
	XkbDescPtr 		xkb
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool XkbSetCompatMap(
	Display *		dpy,
	unsigned int 		which,
	XkbDescPtr 		xkb,
	Bool			updateActions
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC XkbSymInterpretPtr XkbAddSymInterpret(
	XkbDescPtr		xkb,
	XkbSymInterpretPtr	si,
	Bool			updateMap,
	XkbChangesPtr		changes
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XkbAllocNames(
	XkbDescPtr		xkb,
	unsigned int		which,
	int			nTotalRG,
	int			nTotalAliases
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status	XkbGetNames(
	Display *		dpy,
	unsigned int		which,
	XkbDescPtr		desc
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbSetNames(
	Display *		dpy,
	unsigned int		which,
	unsigned int		firstType,
	unsigned int		nTypes,
	XkbDescPtr		desc
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbChangeNames(
	Display *		dpy,
	XkbDescPtr		xkb,
	XkbNameChangesPtr	changes
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC void XkbFreeNames(
	XkbDescPtr		xkb,
	unsigned int		which,
	Bool			freeMap
)
{
    WARN_STUB;
};


DECLSPEC Status	XkbGetState(
	Display *		dpy,
	unsigned int 		deviceSpec,
	XkbStatePtr		rtrnState
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbSetMap(
	Display *		dpy,
	unsigned int		which,
	XkbDescPtr		desc
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbChangeMap(
	Display*		dpy,
	XkbDescPtr		desc,
	XkbMapChangesPtr	changes
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbSetDetectableAutoRepeat(
	Display *		dpy,
	Bool			detectable,
	Bool *			supported
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbGetDetectableAutoRepeat(
	Display *		dpy,
	Bool *			supported
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbSetAutoResetControls(
    Display *			dpy,
    unsigned int 		changes,
    unsigned int *		auto_ctrls,
    unsigned int *		auto_values
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbGetAutoResetControls(
    Display *			dpy,
    unsigned int *		auto_ctrls,
    unsigned int *		auto_ctrl_values
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbSetPerClientControls(
    Display *			dpy,
    unsigned int		change,
    unsigned int *		values
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbGetPerClientControls(
    Display *			dpy,
    unsigned int *		ctrls
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XkbCopyKeyType(
    XkbKeyTypePtr	from,
    XkbKeyTypePtr	into
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XkbCopyKeyTypes(
    XkbKeyTypePtr	from,
    XkbKeyTypePtr	into,
    int			num_types
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status	XkbResizeKeyType(
    XkbDescPtr		xkb,
    int			type_ndx,
    int			map_count,
    Bool		want_preserve,
    int			new_num_lvls
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC KeySym *XkbResizeKeySyms(
	XkbDescPtr		desc,
	int 			forKey,
	int 			symsNeeded
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC XkbAction *XkbResizeKeyActions(
	XkbDescPtr		desc,
	int 			forKey,
	int 			actsNeeded
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status XkbChangeTypesOfKey(
	XkbDescPtr		xkb,
	int 			key,
	int			num_groups,
	unsigned int		groups,
	int *			newTypes,
	XkbMapChangesPtr	pChanges
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC  Status   XkbChangeKeycodeRange(
	XkbDescPtr		xkb,
	int			minKC,
	int			maxKC,
	XkbChangesPtr		changes
)
{
    WARN_STUB;
    return 0;
};

/***====================================================================***/

DECLSPEC XkbComponentListPtr	XkbListComponents(
	Display *		dpy,
	unsigned int		deviceSpec,
	XkbComponentNamesPtr	ptrns,
	int *			max_inout
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC void XkbFreeComponentList(
	XkbComponentListPtr	list
)
{
    WARN_STUB;
};

DECLSPEC XkbDescPtr XkbGetKeyboard(
	Display *		dpy,
	unsigned int 		which,
	unsigned int 		deviceSpec
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC XkbDescPtr XkbGetKeyboardByName(
    Display *			dpy,
    unsigned int		deviceSpec,
    XkbComponentNamesPtr	names,
    unsigned int 		want,
    unsigned int 		need,
    Bool			load
)
{
    WARN_STUB;
    return 0;
};

/***====================================================================***/

DECLSPEC int	XkbKeyTypesForCoreSymbols(
    XkbDescPtr	xkb,			/* keyboard device */
    int		map_width,		/* width of core KeySym array */
    KeySym *	core_syms,		/* always mapWidth symbols */
    unsigned int	protected,	/* explicit key types */
    int *	types_inout,		/* always four type indices */
    KeySym * 	xkb_syms_rtrn		/* must have enough space */
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbApplyCompatMapToKey(	/* False only on error */
    XkbDescPtr		xkb,		/* keymap to be edited */
    KeyCode		key,		/* key to be updated */
    XkbChangesPtr	changes		/* resulting changes to map */
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbUpdateMapFromCore( /* False only on error */
    XkbDescPtr		xkb,		/* XKB keyboard to be edited */
    KeyCode		first_key,	/* first changed key */
    int			num_keys, 	/* number of changed keys */
    int			map_width,	/* width of core keymap */
    KeySym *		core_keysyms,	/* symbols from core keymap */
    XkbChangesPtr	changes		/* resulting changes */
)
{
    WARN_STUB;
    return 0;
};

/***====================================================================***/

DECLSPEC XkbDeviceLedInfoPtr	XkbAddDeviceLedInfo(
	XkbDeviceInfoPtr	devi,
	unsigned int		ledClass,
	unsigned int		ledId
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status			XkbResizeDeviceButtonActions(
	XkbDeviceInfoPtr	devi,
	unsigned int		newTotal
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC XkbDeviceInfoPtr	XkbAllocDeviceInfo(
	unsigned int		deviceSpec,
	unsigned int		nButtons,
	unsigned int		szLeds
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC void XkbFreeDeviceInfo(
	XkbDeviceInfoPtr	devi,
	unsigned int		which,
	Bool			freeDevI
)
{
    WARN_STUB;
};

DECLSPEC void	XkbNoteDeviceChanges(
    XkbDeviceChangesPtr			old,
    XkbExtensionDeviceNotifyEvent *	new,
    unsigned int	 		wanted
)
{
    WARN_STUB;
};

DECLSPEC XkbDeviceInfoPtr XkbGetDeviceInfo(
	Display *		dpy,
	unsigned int 		which,
	unsigned int		deviceSpec,
	unsigned int		ledClass,
	unsigned int		ledID
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status	XkbGetDeviceInfoChanges(
	Display *		dpy,
	XkbDeviceInfoPtr	devi,
	XkbDeviceChangesPtr 	changes
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Status	XkbGetDeviceButtonActions(
	Display *		dpy,
	XkbDeviceInfoPtr	devi,
	Bool			all,
	unsigned int		first,
	unsigned int		nBtns
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbSetDeviceInfo(
	Display *		dpy,
	unsigned int		which,
	XkbDeviceInfoPtr	devi
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool	XkbChangeDeviceInfo(
	Display*		dpy,
	XkbDeviceInfoPtr	desc,
	XkbDeviceChangesPtr	changes
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC  Bool XkbSetDeviceLedInfo(
	Display *		dpy,
	XkbDeviceInfoPtr	devi,
	unsigned int 		ledClass,
	unsigned int		ledID,
	unsigned int		which
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool XkbSetDeviceButtonActions(
	Display *		dpy,
	XkbDeviceInfoPtr	devi,
	unsigned int		first,
	unsigned int		nBtns
)
{
    WARN_STUB;
    return 0;
};

/***====================================================================***/

DECLSPEC char	XkbToControl(
	char		c
)
{
    WARN_STUB;
    return 0;
};

/***====================================================================***/

DECLSPEC Bool XkbSetDebuggingFlags(
    Display *		dpy,
    unsigned int	mask,
    unsigned int	flags,
    char *		msg,
    unsigned int	ctrls_mask,
    unsigned int	ctrls,
    unsigned int *	rtrn_flags,
    unsigned int *	rtrn_ctrls
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool XkbApplyVirtualModChanges(
   XkbDescPtr		xkb,
   unsigned int		changed,
   XkbChangesPtr	changes
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool XkbUpdateActionVirtualMods(
	XkbDescPtr		xkb,
	XkbAction *		act,
	unsigned int		changed
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC void XkbUpdateKeyTypeVirtualMods(
	XkbDescPtr		xkb,
	XkbKeyTypePtr		type,
	unsigned int		changed,
	XkbChangesPtr		changes
)
{
    WARN_STUB;
};