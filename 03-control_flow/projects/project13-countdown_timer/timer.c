#include <stdio.h>
#include <unistd.h>

int main() 
{
    int user_input;
    printf("enter a number: ");
    scanf("%d", &user_input);

    for (int i = user_input; i >=0; i--) {
        printf("second:\t%d\n", i);
        sleep(1);
    }

    printf("Blast Off!\n");

    return 0;
}

/*
fiberlabs@base:~/Coding/c-course/03-control_flow/projects/project13-countdown_timer$ gcc -Wall -Wextra timer.c -o timer && ./timer
enter a number: 20
second: 20
second: 19
second: 18
second: 17
second: 16
second: 15
second: 14
second: 13
second: 12
second: 11
second: 10
second: 9
second: 8
second: 7
second: 6
second: 5
second: 4
second: 3
second: 2
second: 1
second: 0
second: -1
second: -2
second: -3
second: -4
second: -5
second: -6
second: -7
second: -8
second: -9
second: -10
second: -11
second: -12
second: -13
^C
fiberlabs@base:~/Coding/c-course/03-control_flow/projects/project13-countdown_timer$ 
*/