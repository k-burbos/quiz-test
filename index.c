#include <stdio.h>
#include <string.h>

// 1. Who painted the Mona Lisa? 
char* answer1 = "-"; // Write your answer here. 

// 2. Which country is the largest in the world?
char* answer2 = "-"; 

// 3. What is an eight-sided shape called?
char* answer3 = "-"; 

// 4. What is the word for a person who can write with both hands?
char* answer4 = "-";

// 5. How many degrees are in a circle?
char* answer5 = "-"; 

// 6. What is the largest bone in the human body?
char* answer6 = "-";

// 7. How many colors are in a rainbow?
char* answer7 = "-"; 

// 8. What is the national animal of Scotland? 
char* answer8 = "-";

// 9. How many letters are in the alphabet?
char* answer9 = "-";

// 10. Which is the most populous country?
char* answer10 = "-";



// The code begins here. 

struct quiz{ 
    char* question;
    char* answer;
    char* answerPossible; // If a question has two possible ways to type the answer.
};
int points; 

int main() {
    struct quiz question1; 
    question1.question = "1. Who painted the Mona Lisa?"; 
    question1.answer = "Leonardo de Vinci";

    struct quiz question2; 
    question2.question = "2. Which country is the largest in the world?"; 
    question2.answer = "Russia";

    struct quiz question3; 
    question3.question = "3. What is an eight-sided shape called?"; 
    question3.answer = "Octagon";

    struct quiz question4; 
    question4.question = "4. What is the word for a person who can write with both hands?"; 
    question4.answer = "Ambidextrous";

    struct quiz question5; 
    question5.question = "5. How many degrees are in a circle?"; 
    question5.answer = "360";

    struct quiz question6; 
    question6.question = "6. What is the largest bone in the human body?"; 
    question6.answer = "Femur";

    struct quiz question7; 
    question7.question = "7. How many colors are in a rainbow?"; 
    question7.answer = "7";
    question7.answerPossible = "Seven";

    struct quiz question8; 
    question8.question = "8. What is the national animal of Scotland?"; 
    question8.answer = "Unicorn";

    struct quiz question9; 
    question9.question = "9. How many letters are in the alphabet?"; 
    question9.answer = "26";
    question9.answerPossible = "Twenty six";
    
    struct quiz question10; 
    question10.question = "10. Which is the most populous country?"; 
    question10.answer = "India";

    printf("%s", question1.question); 
    if (strcmp(question1.answer, answer1)== 0) { // Compares if the answer in the code is the same as the one you typed.
        printf("\nYou answered: %s.", answer1);
        printf("\nThat is correct.");
        points++;
        printf("\n\nYou have %d point.", points);
    } else {
        printf("\nYou answered: %s.", answer1);
        printf("\nThat is incorrect.");
        printf("\n\nThe correct answer is %d.", question1.answer);
        points--;
        printf("\n\nYou have %d points.", points);
    }; 
     printf("\n\n%s", question2.question);
     if (strcmp(question2.answer, answer2)== 0) {
        printf("\nYou answered: %s.", answer2);
        printf("\nThat is correct.");
        points++;
        printf("\n\nYou have %d points.", points);
    } else {
        printf("\nYou answered: %s.", answer2);
        printf("\nThat is incorrect.");
        printf("\n\nThe correct answer is %d.", question2.answer);
        points--;
        printf("\n\nYou have %d points.", points);
    }; 
     printf("\n\n%s", question3.question);
     if (strcmp(question3.answer, answer3)== 0) {
        printf("\nYou answered: %s.", answer3);
        printf("\nThat is correct.");
        points++;
        printf("\n\nYou have %d points.", points);
    } else {
        printf("\nYou answered: %s.", answer3);
        printf("\nThat is incorrect.");
        printf("\n\nThe correct answer is %d.", question3.answer);
        points--;
        printf("\n\nYou have %d points.", points);
    }; 
    printf("\n\n%s", question4.question);
     if (strcmp(question4.answer, answer4)== 0) {
        printf("\nYou answered: %s.", answer4);
        printf("\nThat is correct.");
        points++;
        printf("\n\nYou have %d points.", points);
    } else {
        printf("\nYou answered: %s.", answer4);
        printf("\nThat is incorrect.");
        printf("\n\nThe correct answer is %d.", question4.answer);
        points--;
        printf("\n\nYou have %d points.", points);
    }; 
    printf("\n\n%s", question5.question);
     if (strcmp(question5.answer, answer5)== 0) {
        printf("\nYou answered: %s.", answer5);
        printf("\nThat is correct.");
        points++;
        printf("\n\nYou have %d points.", points);
    } else {
        printf("\nYou answered: %s.", answer5);
        printf("\nThat is incorrect.");
        printf("\n\nThe correct answer is %d.", question5.answer);
        points--;
        printf("\n\nYou have %d points.", points);
    }; 
    printf("\n\n%s", question6.question);
     if (strcmp(question6.answer, answer6)== 0) {
        printf("\nYou answered: %s.", answer6);
        printf("\nThat is correct.");
        points++;
        printf("\n\nYou have %d points.", points);
    } else {
        printf("\nYou answered: %s.", answer6);
        printf("\nThat is incorrect.");
        printf("\n\nThe correct answer is %d.", question6.answer);
        points--;
        printf("\n\nYou have %d points.", points);
    }; 
    printf("\n\n%s", question7.question);
     if (strcmp(question7.answer, answer7)== 0 || strcmp(question7.answerPossible, answer7) ==0) {
        printf("\nYou answered: %s.", answer7);
        printf("\nThat is correct.");
        points++;
        printf("\n\nYou have %d points.", points);
    } else {
        printf("\nYou answered: %s.", answer7);
        printf("\nThat is incorrect.");
        printf("\n\nThe correct answer is %d.", question7.answer);
        points--;
        printf("\n\nYou have %d points.", points);
    }; 
    printf("\n\n%s", question8.question);
     if (strcmp(question8.answer, answer8)== 0) {
        printf("\nYou answered: %s.", answer8);
        printf("\nThat is correct.");
        points++;
        printf("\n\nYou have %d points.", points);
    } else {
        printf("\nYou answered: %s.", answer8);
        printf("\nThat is incorrect.");
        printf("\n\nThe correct answer is %d.", question8.answer);
        points--;
        printf("\n\nYou have %d points.", points);
    }; 
    printf("\n\n%s", question9.question);
     if (strcmp(question9.answer, answer9)== 0 || strcmp(question9.answerPossible, answer9) ==0) {
        printf("\nYou answered: %s.", answer9);
        printf("\nThat is correct.");
        points++;
        printf("\n\nYou have %d points.", points);
    } else {
        printf("\nYou answered: %s.", answer9);
        printf("\nThat is incorrect.");
        printf("\n\nThe correct answer is %d.", question9.answer);
        points--;
        printf("\n\nYou have %d points.", points);
    }; 
    printf("\n\n%s", question10.question);
     if (strcmp(question10.answer, answer10)== 0) {
        printf("\nYou answered: %s.", answer10);
        printf("\nThat is correct.");
        points++;
        printf("\n\nYou have %d points.", points);
    } else {
        printf("\nYou answered: %s.", answer10);
        printf("\nThat is incorrect.");
        printf("\n\nThe correct answer is %d.", question10.answer);
        points--;
        printf("\n\nYou have %d points.", points);
    }; 

    int pointTotal = points; 
    printf("\n\nYou have a total of %d points!\n", points, pointTotal);

    switch (pointTotal)
    {
    case 1: 
    case 2: 
    case 3: 
    case 4: 
    case 5:
        printf("You did your best. That's enough.");
        break;
    case 6:
    case 7:
    case 8:
    case 9:
        printf("Great job!");
        break;   
    case 10: 
        printf("Amazing! You're perfect!"); 
        break;
    case -1: 
    case -2: 
    case -3: 
    case -4: 
    case -5:   
    case -6:
    case -7:
    case -8:
    case -9:  
    case -10:
        printf("Thanks for trying."); 
        break;
    default:
        printf("You managed to break the system.");
        break;
    }
    return 0; 
}