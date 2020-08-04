#include "button_presses.h"

void on_notEqualsButton_clicked(GtkButton* button)
{
    char * buttonLabel = (char *) gtk_button_get_label(button);
    char toBeAppended = 0;

         if (strcmp(buttonLabel, "1") == 0) toBeAppended = '1';
    else if (strcmp(buttonLabel, "2") == 0) toBeAppended = '2';
    else if (strcmp(buttonLabel, "3") == 0) toBeAppended = '3';
    else if (strcmp(buttonLabel, "4") == 0) toBeAppended = '4';
    else if (strcmp(buttonLabel, "5") == 0) toBeAppended = '5';
    else if (strcmp(buttonLabel, "6") == 0) toBeAppended = '6';
    else if (strcmp(buttonLabel, "7") == 0) toBeAppended = '7';
    else if (strcmp(buttonLabel, "8") == 0) toBeAppended = '8';
    else if (strcmp(buttonLabel, "9") == 0) toBeAppended = '9';
    else if (strcmp(buttonLabel, "0") == 0) toBeAppended = '0';
    else if (strcmp(buttonLabel, "+") == 0) toBeAppended = '+';
    else if (strcmp(buttonLabel, "-") == 0) toBeAppended = '-';
    else if (strcmp(buttonLabel, "*") == 0) toBeAppended = '*';
    else if (strcmp(buttonLabel, "/") == 0) toBeAppended = '/';
    else if (strcmp(buttonLabel, ".") == 0) toBeAppended = '.';

    strcat(expression,&toBeAppended);

    return;
}