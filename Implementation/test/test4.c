#include <stdio.h>
#include <stdlib.h>
int main()

{
    int i;
    int val=4;
   // scanf("%d", &val);
        if(val == 4){
                printf("Road 4 green light is ON\n");
            }
        switch(val){
            case 4:
            printf("Road 1 red light ON\n");
            printf("Road 2 red light ON\n");
            printf("Road 3 red light ON\n");
            printf("Road 1 green light OFF\n");
            printf("Road 1 yellow light OFF\n");
            printf("Road 2 green light OFF\n");
            printf("Road 2 yellow light OFF\n");
            printf("Road 3 green light OFF\n");
            printf("Road 3 yellow light OFF\n");
            printf("Road 4 red light OFF\n");
            printf("Road 4 yellow light OFF\n");
            break;



        
     }       return 0;
}

