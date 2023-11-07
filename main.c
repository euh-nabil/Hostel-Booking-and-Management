/* PROJECT TITLE : "HOSTEL BOOKING & MANAGEMENT" */
// NORTH SOUTH UNIVERSITY
// MLE CSE115L SECTION-9
// SUMMER 2023
/* Name : Ehtesham-ul-hassan */
/* ID   : 232 2534 642       */

/* DEFAULT LOG-IN DETAILS :

   USERNAME > ehteshamulhassan.232
   PASSWORD > 27122005
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <unistd.h>
#include <windows.h> // Only applicable for WindowsOS
#include "splash.h"
#include "options.h"
#include "login.h"
#include "menu.h"
#include "booking.h"
#include "booked_rooms.h"
#include "search_room.h"
#include "depart.h"
#include "change_pass.h"

void print_hashes(int n); // Function that uses RECURSION to print '#' characters
void ending_message(void);

int main(void)
{
    splash_screen();
    sleep(3);
    system("cls");

    int status = options();
    // Here, I called the function options() and stored the int type return value into the variable 'status'

    /* Reason:
       The login() function is connected with options() function. If a user can successfully login, only then
       will the login() function return the value 1. Inside the option() function, I called the login() function
       in way that, if the user picks the option to login, only then will the function option() will return 1.

       That means - If the user is successfully logged in, only then the function option() will return the value 1
       and store it in the variable 'status'. Only then can the user access the MAIN MENU.
    */

    if(status==1)
{   while(1){

    int choose;
    menu();

 int iteration=1;
 do{if(iteration!=1)
    printf("\n\t\tInvalid input! CHOOSE AN OPTION : ");
    else
    printf("\n\t\tCHOOSE AN OPTION : ");
    scanf("%d", &choose);
    iteration++;         }while(!(choose==0 || choose==1 || choose==2 || choose==3 || choose==4 || choose==5));


    // From here, the code for different options of MAIN MENU begins:

    int menu;

    if(choose==0) // EXIT
    {
        system("cls");
        printf("Thank you! :)\n");
        break;
    }
    if(choose==1) // BOOK A NEW SEAT FOR A STUDENT
    {
     system("cls");
     booking();

     printf("\n\n\t\t\xdb Enter '-1' to go to MAIN MENU : ");
     scanf("%d", &menu);
     system("cls");
     if(menu!=-1)
     {printf("Thank you! :)\n");
      break;}
    }
    if(choose==2) // LIST OF BOOKED ROOMS
    {
     system("cls");
     booked_rooms();

     printf("\n\t\t\xdb Enter '-1' to go to MAIN MENU : ");
     scanf("%d", &menu);
     system("cls");
     if(menu!=-1)
     {printf("Thank you! :)\n");
      break;}
    }
    if(choose==3) // SEARCH FOR A PARTICULAR ROOM
    {
     system("cls");
     search_room();

     printf("\n\t\t\xdb Enter '-1' to go to MAIN MENU : ");
     scanf("%d", &menu);
     system("cls");
     if(menu!=-1)
     {printf("Thank you! :)\n");
      break;}
    }
    if(choose==4) // DEPARTURE OF A STUDENT
    {
      system("cls");
      delete_room_info();

     printf("\n\t\t\xdb Enter '-1' to go to MAIN MENU : ");
     scanf("%d", &menu);
     system("cls");
     if(menu!=-1)
     {printf("Thank you! :)\n");
      break;}
    }
    if(choose==5) // CHANGE ADMIN PASSWORD
    {
      system("cls");
      change_pass();

      printf("\n\t\t\xdb Enter '-1' to go to MAIN MENU : ");
     scanf("%d", &menu);
     system("cls");
     if(menu!=-1)
     {printf("Thank you! :)\n");
      break;}
     }

} // Curly brace for infinite while loop of MAIN MENU (Comment for coding convenience)
} // Curly brace for the if statement that controls the execution of 'menu.h' (Comment for coding convenience)

    ending_message();

    return 0;
}

void print_hashes(int n)  // USE OF RECURSION IN THE PROJECT
                          /* This function uses RECURSION in order to print required amount of '#' characters
                             This function is called inside the ending_message() function
                           */
{
  if(n==1) printf("#");
  else
      {
         print_hashes(n-1);
         printf("#");
      }
}

void ending_message(void)
{
    printf("\n");
    print_hashes(51); // Recursive function call
    printf("\n");
    printf("#                                                 #\n");
    printf("#  PROJECT TITLE : \"HOSTEL BOOKING & MANAGEMENT\"  #\n");
    printf("#  NORTH SOUTH UNIVERSITY                         #\n");
    printf("#  MLE CSE115L SECTION-9                          #\n");
    printf("#  SUMMER 2023                                    #\n");
    printf("#                                                 #\n");
    printf("#  Name : Ehtesham-ul-hassan                      #\n");
    printf("#  ID   : 232 2534 642                            #\n");
    printf("#                                                 #\n");
    print_hashes(51); // Recursive function call
    printf("\n\n");
    printf("  P R O J E C T   E X E C U T I O N   E N D E D\n");
}
