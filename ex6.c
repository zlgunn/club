#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char *argv[]){
    char *employees[5] = {"Josh","Jack","Ben","Bailey","Michael"};
    char input;
    char *name;
    int i;
    int running = 1;

    printf("Welcome to my database program, what would you like to do?\n");

    while(running == 1){
        printf("[L]ist employees\n[C]hange employee name\n[Q]uit\n>");
        scanf(" %c",&input);

        if(input == 'l' || input == 'L'){
            for(i=0;i<5;i++){
                printf("%d: %s\n",i,employees[i]);
            }
        }
        if(input == 'c' || input == 'C'){
            printf("Which employee name do you want to change? [0,1,2,3,4]: ");
            scanf(" %d",&i);
            printf("Enter new employee name: ");
            scanf(" %s",name);
            employees[i] = name;
        }
        if(input == 'q' || input == 'Q'){
            running = 0;
        }
    }

    return 0;
}
