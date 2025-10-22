#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main(void) {

    char name[20];                                                                            
    int age;
    char isAloneResponse[5];

    printf("Hello, World!\n");                      
    printf("And hello to you! What's your name? ");  

        fgets(name, sizeof(name), stdin);                
        name[strcspn(name, "\n")] = '\0';                  
                                                     
    printf("Hello %s! Is there anybody else with you? (Yes/No) ", name); 

        fgets(isAloneResponse, sizeof(isAloneResponse), stdin);
        isAloneResponse[strcspn(isAloneResponse, "\n")] = '\0';

        if (strcmp(isAloneResponse, "Yes") == 0 || strcmp(isAloneResponse, "yes") == 0) {
            
            int loop = 1;

            do
            {

                printf("Let me say hi to them! What's your name? ");

                    char otherName[20];
                    fgets(otherName, sizeof(otherName), stdin);
                    otherName[strcspn(otherName, "\n")] = '\0';

                printf("Hello %s!", otherName);
                printf("Is there anybody else you want to introduce me? (Yes/No) ");

                    fgets(isAloneResponse, sizeof(isAloneResponse), stdin);
                    isAloneResponse[strcspn(isAloneResponse, "\n")] = '\0';     

                    if (isAloneResponse == "No" || strcmp(isAloneResponse, "no") == 0) {

                        loop = 0;
                    }
                    
            } while (loop == 1);

        } else if (strcmp(isAloneResponse, "No") == 0 || strcmp(isAloneResponse, "no") == 0) {

            

        } else {
            printf("Sorry. I'm still a little dumb. Please answer with 'Yes' or 'No' until I get smarter.\n");
        }
                                                                 
}