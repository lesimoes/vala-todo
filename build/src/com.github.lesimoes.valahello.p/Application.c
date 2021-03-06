/* Application.c generated by valac 0.52.6, the Vala compiler
 * generated from Application.vala, do not modify */

#include <gtk/gtk.h>
#include <glib-object.h>
#include <gio/gio.h>

#define TYPE_APPLICATION (application_get_type ())
#define APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_APPLICATION, Application))
#define APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_APPLICATION, ApplicationClass))
#define IS_APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_APPLICATION))
#define IS_APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_APPLICATION))
#define APPLICATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_APPLICATION, ApplicationClass))

typedef struct _Application Application;
typedef struct _ApplicationClass ApplicationClass;
typedef struct _ApplicationPrivate ApplicationPrivate;
enum  {
	APPLICATION_0_PROPERTY,
	APPLICATION_NUM_PROPERTIES
};
static GParamSpec* application_properties[APPLICATION_NUM_PROPERTIES];

#define MY_APP_TYPE_WINDOW (my_app_window_get_type ())
#define MY_APP_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), MY_APP_TYPE_WINDOW, MyAppWindow))
#define MY_APP_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), MY_APP_TYPE_WINDOW, MyAppWindowClass))
#define MY_APP_IS_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), MY_APP_TYPE_WINDOW))
#define MY_APP_IS_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), MY_APP_TYPE_WINDOW))
#define MY_APP_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), MY_APP_TYPE_WINDOW, MyAppWindowClass))

typedef struct _MyAppWindow MyAppWindow;
typedef struct _MyAppWindowClass MyAppWindowClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _Application {
	GtkApplication parent_instance;
	ApplicationPrivate * priv;
};

struct _ApplicationClass {
	GtkApplicationClass parent_class;
};

static gpointer application_parent_class = NULL;

GType application_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (Application, g_object_unref)
Application* application_new (void);
Application* application_construct (GType object_type);
static void application_real_activate (GApplication* base);
GType my_app_window_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MyAppWindow, g_object_unref)
MyAppWindow* my_app_window_new (Application* app);
MyAppWindow* my_app_window_construct (GType object_type,
                                      Application* app);
static GType application_get_type_once (void);

Application*
application_construct (GType object_type)
{
	Application * self = NULL;
#line 4 "../src/Application.vala"
	self = (Application*) g_object_new (object_type, "application-id", "con.github.lesimoes.valehello", "flags", G_APPLICATION_FLAGS_NONE, NULL);
#line 3 "../src/Application.vala"
	return self;
#line 67 "Application.c"
}

Application*
application_new (void)
{
#line 3 "../src/Application.vala"
	return application_construct (TYPE_APPLICATION);
#line 75 "Application.c"
}

static void
application_real_activate (GApplication* base)
{
	Application * self;
	MyAppWindow* window = NULL;
	MyAppWindow* _tmp0_;
#line 11 "../src/Application.vala"
	self = (Application*) base;
#line 12 "../src/Application.vala"
	_tmp0_ = my_app_window_new (self);
#line 12 "../src/Application.vala"
	g_object_ref_sink (_tmp0_);
#line 12 "../src/Application.vala"
	window = _tmp0_;
#line 13 "../src/Application.vala"
	gtk_application_add_window ((GtkApplication*) self, (GtkWindow*) window);
#line 11 "../src/Application.vala"
	_g_object_unref0 (window);
#line 96 "Application.c"
}

static void
application_class_init (ApplicationClass * klass,
                        gpointer klass_data)
{
#line 1 "../src/Application.vala"
	application_parent_class = g_type_class_peek_parent (klass);
#line 1 "../src/Application.vala"
	((GApplicationClass *) klass)->activate = (void (*) (GApplication*)) application_real_activate;
#line 107 "Application.c"
}

static void
application_instance_init (Application * self,
                           gpointer klass)
{
}

static GType
application_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ApplicationClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) application_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (Application), 0, (GInstanceInitFunc) application_instance_init, NULL };
	GType application_type_id;
	application_type_id = g_type_register_static (gtk_application_get_type (), "Application", &g_define_type_info, 0);
	return application_type_id;
}

GType
application_get_type (void)
{
	static volatile gsize application_type_id__volatile = 0;
	if (g_once_init_enter (&application_type_id__volatile)) {
		GType application_type_id;
		application_type_id = application_get_type_once ();
		g_once_init_leave (&application_type_id__volatile, application_type_id);
	}
	return application_type_id__volatile;
}

