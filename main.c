#include <stdio.h>
#include <string.h>

int main() {
    char str[10];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str)) {
        printf("\"%s\" the number is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0;
}

