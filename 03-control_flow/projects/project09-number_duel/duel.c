#include <stdio.h>

int main() 
{
    int secret = 7;

    int user_guess;
    printf("guess the secret number (it's between 1 and 10): ");
    scanf("%d", &user_guess);

    if (user_guess < secret) {
        printf("wrong... try a bigger number\n");
    }
    else if (user_guess > secret) {
        printf("wrong... try a smaller number\n");
    }
    else {
        printf("you won!\n");
    }
    return 0;

}