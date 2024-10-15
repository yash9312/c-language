#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256

int main()
{
    // *****Q-1***** //

    // char str[100];
    // int start, end, isPalindrome = 1;

    // printf("Enter a string: ");
    // fgets(str, sizeof(str), stdin);

    // for (end = 0; str[end] != '\0' && str[end] != '\n'; end++)
    //     ;

    // end--;
    // for (start = 0; start < end; start++, end--)
    // {
    //     if (str[start] != str[end])
    //     {
    //         isPalindrome = 0;
    //         break;
    //     }
    // }

    // if (isPalindrome)
    // {
    //     printf("The string is a palindrome.\n");
    // }
    // else
    // {
    //     printf("The string is not a palindrome.\n");
    // }

    // *****Q-2***** //

    // char str[100];
    // int freq[MAX_CHAR] = {0};

    // printf("Enter a string: ");
    // fgets(str, sizeof(str), stdin);

    // for (int i = 0; str[i] != '\0'; i++) {
    //     if (str[i] != '\n') {
    //         freq[(unsigned char)str[i]]++;
    //     }
    // }

    // printf("Character Frequency:\n");
    // for (int i = 0; i < MAX_CHAR; i++) {
    //     if (freq[i] > 0) {
    //         printf("'%c' : %d\n", i, freq[i]);
    //     }
    // }

    return 0;
}