#include<stdio.h>
#include<string.h>  // For using strlen()

int main() {
    char S[1001];
    
    // Read the string input
    scanf("%s", S);
    
    // Get the length of the string
    int length = strlen(S);
    
    // Flag to check if the string is a palindrome
    int isPalindrome = 1;  // Assume the string is a palindrome initially
    
    // Compare characters from the start and end
    for (int i = 0; i < length / 2; i++) {
        if (S[i] != S[length - 1 - i]) {
            isPalindrome = 0;  // Set to 0 if characters don't match
            break;
        }
    }
    
    // Print result based on whether it is a palindrome or not
    if (isPalindrome) {
        printf("YES\n");  // The string is a palindrome
    } else {
        printf("NO\n");   // The string is not a palindrome
    }

    return 0;
}
