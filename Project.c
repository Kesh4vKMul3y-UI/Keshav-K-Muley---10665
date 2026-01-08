#include <stdio.h>

int main() {
    int secretNumber = 45;
    int maxAttempts = 5;
    int guess, i;
    int isGuessed = 0;

    for (i = 1; i <= maxAttempts; i++) {
        printf("Attempt %d: Enter your guess: ", i);

        scanf("%d", &guess);

        if (guess == secretNumber) {
            printf("Congratulations! You guessed the correct number.\n");
            isGuessed = 1;
            break;
        }

        else if (guess > secretNumber) {
            printf("Try smaller number.\n");
        }

        else {
            printf("Try larger number.\n");
        }
    }

    if (!isGuessed) {
        printf("Sorry! You have used all attempts. The correct number was %d.\n", secretNumber);
    }

    return 0;
}
