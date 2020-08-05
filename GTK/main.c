#include "button_presses.h"

int main(int argc, char* argv[])
{
    gtk_init(&argc, &argv);

    builder = gtk_builder_new_from_file("calculator.glade");
    window  = GTK_WIDGET(gtk_builder_get_object(builder,"window"));
    g_signal_connect(window,"destroy",G_CALLBACK(gtk_main_quit),NULL);
    numDisplay = GTK_WIDGET(gtk_builder_get_object(builder,"expression"));

    gtk_builder_connect_signals(builder,NULL);

    gtk_widget_show(window); 

    strcpy(expression,"0");

    gtk_label_set_label(GTK_LABEL(numDisplay),(gchar *) expression);

    gtk_main();

    return 0;
}