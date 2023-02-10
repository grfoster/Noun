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

    while (1) {
        printf("Enter a noun (or exit to quit): ");
        scanf("%s", noun);

        if (strcmp(noun, "exit") == 0) {
            break;
        }

        printf("Singular form: %s\n", noun);
        pluralize(noun);
        printf("Plural form: %s\n\n", noun);
    }

    return 0;
}
