#include "button_presses.h"
#include <string.h>
#include <ctype.h>

void on_notEqualsButton_clicked(GtkButton* button)
{
    char * buttonLabel = (char *) gtk_button_get_label(button);
    char toBeAppended[2] = "";

         if (strcmp(buttonLabel, "1") == 0) strcpy(toBeAppended,"1");
    else if (strcmp(buttonLabel, "2") == 0) strcpy(toBeAppended,"2");
    else if (strcmp(buttonLabel, "3") == 0) strcpy(toBeAppended,"3");
    else if (strcmp(buttonLabel, "4") == 0) strcpy(toBeAppended,"4");
    else if (strcmp(buttonLabel, "5") == 0) strcpy(toBeAppended,"5");
    else if (strcmp(buttonLabel, "6") == 0) strcpy(toBeAppended,"6");
    else if (strcmp(buttonLabel, "7") == 0) strcpy(toBeAppended,"7");
    else if (strcmp(buttonLabel, "8") == 0) strcpy(toBeAppended,"8");
    else if (strcmp(buttonLabel, "9") == 0) strcpy(toBeAppended,"9");
    else if (strcmp(buttonLabel, "0") == 0) strcpy(toBeAppended,"0");
    else if (strcmp(buttonLabel, "+") == 0) strcpy(toBeAppended,"+");
    else if (strcmp(buttonLabel, "-") == 0) strcpy(toBeAppended,"-");
    else if (strcmp(buttonLabel, "*") == 0) strcpy(toBeAppended,"*");
    else if (strcmp(buttonLabel, "/") == 0) strcpy(toBeAppended,"/");
    else if (strcmp(buttonLabel, ".") == 0) strcpy(toBeAppended,".");

    if (strcmp(expression,"0") != 0) strcat(expression,toBeAppended);
    else strcpy(expression,toBeAppended);

    gtk_label_set_label(GTK_LABEL(numDisplay),(gchar *) expression);
}

void on_equalsButton_clicked(GtkButton* button)
{
    button = button;

    char formatString[5] = "%f";
    enum operation op;
    char oper[2] = "";

         if (strstr(expression,"+") != NULL) {op = addition;         strcpy(oper,"+");}
    else if (strstr(expression,"-") != NULL) {op = subtraction;      strcpy(oper,"-");}
    else if (strstr(expression,"*") != NULL) {op = multiplication;   strcpy(oper,"*");}
    else if (strstr(expression,"/") != NULL) {op = division;         strcpy(oper,"/");}
    
    strcat(formatString,oper);
    strcat(formatString,"%f");

    float num1,num2;
    double result;

    sscanf(expression,formatString,&num1,&num2);

    printf("Num1: %f\n",num1);
    printf("Num2: %f\n",num2);

         if (op == addition)        result = num1 + num2;
    else if (op == subtraction)     result = num1 - num2;
    else if (op == multiplication)  result = num1 * num2;
    else if (op == division)        result = num1 / num2;

    printf("result: %f\n",result);

    sprintf(expression,"%f",result);

    printf("expression: %s\n",expression);

    gtk_label_set_label(GTK_LABEL(numDisplay),(gchar *) expression);
}