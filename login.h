#ifndef LOGIN_H_INCLUDED
#define LOGIN_H_INCLUDED

int login(void) // login() will return 1 if the user successfully logs in
{
    char username[50];
    char password [50];
    char user_name[50], pass_word[50];
    FILE *admin_password;
    int i = 0; // This variable keeps track of the iteration of do-while loop.
               // If the inputs are incorrect, in the next iteration an invalid message is shown.
    int choice;
    do{
    printf("\n\t\t\xdb\xdb\xdb\xdb\xdb\xdb ADMIN LOGIN \xdb\xdb\xdb\xdb\xdb\xdb\n");
    printf("\t\t*************************\n\n");
    if(i==0)
    printf("\t\tEnter your username and password to log in : \n\n");
    else
    {
    printf("\t\tIncorrect username or password!\n");
    printf("\t\t1. Try again\n");
    printf("\t\t2. Exit\n");
    printf("\t\tChoose an option : ");
    scanf("%d", &choice);
    if(choice==2){
    system("cls");
    printf("Thank you! :)\n");
    return -1;}
    else if(choice == 1)
    printf("\n\t\tEnter your username and password to log in : \n\n");
    }
    admin_password = fopen("Admin Password.txt", "r");

    printf("\t\tUsername : ");
    scanf("%s", username);
    printf("\n\t\tPassword : ");
    scanf("%s", password);

    fscanf(admin_password, "%s", user_name);
    fscanf(admin_password, "%s", pass_word);

    fclose(admin_password);

    system("cls");
    i++;
      } while(strcmp(user_name, username)!=0 || strcmp(pass_word, password)!=0);

    if(strcmp(user_name, username)==0 && strcmp(pass_word, password)==0)
   {
    printf("\n\nLogin successful! MAIN MENU loading...\n");
    sleep(2);
    system("cls");
       return 1;
   }
}

#endif // LOGIN_H_INCLUDED
