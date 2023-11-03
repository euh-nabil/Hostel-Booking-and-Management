#ifndef SPLASH_H_INCLUDED
#define SPLASH_H_INCLUDED

void splash_screen(void)    // This function is created to read the ASCII image from Splash.txt and display it
{
    FILE *splash = fopen("Splash.txt", "r");

    if (splash == NULL){
        printf("Error!\n");
    return -1;}

    char art[10000];
    while(!feof(splash))
    {
        fgets(art, 10000, splash);
        printf("%s", art);
    }
    fclose(splash);
}

#endif // SPLASH_H_INCLUDED
