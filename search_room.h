#ifndef SEARCH_ROOM_H_INCLUDED
#define SEARCH_ROOM_H_INCLUDED

struct residing_student {
    int room_number;
    char name[100];
    char father_name[100];
    char mother_name[100];
    int age;
    char permanent_address[100];
    char contact_number[50];
    char institution[100];
    char payment_status[10];
    char booking_date[20];
};

void search_room(void) {
    int room_to_check;

    printf("\n\n\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb SEARCH FOR A ROOM "
           "\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n\n");

    printf("\t\tEnter the room number to search and check: ");
    scanf("%d", &room_to_check);

    FILE *file = fopen("Database.txt", "r");

    struct residing_student student;
    int found = 0;
    while (!feof(file))
    {
    fscanf(file, "%d %s %s %s %d %s %s %s %s %s\n",
           &student.room_number, student.name, student.father_name, student.mother_name,
           &student.age, student.permanent_address, student.contact_number, student.institution,
           student.payment_status, student.booking_date); // '\n' is inside the double quote so it reads the newline character

    if (student.room_number == room_to_check)
    {
        found = 1;
        printf("\n\n\t\t<<< ROOM NUMBER %d >>> \n\n", student.room_number);

        printf("\t\tName of the occupant: %s\n", student.name);
        printf("\t\tFather's Name: %s\n", student.father_name);
        printf("\t\tMother's Name: %s\n", student.mother_name);
        printf("\t\tAge: %d\n", student.age);
        printf("\t\tHome District: %s\n", student.permanent_address);
        printf("\t\tContact Number: %s\n", student.contact_number);
        printf("\t\tStudying at: %s\n", student.institution);
        printf("\t\tBooking Date: %s\n", student.booking_date);
        printf("\n");
        break;
    }
    }
    if (!found) {
        printf("\n\t\tRoom-%d isn't booked.\n", room_to_check);
    }

    fclose(file);
}

#endif // SEARCH_ROOM_H_INCLUDED
