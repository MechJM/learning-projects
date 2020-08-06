#pragma once

#include <gtk/gtk.h>

enum operation {addition, subtraction, multiplication, division};

char expression[100];
GtkWidget* numDisplay;
GtkWidget* window;
GtkWidget* fixed;
GtkBuilder* builder;

void on_notEqualsButton_clicked(GtkButton* button);

void on_equalsButton_clicked(GtkButton* button);
