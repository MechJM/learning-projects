#pragma once

#include <gtk/gtk.h>

char expression[100];
GtkWidget* numDisplay;

void on_notEqualsButton_clicked(GtkButton* button);

void on_equalsButton_clicked(GtkButton* button);
