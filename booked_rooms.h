#ifndef BOOKED_ROOMS_H_INCLUDED
#define BOOKED_ROOMS_H_INCLUDED

struct booked_room_info
{
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

void booked_rooms(void)
{
    printf("\n\n\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb LIST OF BOOKED ROOMS"
           " \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n\n");

    FILE *file = fopen("Database.txt", "r");

    if (file == NULL)
    {
        printf("Error!\n");
        return;
    }

    struct booked_room_info students[8];
    int s_count = 0;

    while (s_count <= 8 && fscanf(file, "%d %s %s %s %d %s %s %s %s %s\n",
           &students[s_count].room_number, students[s_count].name, students[s_count].father_name, students[s_count].mother_name,
           &students[s_count].age, students[s_count].permanent_address, students[s_count].contact_number, students[s_count].institution,
           students[s_count].payment_status, students[s_count].booking_date) == 10) // '\n' is inside the double quote so it reads the newline character
           {s_count++;}

    fclose(file);

    if (s_count == 0)
    {
        printf("\t\tNo rooms have been booked.\n");
    }
    else
    {
        for (int i = 0; i < s_count; i++)
        {
            printf("\t\tRoom Number: %d\n", students[i].room_number);
            printf("\t\t-------------------\n");
            printf("\t\tName of the occupant: %s\n", students[i].name);
            printf("\t\tFather's Name: %s\n", students[i].father_name);
            printf("\t\tMother's Name: %s\n", students[i].mother_name);
            printf("\t\tAge: %d\n", students[i].age);
            printf("\t\tHome District: %s\n", students[i].permanent_address);
            printf("\t\tContact Number: %s\n", students[i].contact_number);
            printf("\t\tStudying at: %s\n", students[i].institution);
            printf("\t\tBooking Date: %s\n", students[i].booking_date);
            printf("\n\n");
        }
    }
}

#endif // BOOKED_ROOMS_H_INCLUDED
