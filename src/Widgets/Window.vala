public class MyApp.Window : Gtk.ApplicationWindow {

    private GLib.Settings settings;

    public Window (Application app) {
        Object (
            application: app
        );
    }
    construct {
        window_position = Gtk.WindowPosition.CENTER;
        set_default_size(350, 80);

        this.settings = new GLib.Settings("com.github.lesimoes.valahello");

        move(settings.get_int("pos-x"), settings.get_int("pos-y"));
        resize(settings.get_int("window-width"), settings.get_int("window-height"));

        delete_event.connect(e => {
            return before_destroy();
        });

        var headerbar = new MyApp.HeaderBar();
        set_titlebar(headerbar);

        show_all();
    }

    public bool before_destroy () {
        int width, height, x, y;

        get_size(out width, out height);
        get_position(out x, out y);

        this.settings.set_int("pos-x", x);
        this.settings.set_int("pos-y", y);
        this.settings.set_int("window-width", width);
        this.settings.set_int("window-height", height);
        return false;
    }
}
