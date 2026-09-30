#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    char stack[100];
    int top = -1;
    int valid = 1;

    printf("Enter brackets: ");
    scanf("%s", s);

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            stack[++top] = s[i];
        }
        else {
            if (top == -1) {
                valid = 0;
                break;
            }

            char open = stack[top--];

            if ((s[i] == ')' && open != '(') ||
                (s[i] == ']' && open != '[') ||
                (s[i] == '}' && open != '{')) {
                valid = 0;
                break;
            }
        }
    }

    if (top != -1)
        valid = 0;

    if (valid)
        printf("Valid Parentheses\n");
    else
        printf("Invalid Parentheses\n");

    return 0;
}