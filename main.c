#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
    double a;
    double b;
    double c;
    double x1;
    double x2;
    double delta;

    printf("Podaj a: ");
    scanf("%lf", &a);
    printf("Podaj b: ");
    scanf("%lf", &b);
    printf("Podaj c: ");
    scanf("%lf", &c);

    //D = b 2 - 4 * a* c

    delta = (b*b) - 4*a*c;
    printf("Delta = %lf\n", delta);

    if(delta < 0){
        printf("Delta nie ma rozwiązań");
    }

    if(delta == 0) {
        x1 = -b/(2*a);
        printf("Rozwiązanie %lf", x1);
    }
    if(delta > 0){
        //a = sqrt (c);
        x1 = (-b-sqrt(delta))/2*a;
        x2 = (-b+sqrt(delta))/2*a;
        printf("Rozwiązanie x1=%lf, x2=%lf\n", x1, x2);
    }
    return 0;
}