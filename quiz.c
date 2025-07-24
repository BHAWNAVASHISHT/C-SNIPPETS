/*. Write a program to do the following:
 (a) To output the question “Who is the inventor of C?”
 (b) To accept an answer.
 (c) To print out “Good” and then stop, if answer is correct
 (d) To output the message ‘try again’, if answer is wrong
 (e) To display the correct answer when the answer is wrong even at the third attempt and stop*/
#include <stdio.h>
#include <string.h>

int main() {
    char answer[50];
    int attempts = 0;
    const char correctAnswer[] = "Dennis";

    while (attempts < 3) {
        printf("Who is the inventor of C?\n");
        printf("Your answer: ");
        scanf("%s", answer);  // Reads answer as a single word

        if (strcmp(answer, correctAnswer) == 0) {
            printf("Good\n");
            return 0;
        } else {
            attempts++;
            if (attempts < 3) {
                printf("Try again\n");
            }
        }
    }

    printf("The correct answer is: %s Ritchie\n", correctAnswer);
    return 0;
}
