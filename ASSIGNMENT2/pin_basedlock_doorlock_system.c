#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main()
{
    char const correctPin[] = "4567" ;
    int const max_attempts= 3,choice;
    int attempts =0, valid =0;
    char userPin[10];

    printf("\t WELCOME TO THE PIN BASED DOORLOCK SYSTEM.\n ");

    while (attempts<max_attempts){
        printf("To access please enter a 4-digit pin.>> ");
        scanf("%s",&userPin);

        if ( strlen(userPin)>4){
            printf("PIN is too long (must be 4 digits)\n");
        }else if( strlen(userPin)<4) {
            printf("PIN is too short (must be $ digits)\n");
        }else {
            printf("PIN is exactly 4 digits\n");

            if (strcmp(userPin,correctPin) == 0){
                printf("\n\tDevice Menu \n1.Open Door \n2.Change username \n3.Change pin \n4.Exit\n\n");
                printf("Choose one option from the menu. To choose pick the corresponding integer.>> ");
                scanf("%i",&choice);

                 switch (choice){
                    case 1:
                        printf("Access granted. Door unlocked\n");
                    break;

                    case 2:
                        printf("Change Username feature coming soon.\n");
                    break;

                    case 3:
                        printf("Change PIN feature coming soon\n");
                    break;

                    case 4:
                        printf("Exiting System\n");
                    break;

                    default:
                        printf("Invalid Option! Please try again.\n");
                }
                break;
            }else{
                printf("Incorrect PIN.\n");
            }
        }
        attempts ++;
        printf("You are remaining with %i attempts\n\n", max_attempts - attempts);
    }
    if (attempts == max_attempts){
        printf("Ststem locked. Wait for 5 seconds...\n");

        for (int i = 5; i>=1; i--){
            printf("%d...\n",i);
            Sleep(1000);
        }
        printf("You can try again now.\n");
    }

    return 0;
}
