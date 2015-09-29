#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
    int age;

    printf("Please tell me how old you are: "); /* Notice we didn't use '\n' here */
    scanf("%d",&age); /* %d means an integer, remember? */
    if(age <= 10){ /* If your age is 10 or less */
        printf("You are a little kid!\n"); /* Then say this */
    }else if(age > 10 && age <= 99){ /* If your age is more than 10, but less than 100 */
        printf("You're not a kid anymore.\n"); /* Then say this */
    }else{ /* For every other case */
        printf("You're very old!\n"); /* Say this */
    }

    return 0;
}
