#ifndef CHANGE_PASS_H_INCLUDED
#define CHANGE_PASS_H_INCLUDED

void change_pass(void) {

    printf("\n\n\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb CHANGE ADMIN PASSWORD"
           " \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");

    char username[100];
    char old_password[100];
    char new_password[100];

    FILE *file = fopen("Admin Password.txt", "r");
    fscanf(file, "%s %s", username, old_password);
    fclose(file);

    printf("\n\t\tOld Password: %s\n", old_password);
    printf("\n\t\tEnter the new password: ");
    scanf("%s", new_password);

    FILE *temp_file = fopen("temp_admin_password.txt", "w");
    fprintf(temp_file, "%s %s", username, new_password);
    fclose(temp_file);

    remove("Admin Password.txt");
    rename("temp_admin_password.txt", "Admin Password.txt");

    printf("\n\n\t\tPassword changed successfully!\n\n");
}

#endif // CHANGE_PASS_H_INCLUDED
