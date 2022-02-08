public class MyApp.HeaderBar : Gtk.HeaderBar {
    construct {
        set_show_close_button(true);

        var button = new Gtk.Button.with_label("Adicionar");
        button.valign = Gtk.Align.CENTER;

        pack_start(button);

        var menu_button = new Gtk.Button.from_icon_name("open-menu", Gtk.IconSize.LARGE_TOOLBAR);
        menu_button.valign = Gtk.Align.CENTER;

        var stack_switcher = new Gtk.StackSwitcher();
        var stack = new Gtk.Stack();
        stack_switcher.stack = stack;
        var outstanding = new Gtk.Grid();
        outstanding.add(new Gtk.Label("Sei lá"));
        var completed = new Gtk.Grid();
        completed.add(new Gtk.Label("Faço a menor ideia"));

        stack.add_titled(outstanding, "first", "Pendentes");
        stack.add_titled(completed, "second", "Completas");

        set_custom_title(stack_switcher);

        pack_end(menu_button);
    }
}