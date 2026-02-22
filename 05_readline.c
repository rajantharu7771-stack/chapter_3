#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char text[100];
    int txtno = 0, spcno = 0;
    int i = 0;

    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    // Remove newline
    text[strcspn(text, "\n")] = '\0';

    // Count characters and spaces
    while(text[i] != '\0'){
        if(text[i] == ' ')
            spcno++;
        else
            txtno++;
        i++;
    }

    printf("\n------ FORMATTED OUTPUT ------\n");

    // Original
    printf("Original Text  : %s\n", text);

    // Uppercase
    printf("Uppercase      : ");
    for(i = 0; text[i] != '\0'; i++){
        printf("%c", toupper(text[i]));
    }

    // Lowercase
    printf("\nLowercase      : ");
    for(i = 0; text[i] != '\0'; i++){
        printf("%c", tolower(text[i]));
    }

    // Words in new line
    printf("\n\nWords separated:\n");
    for(i = 0; text[i] != '\0'; i++){
        if(text[i] == ' ')
            printf("\n");
        else
            printf("%c", text[i]);
    }

    printf("\n\nTotal characters (without spaces): %d", txtno);
    printf("\nTotal spaces: %d\n", spcno);

    return 0;
}
