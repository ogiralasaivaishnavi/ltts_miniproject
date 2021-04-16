#include <stdio.h>// header files
#include <stdlib.h>//header files
int main()// intialisation
{
    int i; //variable declaration for loop 
    char val , m = 8;// input variables declaration
    printf("\n choose your option \n");// Giving information about the particular values for particular direction 
    printf(" 1. To switch on green light in direction 1 press 1\n");// asking the user to enter a value==1
    printf(" 2. To switch on green light in direction 2 press 2 \n");//asking the user to enter value ==2
    printf(" 3. To switch on green light in direction 3 press 3 \n");//asking the user to enter a value==3
    printf(" 4. To switch on green light in direction 4 press 4 \n");//asking the user to enter a value==4
    printf(" 5. TO enable automatic mode press a \n");//asking the user to enter a value==a
    scanf("%c", &val);//storing the value in the address of variable 
    while(1){
        if(val != m){
            m = val;
	// nested if loop for the output taffic light according to given particular value		
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
		// loop written for remaining all lights in all directions for a particular input value
        switch(val){
            case '1': // for green light at road 1, the remaining lights operation 
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
        
            case '2': // for green light at road 2, the remaining lights operation 
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
       
            case '3':  //for green light at road 3, the remaining lights operation 
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
        
            case '4':// for green light at road 4, the remaining lights operation 
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
        
            case 'a':// after the automatic mode enabled, the operation of all lights 
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
            // the for loop iteration for continous operation of automatic mode
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
        scanf("%c", &val);// Inorder to stop the complete code run, anonymous 'b' is taken
        if(val == 'b'){
            break;
        }
    }
    return 0;
}
