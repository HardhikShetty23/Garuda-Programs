#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Function to generate RANDOM NUMBERS
int generate_random(int lower_limit, int upper_limit);

int main() {
    int count = 0;
    int random_num, User_ran_num;

    srand(time(0));

    printf("Welcome to the NUMBER GUESSING GAME! \n");
    printf("I have chosen a number between 1 and 100 can you guess it? \n");

    for(int i = 0; i < 5; i++ ) {
        random_num = generate_random(1, 100);
    }
    
    for( ; ; ) {
        count++; 

        printf("Enter your guess: ");
        scanf("%d", &User_ran_num);

        if(User_ran_num == random_num) {
            printf("Congratulations! You guessed the number in %d attempts. \n", count);
            break;
        }else if (User_ran_num > random_num) {
            printf("Too high! Try again. \n");
        }else if (User_ran_num < random_num) {
            printf("Too low! Try again. \n");
        }
        
    }

    return 0;
}

int generate_random(int lower_limit, int upper_limit) {
    return (rand() % (upper_limit - lower_limit + 1)) + lower_limit;
}