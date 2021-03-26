#include <stdio.h>
#include <string.h>

/* This snippet presented a simple example of a buffer Overflow attack
   but now it's hopefully resolved */

int main(void) {
    char buff[__SIZE_MAX__];  // mo more buffer overflow now hehehe
    int pass = 0;

    printf("\n Enter the password : \n");

    gets(buff);

    if (strcmp(buff, "thegeekstuff")) {
        printf("\n Wrong Password. \n");
    } else {
        printf("\n Correct Password.\n");
        pass = 1;
    }

    if (pass) {  // do somelhing priviledged stuff
        printf("\n Root privileges given to the user.\n");
    }

  return 0;
}
