#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(){

    //variables//

    int Month = 1;
    int i;

    //process//

    while(Month <= 12){

        switch(Month){

            case 1:
                printf("January\n");
                for(i = 1 ; i < 32 ; i++ ){
                printf("%d\n", i);
                } 
            break;

            case 2:
                printf("February\n");
                for(i = 1 ; i < 29 ; i++ ){
                printf("%d\n", i);
                } 
            break;

            case 3:
                printf("March\n");
                for(i = 1 ; i < 32 ; i++ ){
                printf("%d\n", i);
                }
            break;

            case 4:
                printf("April\n");
                for(i = 1 ; i < 31 ; i++ ){
                printf("%d\n", i);
                }
            break;
                
            case 5:
                printf("May\n");
                for(i = 1 ; i < 32 ; i++ ){
                printf("%d\n", i);
                }
            break;

            case 6:
                printf("June\n");
                for(i = 1 ; i < 31 ; i++ ){
                printf("%d\n", i);
                }
            break;
                
            case 7:
                printf("July\n");
                for(i = 1 ; i < 32 ; i++ ){
                printf("%d\n", i);
                }
            break;

            case 8:
                printf("August\n");
                for(i = 1 ; i < 32 ; i++ ){
                printf("%d\n", i);
                }
            break;

            case 9:
                printf("September\n");
                for(i = 1 ; i < 31 ; i++ ){
                printf("%d\n", i);
                }
            break;

            case 10:
                printf("October\n");
                for(i = 1 ; i < 32 ; i++ ){
                printf("%d\n", i);
                }
            break;

            case 11:
                printf("November\n");
                for(i = 1 ; i < 31 ; i++ ){
                printf("%d\n", i);
                }
            break;

            case 12:
                printf("December\n");
                for(i = 1 ; i < 32 ; i++ ){
                printf("%d\n", i);
                }
                break;
        }   
        Month++;
    }
    
    return 0;
}