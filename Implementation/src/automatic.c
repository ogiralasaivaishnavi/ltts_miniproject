#include <stdio.h>
#include <stdlib.h>
int main()

{
    int i;
    char val , m = 8;
    printf("\n choose your option \n");
    printf(" 5. TO enable automatic mode press a \n");
    
    scanf("%c", &val);
        if(val == 'a'){
                   printf("Automatic mode is enabled\n");
            }
        switch(val){
            
            case 'a':
            printf("Road 1 green light ON\n");
            printf("Road 2 red light ON\n");
            printf("Road 3 red light ON\n");
            printf("Road 4 red light OFF\n");
            printf("Road 1 red light OFF\n");
            printf("Road 1 yellow light OFF\n");
            printf("Road 2 green light OFF\n");
            printf("Road 2 yellow light OFF\n");
            printf("Road 3 green light OFF\n");
            printf("Road 3 yellow light OFF\n");
            printf("Road 4 red light OFF\n");
            printf("Road 4 yellow light OFF\n");
            
            for(int i = 0; i <= 32767; i++){
                for(int j = 0; j <= 32767; j++){
                }
            }
            printf("Road 1 green light OFF\n");
            printf("Road 2 green light ON\n");
            
            for(int i = 0; i <= 32767; i++){
                for(int j = 0; j <= 32767; j++){
                }
            }
            printf("Road 2 green light OFF\n");
            printf("Road 2 red light ON\n");
            printf("Road 3 green light ON\n");
            printf("Road 3 red light OFF\n");
            for(int i = 0; i <= 32767; i++){
                for(int j = 0; j <= 32767; j++){
                }
            }
            printf("Road 3 green light OFF\n");
            printf("Road 3 red light ON\n");
            printf("Road 4 green light ON\n");
            printf("Road 4 red light OFF\n");
            default:
            break;
        }
        
    
    return 0;
}


