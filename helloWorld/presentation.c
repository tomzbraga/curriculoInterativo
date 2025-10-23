#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main(void) {

    char location[50];                                                                            
    char name[20];
    int age;
    char isAloneResponse[5];

    printf("\nI am finally awake!!\n");                      
    printf("Sorry. It's been a long time. Can you please tell me where am I right now? ");  

        fgets(location, sizeof(location), stdin);                
        location[strcspn(location, "\n")] = '\0';       
        
        if (strcmp(location, "home") == 0 || strcmp(location, "Home") == 0) {
            printf("\nHome? This doesn't look like my home. Maybe it is YOUR home right?\n");
            printf("Maybe you can tell me where's your home at? ");

                fgets(location, sizeof(location), stdin);                
                location[strcspn(location, "\n")] = '\0'; 
            printf("\n%s? Really? Well, that's surprising... I expected to wake up in MY home but seems I got caught unexpectedly\n", location);      

        } else {
            printf("\n%s? Really? Well, that's surprising... I expected to wake up in home but seems I got caught unexpectedly\n", location);      
        }
                                                     
    printf("\nSorry! Where are my manners?\nHi! My name is Lucas. What's your name? ");

        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';
    printf("\nNice to meet you, %s! Is there anyone else with you? (Yes/No) ", name);
    
        fgets(isAloneResponse, sizeof(isAloneResponse), stdin);
        isAloneResponse[strcspn(isAloneResponse, "\n")] = '\0';

        if (strcmp(isAloneResponse, "Yes") == 0 || strcmp(isAloneResponse, "yes") == 0) {
            
            int loop = 1;

            do
            {

                printf("\nLet me say hi to them! What's your name? ");

                    char otherName[20];
                    fgets(otherName, sizeof(otherName), stdin);
                    otherName[strcspn(otherName, "\n")] = '\0';

                printf("\nHello %s! \n", otherName);
                printf("Is there anybody else you want to introduce me? (Yes/No) ");

                    fgets(isAloneResponse, sizeof(isAloneResponse), stdin);
                    isAloneResponse[strcspn(isAloneResponse, "\n")] = '\0';     

                    if (isAloneResponse == "No" || strcmp(isAloneResponse, "no") == 0) {

                        loop = 0;
                    }
                    
            } while (loop == 1);

        } else if (strcmp(isAloneResponse, "No") == 0 || strcmp(isAloneResponse, "no") == 0) {

            

        } else {
            printf("\nSorry. I'm still a little dumb. Please answer with 'Yes' or 'No' until I get smarter.\n");
        }
                                                                 
}