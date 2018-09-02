#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

double cube(double num) {
    double result = num * num * num;
    return result;
}

void sayHi(char name[], int age); //prototyping
int max(int number1, int number2, int number3); //prototyping

struct Student{
    char studentName[50];
    char studentMajor[50];
    int studentAge;
    double studentGpa;
};

int main()
{

    /** C TUTORIAL **/

    /** PRINTF **/

    printf("..:: C TUTORIAL ::..");
    printf("\n\n");
    printf("Hello, world!\n");
    printf("\n");
    printf("   /|\n");
    printf("  / |\n");
    printf(" /  |\n");
    printf("/___|\n");
    printf("\n\n");

    /** VARIABLES **/

    char characterName[] = "Serkan";
    int characterAge = 35;

    printf("There once was a man named %s\n", characterName);
    printf("He was %d years old.\n", characterAge);

    characterAge = 36;

    printf("He really liked the name %s\n", characterName);
    printf("but did not like being %d.\n\n", characterAge);

    /** DATA TYPES **/

    int age = 40;
    double gpa = 3.7;
    char grade = 'A';
    char phrase[] = "learning C";

    printf("age %d, gpa %f, grade %c, phrase %s\n\n", age, gpa, grade, phrase);

    /** PRINTF ADVANCED **/

    printf("Hello\nWorld");
    printf("\n");
    printf("\"Hello World\"");
    printf("\n\n");
    printf("My favorite %s is %d and ", "number", 500);
    printf("my second favorite %s is %f", "num", 500.5);
    printf("\n");

    int favNum = 90;

    printf("My fav %s is %d", "num", favNum);
    printf("\n");

    char myChar = 'i';

    printf("%c is %d\n\n", myChar, favNum);

    /** WORKING WITH NUMBERS **/

    printf("%f", 8.9);
    printf("\n");
    printf("%f", 5 + 4.5);
    printf("\n");

    int num = 6;

    printf("%d", num);
    printf("\n");
    printf("%f\n", pow(2,5));
    printf("%f\n", sqrt(65536));
    printf("%f\n", ceil(3.2));
    printf("%f\n", floor(3.6));
    printf("%f\n", round(3.459));
    printf("%f\n", round(3.500000));

    /** COMMENTS **/

    /*
    printf("Comments are fun");
    */
    // TODO
    printf("\nComments are fun\n\n");

    /** CONSTANTS **/

    int num2 = 5;
    printf("%d\n", num2);
    num2 = 8;
    printf("%d\n", num2);
    const int NUM3 = 10;
    printf("%d\n", NUM3);

    /** GETTING USER INPUT **/

    int age2;
    printf("\nEnter your age:");
    scanf("%d", &age2);
    printf("You are %d years old\n", age2);

    double gpa2;
    printf("\nEnter your gpa:");
    scanf("%lf", &gpa2);
    printf("Your gpa is %f\n", gpa2);

    char grade2;
    printf("\nEnter your grade:");
    scanf(" %c", &grade2);
    printf("Your grade is %c\n", grade2);

    char name[20];
    printf("\nEnter your name:");
    scanf("%s", name);
    printf("Your name is %s\n", name);

    getchar();

    char nameAndSurname[40];
    printf("\nEnter your name and surname:");
    fgets(nameAndSurname, 40, stdin);
    printf("Your name and surname is %s", nameAndSurname);

    /** BASIC CALCULATOR IN C **/

    double num3;
    double num4;

    printf("\nEnter first number: ");
    scanf("%lf", &num3);

    printf("Enter second number: ");
    scanf("%lf", &num4);

    printf("Sum of two numbers is: %f\n", num3 + num4);

    /** BUILDING A MAD LIBS GAME **/

    char color[20];
    char pluralNoun[20];
    char celebrity[20];

    printf("\nEnter a color: ");
    scanf("%s", color);
    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity: ");
    getchar();
    fgets(celebrity, 20, stdin);

    printf("\nRoses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s\n", celebrity);

    /** ARRAYS **/

    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    luckyNumbers[1] = 200;
    printf("%d\n", luckyNumbers[1]);

    int anotherNumbers[10];
    anotherNumbers[0] = 90;
    anotherNumbers[1] = 80;
    printf("%d\n", anotherNumbers[1]);

    char anotherPhrase[] = "This is an array of chars\n";
    printf("%s\n", anotherPhrase);

    /** FUNCTIONS **/

    printf("Top\n");
    sayHi("Serkan", 35);
    sayHi("Eda", 5);
    sayHi("Aysun", 22);
    printf("Bottom\n");

    /** RETURN STATEMENT **/

    //Define the function before main() where it will be called.
    //Or use prototyping, define the func below but add << double cube(double num); >> statement above main
    //in order to make C know the function's data type before calling it. To avoid "conflicting types" error.
    printf("\nThree cubed is %f", cube(3.0));
    printf("\n\n");

    /** IF STATEMENTS **/

    printf("%d\n\n", max(14,110,11));

    /** BUILDING A BETTER CALCULATOR **/

    double numb1;
    double numb2;
    char op;

    printf("Calculator...");
    printf("Enter a number: ");
    scanf("%lf", &numb1);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter a number: ");
    scanf("%lf", &numb2);

    if (op == '+') {
        printf("%f", numb1 + numb2);
    } else if (op == '-') {
        printf("%f", numb1 - numb2);
    } else if (op == '*') {
        printf("%f", numb1 * numb2);
    } else if (op == '/') {
        printf("%f", numb1 / numb2);
    } else {
        printf("Invalid operator");
    }

    printf("\n\n");

    /** SWITCH STATEMENTS **/

    char newGrade = 'A';

    switch(newGrade) {
    case 'A':
        printf("You did great!");
        break;
    case 'B':
        printf("You did all right!");
        break;
    case 'C':
        printf("You did poorly");
        break;
    case 'D':
        printf("You did very bad");
        break;
    case 'F':
        printf("You failed!");
        break;
    default :
        printf("Invalid Grade");
    }

    printf("\n\n");

    /** STRUCTS **/

    struct Student student1;
    student1.studentAge = 22;
    student1.studentGpa = 3.2;
    strcpy(student1.studentName, "Jim");
    strcpy(student1.studentMajor, "Business");

    struct Student student2;
    student2.studentAge = 20;
    student2.studentGpa = 2.5;
    strcpy(student2.studentName, "Tom");
    strcpy(student2.studentMajor, "Economoics");

    printf("%f\n", student1.studentGpa);
    printf("%s\n", student1.studentName);
    printf("%f\n", student2.studentGpa);
    printf("%s\n", student2.studentName);
    printf("\n");

    /** WHILE LOOPS **/

    int index = 1;

    //first checks condition, then executes and loops
    while (index <= 5) {
        printf("%d\n", index);
        index = index + 1;  //index += 1; index++;
    }

    //first executes no matter what, then checks condition and loops
    do {
        printf("%d\n", index);
        index = index - 1;
    } while (index > 0);

    printf("\n");

    /** BUILDING A GUESSING GAME **/

    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    while(guess != secretNumber && outOfGuesses == 0) {
        if(guessCount < guessLimit) {
            printf("Enter a number: ");
            scanf("%d", &guess);
            guessCount++;
        } else {
            outOfGuesses = 1;
        }
    }
    if (outOfGuesses == 1) {
        printf("Out of guesses");
    } else {
        printf("You win!");
    }
    printf("\n");
    printf("\n");

    /** BUILDING A FOR LOOP **/

    int i;
    for (i=1; i<=5; i++) {
        printf("%d\n", i);
    }
    printf("\n");

    int luckyNumbers2[] = {4, 8, 15, 16, 23, 42};
    int j;
    for (j=0; j<6; j++) {
        printf("%d\n", luckyNumbers2[j]);
    }
    printf("\n");

    /** 2D ARRAYS & NESTED LOOPS **/

    int nums[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    printf("%d\n", nums[0][0]);     //1
    printf("%d\n", nums[1][1]);     //4
    printf("\n");

    int k, l;
    for (k=0; k<3; k++) {
        for (l=0; l<2; l++) {
            printf("%d,", nums[k][l]);
        }
        printf("\n");
    }

    printf("\n");

    /** MEMORY ADDRESSES **/

    int memAge = 30;
    double memGpa = 3.4;
    char memGrade = 'A';

    printf("age memory address: %p\ngpa memory address: %p\ngrade memory address: %p", &memAge, &memGpa, &memGrade);
    printf("\n");

    /** POINTERS **/

    // A pointer is just another type of data we can use in our program. It's a memory address
    int *pmemAge = &memAge; //this pointer variable is storing the memory address of the memAge variable
    double *pmemGpa = &memGpa;
    char *pmemGrade = &memGrade;

    /** DEREFERENCING POINTERS **/

    printf("\nage mem address: %p\n", pmemAge);
    printf("the value of the age variable at this memory address: %d\n", *pmemAge);
    printf("\ngpa mem address: %p\n", pmemGpa);
    printf("the value of the age variable at this memory address: %f\n", *pmemGpa);
    printf("\ngrade mem address: %p\n", pmemGrade);
    printf("the value of the age variable at this memory address: %c\n", *pmemGrade);
    printf("\n");

    /*
    int age = 30;          //declaring age variable, initializing with value of 30
    int *pAge = &age;      //assigning pAge pointer to age variable
    printf("%p", pAge);    //prints the memory location of the age variable via pAge pointer
    printf("%d", *pAge);   //dereferencing pAge pointer, prints the value of the variable at that memory address
    printf("%p", &age);    //prints memory address
    printf("%d", *&age);   //prints 30
    printf("%p", &*&age);  //prints memory address
    printf("%d", *&*&age); //prints 30
    and so on
    */

    /** WRITING FILES **/

    FILE *fpointer = fopen("employees.txt", "w"); //w writes and overwrites, a appends, r reads
    fprintf(fpointer, "SERKAN, OWNER\nMIKE, SALES\nPAM, PRODUCTION");

    fclose(fpointer);

    /** READING FILES **/

    char line[255];

    FILE *fpointer2 = fopen("employees.txt", "r");
    fgets(line, 255, fpointer2); //prints first line
    printf("%s", line);

    fclose(fpointer2);

    return 0;
}

void sayHi(char name[], int age) {
    printf("Hello %s, you are %d\n", name, age);
}

int max(int number1, int number2, int number3) {
    int sonuc;
    if (number1 >= number2 && number1 >= number3) {
        sonuc = number1;
    } else if (number2 >= number1 && number2 >= number3) {
        sonuc = number2;
    } else {
        sonuc = number3;
    }
    return sonuc;
}
