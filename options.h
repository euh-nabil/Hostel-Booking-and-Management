#ifndef OPTIONS_H_INCLUDED
#define OPTIONS_H_INCLUDED

int options(void){ // options() will return 1 if the user picks login and succesfully logs in(see in the definition of login())
printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  "
       "Abhoya Students' Hostel  "
       "\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n"); // Added '\xdb' for stylistic purposes
printf("********************** W E L C O M E !!! **********************\n\n");
printf("\xdb\xdb\xdb\xdb 1. ADMIN LOGIN\n\n");
printf("\xdb\xdb\xdb\xdb 2. DETAILS ABOUT THE HOSTEL\n\n");
printf("\xdb\xdb\xdb\xdb 3. EXIT\n\n");

int choose;
int first_time_or_not = 0;
int status;

do{
if(first_time_or_not==0)
printf("CHOOSE AN OPTION : ");
else
printf("Invalid. CHOOSE AN OPTION : ");

status = scanf("%d", &choose);
first_time_or_not++;

} while(!(status==1 && (choose==1 || choose==2 || choose==3)));

system("cls");

FILE *fp;

switch(choose)
{
case 1:
    if(login()==1)
    return 1;
    break;
case 2:
    fp = fopen("Description.txt", "r");
    if(fp==NULL)
    printf("Error!\n");
    else
    {
        char des[500];
        while(!feof(fp))
        {
            fgets(des, 500, fp);
            printf("%s", des);
        }
    }
    fclose(fp);
    int pick;
    printf("\n1. Exit\n");
    printf("Choose an option : ");
    scanf("%d", &pick);
    if(pick==1)
    {   system("cls");
        printf("Thank you! :)\n");
        return -1;}
    break;
case 3:
        printf("Thank you! :)\n");
        return -1;
      break;
default:
      break;
}
}

#endif // OPTIONS_H_INCLUDED
