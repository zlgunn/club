#include <stdio.h>

int main(){
    int a = 100;
    int b = 12;

    double c = 12.5;
    double d = 55.7;

    printf("a=%d, b=%d, c=%f, d=%f\n",a,b,c,d); /* %d means integer */

    printf("a + b = %d\n",a+b); /* Same holds true for subtraction ('-'), multi. ('*'), and division ('/') */
    printf("Now time for doubles!\n");
    printf("c + d = %f\n",c+d); /* %f is used for the 'double' variable type */
}
