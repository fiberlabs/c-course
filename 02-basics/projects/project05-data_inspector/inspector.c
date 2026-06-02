#include <stdio.h>

int main() 
{
    char input_character;
    int integer_number;

    printf("enter a char value (e.g. @, X, h, etc.): ");
    scanf(" %c", &input_character);

    printf("enter a integer value (e.g. 1, 2, 3, etc.): ");
    scanf("%d", &integer_number);

    printf("--- INSPECTION REPORT ---\n");
    printf("Symbol: %c -> ASCII code: %d\nNext Symbol: %c\n", input_character, input_character, input_character + 1);
    printf("\n");
    printf("Integer: %d\nHex View:0x%x\nLast Digit: %d\n", integer_number, integer_number, integer_number % 10);

    printf("\nStorage Check\nChar takes %lu byte(s)\nInt takes %lu byte(s)\n", sizeof(char), sizeof(int));
    return 0;
}

/*

┌──(fiberlabs㉿kali)-[~/VSCode/c-course/02-basics/projects/project05-data_inspector]
└─$ gcc inspector.c -Wall -Wextra -o inspector && ./inspector 
enter a char value (e.g. @, X, h, etc.): ^
enter a integer value (e.g. 1, 2, 3, etc.): 78
--- INSPECTION REPORT ---
Symbol: ^ -> ASCII code: 94
Next Symbol: _

Integer: 78
Hex View:4e
Last Digit: 8

Storage Check
Char takes 1 byte(s)
Int takes 4 byte(s)

┌──(fiberlabs㉿kali)-[
*/