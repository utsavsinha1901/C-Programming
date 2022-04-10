#include <stdio.h>
int main()
{
    printf("Enter w for weight conversion,h for height conversion,t for temperature conversion\n");
    char s;
    scanf("%c", &s);
    switch (s)
    {
    case 'w':
        printf("Enter weight in grams\n");
        int a;
        double k1;
        scanf("%d", &a);
        k1 = a / 1000;
        printf("Weight in kgs is %.2lf ", k1);

        break;
    case 'h':
        printf("Enter height in inches\n");
        int b;
        double k2;
        scanf("%d", &b);
        k2 = b * 0.083;
        printf("Height in feet is %.2lf ", k2);
        break;
    case 't':
        printf("Enter temperature in celcius\n");
        double r;
        double k3;
        scanf("%lf", &r);
        k3 = ((r - 32) * 5) / 9;
        printf("Temperature in fahrenheit is %.2lf ", k3);
        break;

    default:
        printf("Invalid Input");
        break;
    }
    return 0;
}
