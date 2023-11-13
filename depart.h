#ifndef DEPART_H_INCLUDED
#define DEPART_H_INCLUDED

struct room_data
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

void delete_room_info(void)
{
    int room_number;
    printf("\n\n\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb DEPARTURE OF A STUDENT"
           " \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
    printf("\n\t\tENTER ROOM NUMBER OF THE DEPARTING STUDENT: ");
    scanf("%d", &room_number);

    FILE *file = fopen("Database.txt", "r");
    FILE *tempFile = fopen("TempDatabase.txt", "w"); // Creating a temporary file

    struct room_data room;
    int found = 0;

    while (!feof(file))
{
fscanf(file, "%d %s %s %s %d %s %s %s %s %s\n",
                  &room.room_number, room.name, room.father_name, room.mother_name,
                  &room.age, room.permanent_address, room.contact_number, room.institution,
                  room.payment_status, room.booking_date);  // '\n' is inside the double quote so it reads the newline character

        if (room.room_number == room_number)
            {
            found = 1;
            printf("\n\n\t\tDeleting Room %d Information...\n");
            sleep(2);
            }
        else
        {

            fprintf(tempFile, "%d %s %s %s %d %s %s %s %s %s\n", room.room_number, room.name, room.father_name, room.mother_name, room.age, room.permanent_address, room.contact_number, room.institution, room.payment_status, room.booking_date);
        }
}

    if (!found)
    {
        printf("\n\t\tRoom number %d is not booked.\n\n", room_number);
    }
    else
    {
        printf("\n\t\tRoom %d information has been deleted.\n\n", room_number);
    }

    fclose(file);
    fclose(tempFile);

    /* Here, remove() and rename() are two functions used to remove the old 'Database.txt' and rename
             'TempDatabase.txt' to 'Database.txt'. The new 'Database.txt' contains updated information. */

    remove("Database.txt");
    rename("TempDatabase.txt", "Database.txt");
}

#endif // DEPART_H_INCLUDED
