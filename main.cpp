#include <iostream>
#include <cmath>

using namespace std;

void sayHi(string userName, int userAge);

double cube(double num) {
    double result = num * num * num;
    return result;
    // return num * num * num;
    cout << "This will not be printed because it's after the return statement.";
}

int getMax(int num1, int num2, int num3) {
    int result;
    if (num1 >= num2 && num1 >= num3) {
        result = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        result = num2;
    } else {
        result = num3;
    }
    return result;
}

string getDayOfWeek(int dayNum) {
    string dayName;
    switch(dayNum) {
        case 0:
            dayName = "Pzt";
            break;
        case 1:
            dayName = "Sa";
            break;
        case 2:
            dayName = "Çrþ";
            break;
        case 3:
            dayName = "Prþ";
            break;
        case 4:
            dayName = "Cu";
            break;
        case 5:
            dayName = "Cts";
            break;
        case 6:
            dayName = "Pz";
            break;
        default:
            dayName = "Invalid day";
    }
    return dayName;
}

int power(int baseNum, int powNum) {
    int sonuc = 1;
    for (int k=0; k<powNum; k++) {
        sonuc = sonuc * baseNum;
    }
    return sonuc;
}

class Book {
    public:
        string title;
        string author;
        int pages;
};

class Kitap {
    public:
        Kitap(string title, string author, int pages) {                         //constructor function
            cout << "Creating " << title << " " << author << " " << pages << "..." << endl << endl;
        }
};

class KitapWithConstructor {
    public:
        string baslik;
        string yazar;
        int sayfaSay;
        KitapWithConstructor(string abaslik, string ayazar, int asayfaSay) {    //constructor function
            baslik = abaslik;
            yazar = ayazar;
            sayfaSay = asayfaSay;
        }
        KitapWithConstructor() {
            baslik = "baslik yok";
            yazar = "yazar yok";
            sayfaSay = 0;
        }

};

class Student {
    public:
        string studentName;
        string studentMajor;
        double studentGpa;
        Student(string astudentName, string astudentMajor, double astudentGpa) {
            studentName = astudentName;
            studentMajor = astudentMajor;
            studentGpa = astudentGpa;
        }
        bool hasHonors() {
            if (studentGpa > 3.5) {
                return true;
            }
            return false;
        }
};

class Movie {
    private:
        string movRating;
    public:
        string movTitle;
        string movDirector;
        Movie(string amovTitle, string amovDirector, string amovRating) {
            movTitle = amovTitle;
            movDirector = amovDirector;
            setRating(amovRating);
        }
        void setRating(string amovRating) {
            if (amovRating == "G" || amovRating == "PG" || amovRating == "PG-13" || amovRating == "R" || amovRating == "NR" ) {
                movRating = amovRating;
            } else {
                movRating = "NR";
            }
        }
        string getRating() {
            return movRating;
        }
};

class Chef {                            // SUPERCLASS
    public:
        void makeChicken() {
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad() {
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish() {
            cout << "The chef makes bbq ribs" << endl;
        }
};

class ItalianChef : public Chef {       // SUBCLASS
    public:
        void makePizza() {
            cout << "The Italian chef makes pizza" << endl;
        }
        void makeSpecialDish() {                        // OVERRIDING
            cout << "The Italian chef makes pasta" << endl;
        }
};

int main()
{
    /** C++ TUTORIAL **/

    cout << "Hello world!" << endl;
    cout << "\n";

    /** DRAWING A SHAPE **/

    cout << "   /|" << endl;
    cout << "  / |" << endl;
    cout << " /  |" << endl;
    cout << "/___|" << endl;
    cout << "\n";

    /** VARIABLES **/

    string characterName = "John";
    int characterAge;
    characterAge = 35;
    cout << "There once was a man named " << characterName << endl;
    cout << "He was " << characterAge << " years old" << endl;
    characterAge = 36;
    cout << "He liked the name " << characterName << endl;
    cout << "But did he not like being " << characterAge << endl;
    cout << "\n";

    /** DATA TYPES **/

    char grade = 'A';
    string phrase = "A bunch of characters";
    int age = 50;
    double gpa = 4.5;
    bool isFemale = false;

    cout << gpa << endl;
    cout << 4.5 << endl;
    cout << "\n";

    /** WORKING WITH STRINGS **/

    cout << "Serkan\n";
    cout << "Hello" << endl;
    cout << phrase << endl;
    cout << grade << " " << age << " " << isFemale << endl;
    cout << phrase.length() <<endl;
    cout << phrase[0] << endl;
    cout << phrase[2] << endl;
    phrase[0] = 'B';
    cout << phrase[0] << endl;
    cout << phrase << endl;
    cout << phrase.find("character", 0) << endl;
    cout << phrase.substr(2, 9);
    string phraseSub = phrase.substr(2, 9);
    cout << "\n" << phraseSub << endl;
    cout << "\n";

    /** WORKING WITH NUMBERS **/

    cout << 40 << " ";
    cout << 5+7 << " ";
    cout << 12/6 << " ";
    cout << 12%5 << " ";
    cout << 12/5 << " " << 12.0/5 << endl;
    cout << 4 + 5 * 10 << " " << (4 + 5) * 10 << endl;

    int wnum = 5;
    double dnum = 5.5;
    cout << wnum << " * " << dnum << " = " << wnum*dnum << endl;
    dnum++;
    cout << dnum << endl;
    wnum--;
    cout << wnum << endl;
    dnum += 1000;
    cout << dnum << endl;
    wnum *= 5;
    cout << dnum * wnum << endl;
    cout << dnum + wnum << endl;
    cout << dnum - wnum << endl;
    cout << dnum / wnum << endl;
    cout << wnum / dnum << endl;

    cout << pow(2,10) << endl;
    cout << sqrt(65536) << endl;
    cout << round(4.5) << endl;
    cout << ceil(4.1) << endl;
    cout << floor(4.9) << endl;
    cout << fmax(4,10) << endl;
    cout << fmin(4,10) << endl;

    /** GETTING USER INPUT **/

    int userAge;
    cout << "\n" << "Enter your age: ";
    cin >> userAge;     //can get int, double and char
    cout << "You are " << userAge << " years old" << endl;

    string userName;
    cout << "\n" << "Enter your name: ";
    cin.ignore();
    getline(cin, userName);
    cout << "Hello " << userName << "!\n";

    /** BUILDING A CALCULATOR **/

    int num1, num2;
    cout << "\nEnter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << num1 + num2;
    cout << endl << endl;

    /** BUILDING A MAD LIBS GAME **/

    string color, pluralNoun, celebrity;

    cout << "Enter a color: ";
    cin.ignore();
    getline(cin, color);
    cout << "Enter a plural noun: ";
    getline(cin, pluralNoun);
    cout << "Enter a celebrity: ";
    getline(cin, celebrity);

    cout << "\nRoses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl << endl;

    /** ARRAYS **/

    int luckyNums[] = {4, 8, 15, 16, 23, 42};
    cout << luckyNums[0] << endl;
    luckyNums[0] = 19;
    cout << luckyNums[0] << endl;
    luckyNums[10] = 100;
    cout << luckyNums[10] << endl;

    int luckierNums[2];
    luckierNums[0] = 3;
    luckierNums[1] = 7;
    luckierNums[2] = 9;
    cout << luckierNums[0] << luckierNums[1] << luckierNums[2] << endl << endl;

    /** FUNCTIONS **/

    cout << "Top" << endl;
    sayHi("Serkan", 35);
    sayHi("Acelya Eda", 5);
    sayHi("Aysun", 22);
    cout << "Bottom" << endl << endl;

    /** RETURN STATEMENT **/

    double answer = cube(5.0);
    cout << answer << endl << endl;
    // cout << cube(5.0) << endl;

    /** IF STATEMENTS **/

    bool isMale = true;
    bool isTall = true;

    if (isMale && isTall) {
        cout << "You are a tall male" << endl << endl;
    } else if (isMale && !isTall) {
        cout << "You are a short male" << endl << endl;
    } else if (!isMale && isTall) {
        cout << "You are tall but not male" << endl << endl;
    } else {
        cout << "You are not male and not tall" << endl << endl;
    }

    cout << "Which is greater, 5 or 42 or 43? : " << getMax(5, 42, 43) << endl;
    cout << "Which is greater, 5 or -42 or -43? : " << getMax(5, -42, -43) << endl << endl;

    /** BUILDING A BETTER CALCULATOR **/

    double numb1, numb2, result;
    char op;

    cout << "Calculator..." << endl;
    cout << "Enter first number: ";
    cin >> numb1;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> numb2;

    if (op == '+') {
        result = numb1 + numb2;
    } else if (op == '-') {
        result = numb1 - numb2;
    } else if (op == '*') {
        result = numb1 * numb2;
    } else if (op == '/') {
        result = numb1 / numb2;
    } else {
        cout << "Invalid operator" << endl << endl;
    }

    if (op == '+' || op == '-' || op == '*' || op == '/') {
        cout << numb1 << op << numb2 << " = " << result << endl << endl;
    }

    /** SWITCH STATEMENTS **/

    cout << "Today is " << getDayOfWeek(5) << endl << endl;

    /** WHILE LOOPS **/

    int index = 1;

    while (index < 5) {
        cout << index << endl;
        index++;
    }

    do {
        cout << index << endl;
        index--;
    } while (index > 0);

    cout << endl;

    /** BUILDING A GUESSING GAME **/

    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while(guess != secretNumber && !outOfGuesses) {
        if(guessCount < guessLimit) {
            cout << "Enter a number: ";
            cin >> guess;
            guessCount++;
        } else {
            outOfGuesses = true;
        }
    }
    if (outOfGuesses) {
        cout << "Out of guesses" << endl << endl;
    } else {
        cout << "You win!" << endl << endl;
    }

    /** FOR LOOPS **/

    int newIndex = 1;
    while(newIndex <= 5) {
        cout << newIndex << " ";
        newIndex++;
    }

    cout << endl;

    for (int i=1; i<=5; i++) {
        cout << i << " ";
    }

    cout << endl;

    int nums[] = {1, 2, 5, 7, 3};

    for (int j=0; j<5; j++) {
        cout << nums[j] << " ";
    }

    cout << endl << endl;

    /** EXPONENT FUNCTION **/

    cout << power(2, 5) << endl << endl;

    /** 2D ARRAYS & NESTED LOOPS **/

    int numberGrid[3][2] = {{1, 2}, {3, 4}, {5, 6}};

    cout << numberGrid[0][1] << endl;
    cout << numberGrid[2][0] << endl << endl;

    for (int l=0; l<3; l++) {
        for (int m=0; m<2; m++) {
            cout << numberGrid[l][m] << " ";
        }
        cout << endl;
    }

    cout << endl;

    /** COMMENTS **/

    // Single line comment
    /* Multi
    line
    comment
    */
    cout << "Comments are fun" << endl << endl; // This is a comment.
//  cout << "Comments are fun" << endl << endl; // This code is commented out.

    /** POINTERS **/

    int memAge = 35;
    double memGpa = 2.7;
    string memName = "Serkan";

    cout << "memAge variable memory address : " << &memAge << endl;
    cout << "memGpa variable memory address : " << &memGpa << endl;
    cout << "memName variable memory address : " << &memName << endl << endl;
    cout << "memAge variable assigned value : " << *&memAge << endl;
    cout << "memGpa variable assigned value : " << *&memGpa << endl;
    cout << "memName variable assigned value : " << *&memName << endl << endl;

    int *pmemAge = &memAge;
    double *pmemGpa = &memGpa;
    string *pmemName = &memName;

    cout << pmemAge << " " << pmemGpa << " " << pmemName << endl;
    cout << *pmemAge << " " << *pmemGpa << " " << *pmemName << endl << endl; //dereferencing pointer

    /** CLASSES AND OBJECTS **/

    Book book1;
    book1.title = "Harry Potter";
    book1.author = "J.K. Rowling";
    book1.pages = 500;

    cout << book1.title << " " << book1.author << " " << book1.pages << endl;

    Book book2;
    book2.title = "Lord of the Rings";
    book2.author = "J.R.R. Tolkien";
    book2.pages = 700;

    cout << book2.title << " " << book2.author << " " << book2.pages << endl;

    book2.pages = 750;

    cout << book2.title << " " << book2.author << " " << book2.pages << endl << endl;

    /** CONSTRUCTOR FUNCTIONS **/

    Kitap kitap1("Osmanli", "Halil Inalcik", 500);
    KitapWithConstructor kitap2("Why Nations Fail", "Daron Acemoglu", 750);
    KitapWithConstructor kitap3;

    cout << kitap2.baslik << " " << kitap2.yazar << " " << kitap2.sayfaSay << endl;
    cout << kitap3.baslik << " " << kitap3.yazar << " " << kitap3.sayfaSay << endl;
    cout << book1.title << " " << book2.title << " " << kitap2.baslik << " " << kitap3.baslik << endl << endl;
    // we cannot reach to kitap1 title "Osmanli" because we did not declare variables in Kitap class constructor

    /** OBJECT FUNCTIONS **/

    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Art", 3.6);

    cout << student1.hasHonors() << endl;
    cout << student2.hasHonors() << endl << endl;

    /** GETTERS AND SETTERS **/

    Movie avengers("The Avengers", "Joss Whedon", "PG-13");
//  avengers.movRating = "dog";         // movRating is private
    avengers.setRating("Dog");
//  cout << avengers.movRating;         // movRating is private
    cout << avengers.getRating() << endl;
    avengers.setRating("PG-13");
    cout << avengers.getRating() << endl << endl;

    /** INHERITANCE **/

    Chef chef;
    chef.makeChicken();

    ItalianChef italianChef;
    italianChef.makeChicken();
    italianChef.makePizza();

    chef.makeSpecialDish();
    italianChef.makeSpecialDish();

    return 0;
}

void sayHi(string userName, int userAge) {
    cout << "Hello " << userName << ", you are " << userAge << " years old" << endl;
}
