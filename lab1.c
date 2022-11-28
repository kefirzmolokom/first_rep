#include <stdio.h> 
#include <math.h>

int main() 
{ 
    double x, z;
    printf("Input x and z values: ");
    scanf("%f%f", &x, &z); 
    printf("Result: %f", tan(sqrt(x)) + 165*pow(z,6) + pow(pow(x,2) - z, 0.25));
    return 0; 
}