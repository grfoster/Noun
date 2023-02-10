#include <stdio.h>
#include <string.h>

void pluralize(char *noun) {
    int length = strlen(noun);
    if (noun[length - 1] == 'y') {
        noun[length - 1] = 'i';
        noun[length] = 'e';
        noun[length + 1] = 's';
        noun[length + 2] = '\0';
    } else if (noun[length - 1] == 's' || noun[length - 1] == 'c' ||
               (noun[length - 2] == 'c' && noun[length - 1] == 'h') ||
               (noun[length - 2] == 's' && noun[length - 1] == 'h')) {
        noun[length] = 'e';
        noun[length + 1] = 's';
        noun[length + 2] = '\0';
    } else {
        noun[length] = 's';
        noun[length + 1] = '\0';
    }
}

int main() {
    char noun[100];

    printf("Enter a noun: ");
    scanf("%s", noun);

    printf("Singular form: %s\n", noun);
    pluralize(noun);
    printf("Plural form: %s\n", noun);

    return 0;
}
