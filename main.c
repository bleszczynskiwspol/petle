#include <stdio.h>
#define _USE_MATH_DEFINES

void wczytaj_parametry(double *a, double *b, double *c);

void policz_dwie_funkcje(double a, double b, double x1, double x2, double delta);

void komunikat_brak_rozwiazania();

double jedno_rozwiazanie(double a, double b, double x1);

#include <math.h>

int main() {
    double a;
    double b;
    double c;
    double x1;
    double x2;
    double delta;

    wczytaj_parametry(&a, &b, &c);

    //D = b 2 - 4 * a* c

    delta = (b*b) - 4*a*c;
    printf("Delta = %lf\n", delta);

    if(delta < 0){
        komunikat_brak_rozwiazania();
    }

    if(delta == 0) {
        x1 = jedno_rozwiazanie(a, b, x1);
    }
    if(delta > 0){
        policz_dwie_funkcje(a, b, x1, x2, delta);
    }
    return 0;
}

double jedno_rozwiazanie(double a, double b, double x1) {
    x1 = -b / (2 * a);
    printf("Rozwiązanie %lf", x1);
    return x1;
}

void komunikat_brak_rozwiazania() { printf("Delta nie ma rozwiązań"); }

void policz_dwie_funkcje(double a, double b, double x1, double x2, double delta) {//a = sqrt (c);
    x1 = (-b-sqrt(delta))/2*a;
    x2 = (-b+sqrt(delta))/2*a;
    printf("Rozwiązanie x1=%lf, x2=%lf\n", x1, x2);
}

void wczytaj_parametry(double *a, double *b, double *c) {
    printf("Podaj a: ");
    scanf("%lf", a);
    printf("Podaj b: ");
    scanf("%lf", b);
    printf("Podaj c: ");
    scanf("%lf", c);
}