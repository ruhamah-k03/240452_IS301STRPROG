#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Name: Ruhamah Kairat
   ID: 240452
   Date: 16 March 2025
   Algorithm: (Write a simple guessing program)
*/

// Function Prototypes
int getGuess();
void printSuccess();
void printHint(int guess, int target);
void printSorry(int target);

int main() {
    int target, guess, i;
    int won = 0;

    // Seed random number and generate between 1 and 20
    srand(time(0));
    target = (rand() % 20) + 1;

    printf("I am thinking of a number between 1 and 20.\n");

    for (i = 0; i < 5; i++) {
        guess = getGuess();

        if (guess == target) {
            printSuccess();
            won = 1;
            break; // Terminate immediately after correct guess
        } else {
            printHint(guess, target);
        }
    }

    if (!won) {
        printSorry(target);
    }

    return 0;
}

// Implement functions...
int getGuess() {
    int g;
    printf("Can you guess what it is? ");
    scanf("%d", &g);
    return g;
}

void printSuccess() {
    printf("Congratulations! You did it.\n");
}

void printHint(int guess, int target) {
    if (guess < target)
        printf("Your guess is low. Try again: \n");
    else
        printf("Your guess is high. Try again: \n");
}

void printSorry(int target) {
    printf("Sorry. The number was %d.\nYou should have gotten it by now. Better luck next time.\n", target);
}