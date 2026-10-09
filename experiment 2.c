#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[100], token[100];
    int i = 0, j;

    printf("Enter code: ");
    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0') {
        if (isspace(s[i])) {
            i++;
        }
        else if (isalpha(s[i])) {
            j = 0;
            while (isalnum(s[i]))
                token[j++] = s[i++];
            token[j] = '\0';

            if (!strcmp(token, "int") ||
                !strcmp(token, "float") ||
                !strcmp(token, "return"))
                printf("%s - Keyword\n", token);
            else
                printf("%s - Identifier\n", token);
        }
        else if (isdigit(s[i])) {
            printf("%c - Number\n", s[i++]);
        }
        else {
            printf("%c - Operator/Punctuator\n", s[i++]);
        }
    }

    return 0;
}
