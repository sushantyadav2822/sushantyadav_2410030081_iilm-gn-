#include <stdio.h>
#include <string.h>

int main() {
    char password[50];
    int length, hasUpper = 0, hasLower = 0, hasDigit = 0;

    printf("Enter your password: ");
    scanf("%s", password);

    length = strlen(password);

    for(int i = 0; i < length; i++) {
        if(password[i] >= 'A' && password[i] <= 'Z')
            hasUpper = 1;
        else if(password[i] >= 'a' && password[i] <= 'z')
            hasLower = 1;
        else if(password[i] >= '0' && password[i] <= '9')
            hasDigit = 1;
    }

    if(length >= 8 && hasUpper && hasLower && hasDigit)
        printf("Strong Password \n");
    else
        printf("Weak Password \n");

    return 0;
}