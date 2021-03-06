/* Window.c generated by valac 0.52.6, the Vala compiler
 * generated from Window.vala, do not modify */

#include <gtk/gtk.h>
#include <glib-object.h>
#include <gio/gio.h>
#include <glib.h>
#include <gdk/gdk.h>

#define MY_APP_TYPE_WINDOW (my_app_window_get_type ())
#define MY_APP_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), MY_APP_TYPE_WINDOW, MyAppWindow))
#define MY_APP_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), MY_APP_TYPE_WINDOW, MyAppWindowClass))
#define MY_APP_IS_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), MY_APP_TYPE_WINDOW))
#define MY_APP_IS_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), MY_APP_TYPE_WINDOW))
#define MY_APP_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), MY_APP_TYPE_WINDOW, MyAppWindowClass))

typedef struct _MyAppWindow MyAppWindow;
typedef struct _MyAppWindowClass MyAppWindowClass;
typedef struct _MyAppWindowPrivate MyAppWindowPrivate;
enum  {
	MY_APP_WINDOW_0_PROPERTY,
	MY_APP_WINDOW_NUM_PROPERTIES
};
static GParamSpec* my_app_window_properties[MY_APP_WINDOW_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define TYPE_APPLICATION (application_get_type ())
#define APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_APPLICATION, Application))
#define APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_APPLICATION, ApplicationClass))
#define IS_APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_APPLICATION))
#define IS_APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_APPLICATION))
#define APPLICATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_APPLICATION, ApplicationClass))

typedef struct _Application Application;
typedef struct _ApplicationClass ApplicationClass;

#define MY_APP_TYPE_HEADER_BAR (my_app_header_bar_get_type ())
#define MY_APP_HEADER_BAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), MY_APP_TYPE_HEADER_BAR, MyAppHeaderBar))
#define MY_APP_HEADER_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), MY_APP_TYPE_HEADER_BAR, MyAppHeaderBarClass))
#define MY_APP_IS_HEADER_BAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), MY_APP_TYPE_HEADER_BAR))
#define MY_APP_IS_HEADER_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), MY_APP_TYPE_HEADER_BAR))
#define MY_APP_HEADER_BAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), MY_APP_TYPE_HEADER_BAR, MyAppHeaderBarClass))

typedef struct _MyAppHeaderBar MyAppHeaderBar;
typedef struct _MyAppHeaderBarClass MyAppHeaderBarClass;

struct _MyAppWindow {
	GtkApplicationWindow parent_instance;
	MyAppWindowPrivate * priv;
};

struct _MyAppWindowClass {
	GtkApplicationWindowClass parent_class;
};

struct _MyAppWindowPrivate {
	GSettings* settings;
};

static gint MyAppWindow_private_offset;
static gpointer my_app_window_parent_class = NULL;

GType my_app_window_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MyAppWindow, g_object_unref)
GType application_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (Application, g_object_unref)
MyAppWindow* my_app_window_new (Application* app);
MyAppWindow* my_app_window_construct (GType object_type,
                                      Application* app);
gboolean my_app_window_before_destroy (MyAppWindow* self);
static GObject * my_app_window_constructor (GType type,
                                     guint n_construct_properties,
                                     GObjectConstructParam * construct_properties);
static gboolean _my_app_window___lambda4_ (MyAppWindow* self,
                                    GdkEventAny* e);
static gboolean __my_app_window___lambda4__gtk_widget_delete_event (GtkWidget* _sender,
                                                             GdkEventAny* event,
                                                             gpointer self);
GType my_app_header_bar_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MyAppHeaderBar, g_object_unref)
MyAppHeaderBar* my_app_header_bar_new (void);
MyAppHeaderBar* my_app_header_bar_construct (GType object_type);
static void my_app_window_finalize (GObject * obj);
static GType my_app_window_get_type_once (void);

static inline gpointer
my_app_window_get_instance_private (MyAppWindow* self)
{
	return G_STRUCT_MEMBER_P (self, MyAppWindow_private_offset);
}

MyAppWindow*
my_app_window_construct (GType object_type,
                         Application* app)
{
	MyAppWindow * self = NULL;
#line 5 "../src/Widgets/Window.vala"
	g_return_val_if_fail (app != NULL, NULL);
#line 6 "../src/Widgets/Window.vala"
	self = (MyAppWindow*) g_object_new (object_type, "application", app, NULL);
#line 5 "../src/Widgets/Window.vala"
	return self;
#line 104 "Window.c"
}

MyAppWindow*
my_app_window_new (Application* app)
{
#line 5 "../src/Widgets/Window.vala"
	return my_app_window_construct (MY_APP_TYPE_WINDOW, app);
#line 112 "Window.c"
}

gboolean
my_app_window_before_destroy (MyAppWindow* self)
{
	gint width = 0;
	gint height = 0;
	gint x = 0;
	gint y = 0;
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	gint _tmp2_ = 0;
	gint _tmp3_ = 0;
	GSettings* _tmp4_;
	GSettings* _tmp5_;
	GSettings* _tmp6_;
	GSettings* _tmp7_;
	gboolean result = FALSE;
#line 29 "../src/Widgets/Window.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 32 "../src/Widgets/Window.vala"
	gtk_window_get_size ((GtkWindow*) self, &_tmp0_, &_tmp1_);
#line 32 "../src/Widgets/Window.vala"
	width = _tmp0_;
#line 32 "../src/Widgets/Window.vala"
	height = _tmp1_;
#line 33 "../src/Widgets/Window.vala"
	gtk_window_get_position ((GtkWindow*) self, &_tmp2_, &_tmp3_);
#line 33 "../src/Widgets/Window.vala"
	x = _tmp2_;
#line 33 "../src/Widgets/Window.vala"
	y = _tmp3_;
#line 35 "../src/Widgets/Window.vala"
	_tmp4_ = self->priv->settings;
#line 35 "../src/Widgets/Window.vala"
	g_settings_set_int (_tmp4_, "pos-x", x);
#line 36 "../src/Widgets/Window.vala"
	_tmp5_ = self->priv->settings;
#line 36 "../src/Widgets/Window.vala"
	g_settings_set_int (_tmp5_, "pos-y", y);
#line 37 "../src/Widgets/Window.vala"
	_tmp6_ = self->priv->settings;
#line 37 "../src/Widgets/Window.vala"
	g_settings_set_int (_tmp6_, "window-width", width);
#line 38 "../src/Widgets/Window.vala"
	_tmp7_ = self->priv->settings;
#line 38 "../src/Widgets/Window.vala"
	g_settings_set_int (_tmp7_, "window-height", height);
#line 39 "../src/Widgets/Window.vala"
	result = FALSE;
#line 39 "../src/Widgets/Window.vala"
	return result;
#line 165 "Window.c"
}

static gboolean
_my_app_window___lambda4_ (MyAppWindow* self,
                           GdkEventAny* e)
{
	gboolean result = FALSE;
#line 19 "../src/Widgets/Window.vala"
	g_return_val_if_fail (e != NULL, FALSE);
#line 20 "../src/Widgets/Window.vala"
	result = my_app_window_before_destroy (self);
#line 20 "../src/Widgets/Window.vala"
	return result;
#line 179 "Window.c"
}

static gboolean
__my_app_window___lambda4__gtk_widget_delete_event (GtkWidget* _sender,
                                                    GdkEventAny* event,
                                                    gpointer self)
{
	gboolean result;
	result = _my_app_window___lambda4_ ((MyAppWindow*) self, event);
#line 19 "../src/Widgets/Window.vala"
	return result;
#line 191 "Window.c"
}

static GObject *
my_app_window_constructor (GType type,
                           guint n_construct_properties,
                           GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	MyAppWindow * self;
	GSettings* _tmp0_;
	GSettings* _tmp1_;
	GSettings* _tmp2_;
	GSettings* _tmp3_;
	GSettings* _tmp4_;
	MyAppHeaderBar* headerbar = NULL;
	MyAppHeaderBar* _tmp5_;
	MyAppHeaderBar* _tmp6_;
#line 10 "../src/Widgets/Window.vala"
	parent_class = G_OBJECT_CLASS (my_app_window_parent_class);
#line 10 "../src/Widgets/Window.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 10 "../src/Widgets/Window.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, MY_APP_TYPE_WINDOW, MyAppWindow);
#line 11 "../src/Widgets/Window.vala"
	g_object_set ((GtkWindow*) self, "window-position", GTK_WIN_POS_CENTER, NULL);
#line 12 "../src/Widgets/Window.vala"
	gtk_window_set_default_size ((GtkWindow*) self, 350, 80);
#line 14 "../src/Widgets/Window.vala"
	_tmp0_ = g_settings_new ("com.github.lesimoes.valahello");
#line 14 "../src/Widgets/Window.vala"
	_g_object_unref0 (self->priv->settings);
#line 14 "../src/Widgets/Window.vala"
	self->priv->settings = _tmp0_;
#line 16 "../src/Widgets/Window.vala"
	_tmp1_ = self->priv->settings;
#line 16 "../src/Widgets/Window.vala"
	_tmp2_ = self->priv->settings;
#line 16 "../src/Widgets/Window.vala"
	gtk_window_move ((GtkWindow*) self, g_settings_get_int (_tmp1_, "pos-x"), g_settings_get_int (_tmp2_, "pos-y"));
#line 17 "../src/Widgets/Window.vala"
	_tmp3_ = self->priv->settings;
#line 17 "../src/Widgets/Window.vala"
	_tmp4_ = self->priv->settings;
#line 17 "../src/Widgets/Window.vala"
	gtk_window_resize ((GtkWindow*) self, g_settings_get_int (_tmp3_, "window-width"), g_settings_get_int (_tmp4_, "window-height"));
#line 19 "../src/Widgets/Window.vala"
	g_signal_connect_object ((GtkWidget*) self, "delete-event", (GCallback) __my_app_window___lambda4__gtk_widget_delete_event, self, 0);
#line 23 "../src/Widgets/Window.vala"
	_tmp5_ = my_app_header_bar_new ();
#line 23 "../src/Widgets/Window.vala"
	g_object_ref_sink (_tmp5_);
#line 23 "../src/Widgets/Window.vala"
	headerbar = _tmp5_;
#line 24 "../src/Widgets/Window.vala"
	_tmp6_ = headerbar;
#line 24 "../src/Widgets/Window.vala"
	gtk_window_set_titlebar ((GtkWindow*) self, (GtkWidget*) _tmp6_);
#line 26 "../src/Widgets/Window.vala"
	gtk_widget_show_all ((GtkWidget*) self);
#line 10 "../src/Widgets/Window.vala"
	_g_object_unref0 (headerbar);
#line 10 "../src/Widgets/Window.vala"
	return obj;
#line 256 "Window.c"
}

static void
my_app_window_class_init (MyAppWindowClass * klass,
                          gpointer klass_data)
{
#line 1 "../src/Widgets/Window.vala"
	my_app_window_parent_class = g_type_class_peek_parent (klass);
#line 1 "../src/Widgets/Window.vala"
	g_type_class_adjust_private_offset (klass, &MyAppWindow_private_offset);
#line 1 "../src/Widgets/Window.vala"
	G_OBJECT_CLASS (klass)->constructor = my_app_window_constructor;
#line 1 "../src/Widgets/Window.vala"
	G_OBJECT_CLASS (klass)->finalize = my_app_window_finalize;
#line 271 "Window.c"
}

static void
my_app_window_instance_init (MyAppWindow * self,
                             gpointer klass)
{
#line 1 "../src/Widgets/Window.vala"
	self->priv = my_app_window_get_instance_private (self);
#line 280 "Window.c"
}

static void
my_app_window_finalize (GObject * obj)
{
	MyAppWindow * self;
#line 1 "../src/Widgets/Window.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, MY_APP_TYPE_WINDOW, MyAppWindow);
#line 3 "../src/Widgets/Window.vala"
	_g_object_unref0 (self->priv->settings);
#line 1 "../src/Widgets/Window.vala"
	G_OBJECT_CLASS (my_app_window_parent_class)->finalize (obj);
#line 293 "Window.c"
}

static GType
my_app_window_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (MyAppWindowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) my_app_window_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (MyAppWindow), 0, (GInstanceInitFunc) my_app_window_instance_init, NULL };
	GType my_app_window_type_id;
	my_app_window_type_id = g_type_register_static (gtk_application_window_get_type (), "MyAppWindow", &g_define_type_info, 0);
	MyAppWindow_private_offset = g_type_add_instance_private (my_app_window_type_id, sizeof (MyAppWindowPrivate));
	return my_app_window_type_id;
}

GType
my_app_window_get_type (void)
{
	static volatile gsize my_app_window_type_id__volatile = 0;
	if (g_once_init_enter (&my_app_window_type_id__volatile)) {
		GType my_app_window_type_id;
		my_app_window_type_id = my_app_window_get_type_once ();
		g_once_init_leave (&my_app_window_type_id__volatile, my_app_window_type_id);
	}
	return my_app_window_type_id__volatile;
}

