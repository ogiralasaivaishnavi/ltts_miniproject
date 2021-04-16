#include <stdio.h>
#include <stdlib.h>
int main()

{
    int i;
    char val , m = 8;
    printf("\n choose your option \n");
    printf(" 1. To switch on green light in direction 1 press 1\n");
    scanf("%c", &val);
        if(val == '1'){
                printf("Road 1 green light is ON\n");
            }
        switch(val){
            case '1':
            printf("Road 2 red light ON\n");
            printf("Road 3 red light ON\n");
            printf("Road 4 red light ON\n");
            printf("Road 1 red light OFF\n");
            printf("Road 1 yellow light OFF\n");
            printf("Road 2 green light OFF\n");
            printf("Road 2 yellow light OFF\n");
            printf("Road 3 green light OFF\n");
            printf("Road 3 yellow light OFF\n");
            printf("Road 4 green light OFF\n");
            printf("Road 4 yellow light OFF\n");
            break;
        
     }       return 0;
}

