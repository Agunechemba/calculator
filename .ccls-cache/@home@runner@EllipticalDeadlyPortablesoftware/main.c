#include <stdio.h>
#include <stdlib.h>

int main () {

    double num1;
    double num2;
    char op;

    printf("ENTER NUMBER: ");
    scanf("%lf", &num1);
    printf("OPERATION:  ");
    scanf(" %c", &op);
    printf("ENTER NUMBER: ");
    scanf("%lf", &num2);


    if (op == '+') {
        printf ("%lf", num1+num2);

    }

    else if (op == '-') {
        printf ("%lf", num1-num2);

    }
    else if (op == '*') {
        printf ("%lf", num1*num2);

    }

    else if (op == '/') {
        printf ("%lf", num1/num2);

    }

    else {
        printf ("INVALID INPUT");

    }





    return 0;

}