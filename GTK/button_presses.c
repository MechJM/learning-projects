#include "button_presses.h"
#include <string.h>
#include <ctype.h>

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

    gtk_label_set_label(GTK_LABEL(numDisplay),(gchar *) expression);
}

void on_equalsButton_clicked(GtkButton* button)
{
    button = button;

    for (unsigned int i = 0; i < strlen(expression); i++)
    {
        if (!isdigit(expression[i]))
        {
            double num1 = atof(&expression[0]);
            double num2 = atof(&expression[i+1]);
            double result;

                 if (expression[i] == '+') result = num1 + num2;
            else if (expression[i] == '-') result = num1 - num2;
            else if (expression[i] == '*') result = num1 * num2;
            else if (expression[i] == '/') result = num1 / num2;

            sprintf(expression,"%f",result);
            break;
        }
    }
    gtk_label_set_label(GTK_LABEL(numDisplay),(gchar *) expression);
}