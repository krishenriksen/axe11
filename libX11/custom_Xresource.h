DECLSPEC XrmQuark XrmStringToQuark(
    _Xconst char* 	string
)    
{
    WARN_STUB;
};

DECLSPEC XrmQuark XrmPermStringToQuark(
    _Xconst char* 	string
)    
{
    WARN_STUB;
};

DECLSPEC XrmString XrmQuarkToString(
    XrmQuark 		quark
)    
{
    WARN_STUB;
};

DECLSPEC XrmQuark XrmUniqueQuark(
    void
)
{
    WARN_STUB;
};

DECLSPEC void XrmDestroyDatabase(
    XrmDatabase		database
)
{
    WARN_STUB;
};

DECLSPEC void XrmQPutResource(
    XrmDatabase*	database,
    XrmBindingList	bindings,
    XrmQuarkList	quarks,
    XrmRepresentation	type,
    XrmValue*		value
)
{
    WARN_STUB;
};

DECLSPEC void XrmPutResource(
    XrmDatabase*	database,
    _Xconst char*	specifier,
    _Xconst char*	type,
    XrmValue*		value
)
{
    WARN_STUB;
};

DECLSPEC void XrmQPutStringResource(
    XrmDatabase*	database,
    XrmBindingList      bindings,
    XrmQuarkList	quarks,
    _Xconst char*	value
)
{
    WARN_STUB;
};

DECLSPEC void XrmPutStringResource(
    XrmDatabase*	database,
    _Xconst char*	specifier,
    _Xconst char*	value
)
{
    WARN_STUB;
};

DECLSPEC void XrmPutLineResource(
    XrmDatabase*	database,
    _Xconst char*	line
)
{
    WARN_STUB;
};

DECLSPEC Bool XrmQGetResource(
    XrmDatabase		database,
    XrmNameList		quark_name,
    XrmClassList	quark_class,
    XrmRepresentation*	quark_type_return,
    XrmValue*		value_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool XrmGetResource(
    XrmDatabase		database,
    _Xconst char*	str_name,
    _Xconst char*	str_class,
    char**		str_type_return,
    XrmValue*		value_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool XrmQGetSearchList(
    XrmDatabase		database,
    XrmNameList		names,
    XrmClassList	classes,
    XrmSearchList	list_return,
    int			list_length
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC Bool XrmQGetSearchResource(
    XrmSearchList	list,
    XrmName		name,
    XrmClass		class,
    XrmRepresentation*	type_return,
    XrmValue*		value_return
)
{
    WARN_STUB;
    return 0;
};

DECLSPEC void XrmSetDatabase(
    Display*		display,
    XrmDatabase		database
)
{
    WARN_STUB;
};

DECLSPEC XrmDatabase XrmGetDatabase(
    Display*		display
)
{
    WARN_STUB;
};

DECLSPEC XrmDatabase XrmGetFileDatabase(
    _Xconst char*	filename
)
{
    WARN_STUB;
};

DECLSPEC Status XrmCombineFileDatabase(
    _Xconst char* 	filename,
    XrmDatabase*	target,
    Bool		override
)
{
    WARN_STUB;
};

DECLSPEC XrmDatabase XrmGetStringDatabase(
    _Xconst char*	data
)
{
    WARN_STUB;
};

DECLSPEC void XrmPutFileDatabase(
    XrmDatabase		database,
    _Xconst char*	filename
)
{
    WARN_STUB;
};

DECLSPEC void XrmMergeDatabases(
    XrmDatabase		source_db,
    XrmDatabase*	target_db
)
{
    WARN_STUB;
};

DECLSPEC void XrmCombineDatabase(
    XrmDatabase		source_db,
    XrmDatabase*	target_db,
    Bool		override
)
{
    WARN_STUB;
};

DECLSPEC const char *XrmLocaleOfDatabase(
    XrmDatabase 	database
)
{
    WARN_STUB;
};

DECLSPEC void XrmParseCommand(
    XrmDatabase*	database,
    XrmOptionDescList	table,
    int			table_count,
    _Xconst char*	name,
    int*		argc_in_out,
    char**		argv_in_out
)
{
    WARN_STUB;
};