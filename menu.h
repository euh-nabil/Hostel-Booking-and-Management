#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

void menu(void){

    Beep(1000, 1000); // Added beep sound

    printf("\t\t###################################################\n");
    printf("\t\t##########                               ##########\n");
    printf("\t\t##########  HOSTEL BOOKING & MANAGEMENT  ##########\n");
    printf("\t\t##########                               ##########\n");
    printf("\t\t###################################################\n");
    printf("\t\t---------------------------------------------------\n");
    printf("\t\t                     MAIN MENU                     \n");
    printf("\t\t---------------------------------------------------\n");
    printf("\n");
    printf("\t\t 1. BOOK A NEW ROOM FOR A STUDENT\n");
    printf("\t\t 2. LIST OF BOOKED ROOMS\n");
    printf("\t\t 3. SEARCH FOR A PARTICULAR ROOM\n");
    printf("\t\t 4. DEPARTURE OF A STUDENT\n\n");
    printf("\t\t 5. CHANGE ADMIN PASSWORD\n\n");
    printf("\t\t 0. EXIT\n");
    printf("\t\t---------------------------------------------------\n\n");

}

#endif // MENU_H_INCLUDED
