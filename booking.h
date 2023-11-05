#ifndef BOOKING_H_INCLUDED
#define BOOKING_H_INCLUDED

struct student_data {
    int room_number;
    char name[100];
    char father_name[100];
    char mother_name[100];
    int age;
    char permanent_address[100];
    char contact_number[15];
    char institution[100];
    char payment_status[10];
    char booking_date[20];
};

void booking(void)
{
    FILE *file = fopen("Database.txt", "a");
    if(file==NULL)
    {
      printf("Error!\n");
      return;
    }

    printf("\n\n\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb BOOK A NEW ROOM"
           " \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
    printf("\t\tWarning:\n");
    printf("\t\tDon't book a seat that has already been booked.\n");
    printf("\t\tGo to MAIN MENU to find out which seats are booked.\n\n");
    printf("\t\t***********************************************************\n\n");

    printf("\t\tALL ROOMS IN OUR HOSTEL BUILDING:\n\n");
    int room = 8;
    for(int floor = 4 ; floor>=1 ; floor--)
    {
       printf("\t\t");
       for(int a = 1 ; a<=2 ; a++)
       {
       printf("# FLOOR-%d : ROOM-%d #     ", floor, room);
       room--;
       }
       printf("\n");
    }

    int choice;
    printf("\n\t\tCHOOSE A ROOM THAT YOU WANT TO BOOK (Enter room number): ");
    scanf("%d", &choice);

    system("cls");

    printf("\n\n\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb BOOK A NEW ROOM"
           " \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
    printf("\n\t\t***********************************************************\n\n");
    printf("\t\tFILL-UP THE FOLLOWING INFORMATIONS : \n\n");

    struct student_data student;
    student.room_number = choice;

    printf("\t\tNAME (First name): ");
    scanf("%s", student.name);
    printf("\t\tFATHER'S NAME (First name): ");
    scanf("%s", student.father_name);
    printf("\t\tMOTHER'S NAME (First name): ");
    scanf("%s", student.mother_name);
    printf("\t\tAGE: ");
    scanf("%d", &student.age);
    printf("\t\tHOME DISTRICT: ");
    scanf("%s", student.permanent_address);
    printf("\t\tCONTACT NUMBER: ");
    scanf("%s", student.contact_number);
    printf("\t\tCURRENTLY STUDYING IN (Write short form of your institution): ");
    scanf("%s", student.institution);
    printf("\n\t\tPAYMENT (DONE/DUE): ");
    scanf("%s", student.payment_status);
    printf("\t\tBOOKING DATE (dd-mm-yyyy): ");
    scanf("%s", student.booking_date);

    printf("\n\n\t\tThe room is being booked...");
    sleep(2);
    fprintf(file, "%d %s %s %s %d %s %s %s %s %s\n", student.room_number, student.name, student.father_name, student.mother_name, student.age, student.permanent_address, student.contact_number, student.institution, student.payment_status, student.booking_date);
    fclose(file);
    printf("\n\n\t\tRoom-%d successfully booked for %s.\n\n", student.room_number, student.name);
}

#endif // BOOKING_H_INCLUDED
