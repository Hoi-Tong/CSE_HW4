#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[101];
    printf("Enter a string (max 100 characters): ");

    /* TODO: read an input string until the new-line character is read. 
             remove the new line character and check if the string is a palindrome.
             your check should ignore all non alpha-numeric characters and case-sensitivity.
             print if the string is a palindrome or not.
             your print statements should match the sample output prints shown in the pdf. */

    scanf("%[^\n]", str);

    int left = 0;
    int right = 0;
    int i = 0;

    while (str[right] != '\0') {
        right++;
    }
    right--;       

    while (left < right) {
        while (left <= right && !isalnum(str[left])) {
            left++;
        }
        while (left < right && !isalnum(str[right])) {
            right--;
        }

        if (tolower(str[left]) != tolower(str[right])) {
            printf("The string is not a palindrome.\n");
            return 0;
        }
        left++;
        right--;
    }
    printf("The string is a palindrome.\n");
    return 0;

}
