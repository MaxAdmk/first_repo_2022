#include <stdio.h>
#include <math.h>

int main() {
    float x, y, s;
    
    x=2.632;
    y=0.731;

    printf("X = %f\n", x);
    printf("Y = %f\n", y);

    s = ((sin(pow(x, 2)) + cos(2*x + y)) - 14*pow(((pow(x, 2))+y), 3));
    
    printf("(sin(x^2) + cos(2*x + y)) - 14*(x^2 + y)^3 = %f\n", s);
    
    return 0;
}