#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    char val , m = 8;
    printf("\n choose your option \n");
    printf(" 1. To switch on green light in direction 1 press 1\n");
    printf(" 2. To switch on green light in direction 2 press 2 \n");
    printf(" 3. To switch on green light in direction 3 press 3 \n");
    printf(" 4. To switch on green light in direction 4 press 4 \n");
    printf(" 5. TO enable automatic mode press a \n");
    scanf("%c", &val);
    while(1){
        if(val != m){
            m = val;
            if(val == '1'){
                printf("Road 1 green light is ON\n");
            }else if(val == '2'){
            printf("Road 2 green light is ON\n");
            }else if(val == '3'){
                printf("Road 3 green light is ON\n");
            }else if(val == '4'){
                printf("Road 4 green light is ON\n");
            }else if(val == 'a'){
                printf("Automatic mode is enabled\n");
            }
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
        
            case '2': 
            printf("Road 1 red light ON\n");
            printf("Road 3 red light ON\n");
            printf("Road 4 red light ON\n");
            printf("Road 1 green light OFF\n");
            printf("Road 1 yellow light OFF\n");
            printf("Road 2 red light OFF\n");
            printf("Road 2 yellow light OFF\n");
            printf("Road 3 green light OFF\n");
            printf("Road 3 yellow light OFF\n");
            printf("Road 4 green light OFF\n");
            printf("Road 4 yellow light OFF\n");
            break;
       
            case '3':
            printf("Road 1 red light ON\n");
            printf("Road 2 red light ON\n");
            printf("Road 4 red light ON\n");
            printf("Road 1 green light OFF\n");
            printf("Road 1 yellow light OFF\n");
            printf("Road 2 green light OFF\n");
            printf("Road 2 yellow light OFF\n");
            printf("Road 3 red light OFF\n");
            printf("Road 3 yellow light OFF\n");
            printf("Road 4 green light OFF\n");
            printf("Road 4 yellow light OFF\n");
            break;
        
            case '4':
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
        scanf("%c", &val);
        if(val == 'b'){
            break;
        }
    }
    return 0;
}
