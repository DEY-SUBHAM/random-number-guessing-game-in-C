#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> 
#include <time.h>   

int main(){
    srand(time(NULL));

    int wing = rand() % 11;
    int a;
    int time = 1;
    bool e = true;

    printf("I'm thinking of a number between 0 and 10. Guess it: ");
    scanf("%d", &a);

    while (e) {
        if (a == wing) {
            printf("Congratulations! You guessed the number in %d attempt(s).\n", time);
            e = false;
        } else {
            if (wing > a) {
                printf("Your guess is too low.\n");
            } else { 
                printf("Your guess is too high.\n");
            }
            time += 1;
            printf("Enter your next guess: ");
            scanf("%d", &a);
        }
    }
    return 0;
}
