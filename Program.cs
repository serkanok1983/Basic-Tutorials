using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloWorld
{
    class Program
    {
        static void Main(string[] args)
        {
            /** DRAWING A SHAPE **/
            Console.WriteLine("Hello, world!");
            Console.WriteLine("");
            Console.WriteLine("   /|");
            Console.WriteLine("  / |");
            Console.WriteLine(" /  |");
            Console.WriteLine("/___|");
            Console.WriteLine("");

            /** VARIABLES **/
            string characterName = "John";
            int characterAge;
            characterAge = 35;
            Console.WriteLine("There was once a man named " + characterName);
            Console.WriteLine("He was " + characterAge + " years old");
            Console.WriteLine("He really liked the name " + characterName);
            characterAge = 36;
            Console.WriteLine("But he didn't like being " + characterAge);
            Console.WriteLine("");

            /** DATA TYPES **/
            string phrase = "Merhaba";
            char grade = 'A';
            int age = 30;
            long bigAge = 100;
            float lessPreciseGpa = 2.7F;
            double gpa = 2.7;
            decimal mostPreciseGpa = 2.7M;
            bool isFemale = true;
            Console.WriteLine(phrase);
            Console.WriteLine(grade);
            Console.WriteLine(age);
            Console.WriteLine(bigAge);
            Console.WriteLine(lessPreciseGpa);
            Console.WriteLine(gpa);
            Console.WriteLine(mostPreciseGpa);
            Console.WriteLine(isFemale);      // isMale here is a variable, its value is true
            Console.WriteLine("Hello\n");   // Hello here is a literal, a constant

            /** WORKING WITH STRINGS **/
            Console.WriteLine("Merhaba,\nnasılsınız?");
            Console.WriteLine("Merhaba,\"nasılsınız?");
            string firstName = "Serkan";
            Console.WriteLine(phrase + " " + firstName);
            phrase = phrase + "lar";
            Console.WriteLine(phrase);
            Console.WriteLine(phrase.Length);
            Console.WriteLine(phrase.ToUpper());
            Console.WriteLine(phrase.ToLower());
            Console.WriteLine(phrase.Contains("erh"));
            Console.WriteLine(phrase.Substring(5, 2));
            Console.WriteLine(phrase.StartsWith("M"));
            Console.WriteLine(phrase[0]);
            Console.WriteLine(phrase);
            Console.WriteLine(phrase.IndexOf("aba"));
            Console.WriteLine("");

            /** WORKING WITH NUMBERS **/
            Console.WriteLine(-5.783 * 273 / 2.2);
            Console.WriteLine(7 + 2 * 10);
            Console.WriteLine((7 + 2) * 10);
            Console.WriteLine(5 % 2);
            Console.WriteLine("5 = " + 5/2 + " * 2 + " + 5%2);
            Console.WriteLine(5 / 2);
            Console.WriteLine(5.0 / 2);
            Console.WriteLine(5 / 2.0);
            Console.WriteLine(5.0 / 2.0);
            int num = 6;
            Console.WriteLine(num);
            num++;
            Console.WriteLine(num);
            num--;
            Console.WriteLine(num);
            Console.WriteLine(Math.Floor(2.9));
            Console.WriteLine(Math.Ceiling(2.1));
            Console.WriteLine(Math.Round(2.5));
            Console.WriteLine(Math.Abs(-43));
            Console.WriteLine(Math.Pow(2, 5));
            Console.WriteLine(Math.Sqrt(65536));
            Console.WriteLine(Math.Max(4, -4));
            Console.WriteLine(Math.Min(4, -4));
            Console.WriteLine(Math.Sin(1.5707963267949));
            Console.WriteLine("");

            /** GETTING USER INPUT **/
            Console.Write("Enter your name: ");
            string name = Console.ReadLine();
            Console.Write("Enter your age: ");
            string inpAge = Console.ReadLine();
            Console.WriteLine("Hello " + name + " you are " + inpAge);
            Console.WriteLine("");

            /** BUILDING A CALCULATOR **/
            Console.WriteLine("43" + "56");
            Console.WriteLine(43 + 56);
            int numb = Convert.ToInt32("45");
            Console.WriteLine(numb * numb);
            Console.Write("Enter a number: ");
            double num1 = Convert.ToDouble(Console.ReadLine());
            Console.Write("Enter another number: ");
            double num2 = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine(num1 + num2);
            Console.WriteLine("");

            /** BUILDING A MAD LIB **/
            string color, pluralNoun, celebrity;
            Console.Write("Enter a color: ");
            color = Console.ReadLine();
            Console.Write("Enter a plural noun: ");
            pluralNoun = Console.ReadLine();
            Console.Write("Enter a celebrity: ");
            celebrity = Console.ReadLine();

            Console.WriteLine("Roses are " + color);
            Console.WriteLine(pluralNoun + " are blue");
            Console.WriteLine("I love " + celebrity);
            Console.WriteLine("");

            /** ARRAYS **/
            int[] luckyNumbers = {4, 8, 15, 16, 23, 42};
            Console.WriteLine(luckyNumbers[2]);
            luckyNumbers[1] = 900;
            Console.WriteLine(luckyNumbers[1]);
            Console.WriteLine("");

            string[] friends = new string[5];
            friends[0] = "Jim";
            friends[1] = "Kelly";

            /** METHODS **/
            Console.WriteLine("Top");
            SayHi("Serkan", 35);
            SayHi("Açelya Eda", 5);
            Console.WriteLine("Bottom");
            Console.WriteLine("");

            /** RETURN STATEMENT **/
            Console.WriteLine(Cube(27));
            Console.WriteLine(Cube(2));
            int cubedNumber = Cube(5);
            Console.WriteLine(cubedNumber);
            Console.WriteLine("");

            /** IF STATEMENTS **/
            bool isMale = true;
            bool isTall = true;
            if (isMale && isTall)
            {
                Console.WriteLine("You are a tall male");
            } else if (isMale && !isTall)
            {
                Console.WriteLine("You are a short male");
            } else if (!isMale && isTall)
            {
                Console.WriteLine("You are tall but not male");
            } else
            {
                Console.WriteLine("You are not male and not tall");
            }
            Console.WriteLine("");

            Console.WriteLine(GetMax(5, 42, 43));
            Console.WriteLine(GetMax(5, -42, -43));
            Console.WriteLine("");

            /** BUILDING A BETTER CALCULATOR **/
            Console.Write("Enter a number: ");
            double number1 = Convert.ToDouble(Console.ReadLine());
            Console.Write("Enter operator: ");
            string op = Console.ReadLine();
            Console.Write("Enter a number: ");
            double number2 = Convert.ToDouble(Console.ReadLine());

            if (op == "+")
            {
                Console.WriteLine(Convert.ToString(number1) + " " + op + " " + Convert.ToString(number2) + " = " + (number1+number2));
            } else if (op == "-")
            {
                Console.WriteLine(Convert.ToString(number1) + " " + op + " " + Convert.ToString(number2) + " = " + (number1-number2));
            } else if (op == "*")
            {
                Console.WriteLine(Convert.ToString(number1) + " " + op + " " + Convert.ToString(number2) + " = " + (number1*number2));
            } else if (op == "/")
            {
                Console.WriteLine(Convert.ToString(number1) + " " + op + " " + Convert.ToString(number2) + " = " + (number1/number2));
            } else
            {
                Console.WriteLine("Invalid operator");
            }
            Console.WriteLine("");

            /** SWITCH STATEMENT **/
            Console.WriteLine(GetDayOfWeek(5));
            Console.WriteLine(GetDayOfWeek(1));
            Console.WriteLine("");

            /** WHILE LOOPS **/
            int index = 1;
            while (index <= 5)
            {
                Console.WriteLine("Loop " + index);
                index++;
            }

            index = 6;
            do
            {
                Console.WriteLine("Loop " + index);
                index++;
            } while (index <= 5);

            Console.WriteLine("");

            /** BUILDING A GUESSING GAME **/
            string secretWord = "istanbul";
            string guess = "";
            int guessesMade = 0;
            int guessLimit = 3;
            bool outOfGuesses = false;

            while (guess != secretWord && !outOfGuesses)
            {
                if (guessesMade < guessLimit)
                {
                    Console.Write("Enter guess: ");
                    guess = Console.ReadLine();
                    guessesMade++;
                } else
                {
                    outOfGuesses = true;
                }
                
            }

            if (outOfGuesses)
            {
                Console.WriteLine("You lose!");
            } else
            {
                Console.WriteLine("You win!");
            }

            Console.WriteLine("");

            /** FOR LOOPS **/
            int i = 1;
            while (i <= 5)
            {
                Console.WriteLine(i);
                i++;
            }
            Console.WriteLine("");

            for (int j=1; j<=5; j++)
            {
                Console.WriteLine(j);
            }
            Console.WriteLine("");

            for (int k=0; k<luckyNumbers.Length; k++)
            {
                Console.WriteLine(luckyNumbers[k]);
            }
            Console.WriteLine("");

            /** BUILDING AN EXPONENT METHOD **/
            Console.WriteLine(Power(2, 5));
            Console.WriteLine(Power(111, 100));
            Console.WriteLine("");

            /** 2D ARRAYS **/
            int[,] numberGrid = {
                {1,2},
                {3,4},
                {5,6}
            };

            Console.WriteLine(numberGrid[0, 0]);
            Console.WriteLine("");

            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 2; k++)
                {
                    Console.WriteLine(numberGrid[j, k]);
                }
                Console.WriteLine("");
            }
            Console.WriteLine("");

            int[,] myArray = new int[2, 3];

            /** COMMENTS **/
            Console.WriteLine("Comments are fun");      //comment on the same line with code
            //Console.WriteLine("Comments are fun");    //commented out code will not be executed
            // single-line comment

            /* multi-
             * line
             * comment
            */
            Console.WriteLine("");

            /** EXCEPTION HANDLING **/
            try
            {
                Console.Write("Enter a number: ");
                int numb1 = Convert.ToInt32(Console.ReadLine());
                Console.Write("Enter another number: ");
                int numb2 = Convert.ToInt32(Console.ReadLine());
                Console.WriteLine(numb1 / numb2);
            }
            catch (DivideByZeroException e)             // catch(Exception e) { Console.WriteLine(e.Message); }
            {
                Console.WriteLine(e.Message);
            }
            catch (FormatException e)
            {
                Console.WriteLine(e.Message);
            }
            finally
            {
                Console.WriteLine("");
            }

            /** CLASSES AND OBJECTS **/
            /*
            Book book1 = new Book();
            book1.author = "Harry Potter";
            book1.title = "JK Rowling";
            book1.pages = 400;
            Console.WriteLine(book1.title + " " + book1.author + " " + book1.pages + " pages");
            Book book2 = new Book();
            book2.author = "Lord of the Rings";
            book2.title = "JRR Tolkien";
            book2.pages = 700;
            Console.WriteLine(book2.title + " " + book2.author + " " + book2.pages + " pages");
            Console.WriteLine("");
            */

            /** CONSTRUCTORS **/
            Book book1 = new Book("Harry Potter", "JK Rowling", 400);
            Book book2 = new Book("Lord of the Rings", "JRR Tolkien", 700);
            Book book3 = new Book();
            Console.WriteLine(book1.title + " " + book1.author + " " + book1.pages + " pages");
            Console.WriteLine(book2.title + " " + book2.author + " " + book2.pages + " pages");
            book2.title = "Hobbit";
            book2.pages = 500;
            Console.WriteLine(book2.title + " " + book2.author + " " + book2.pages + " pages");
            Console.WriteLine("");

            /** OBJECT METHODS **/
            Student student1 = new Student("Jim", "Business", 2.8);
            Student student2 = new Student("Pam", "Art", 3.6);

            Console.WriteLine(student1.HasHonors());
            Console.WriteLine(student2.HasHonors());
            Console.WriteLine("");

            /** GETTERS AND SETTERS **/
            Movie avengers = new Movie("The Avengers", "Joss Whedon", "PG-13");
            Movie shrek = new Movie("Shrek", "Adam Adamson", "PG");
            Console.WriteLine(avengers.Rating);
            avengers.Rating = "dog";
            Console.WriteLine(avengers.Rating);
            Console.WriteLine("");

            /** STATIC CLASS ATTRIBUTES **/
            Console.WriteLine(Song.songCount);
            Song holiday = new Song("Holiday", "Green Day", 200);
            Console.WriteLine(Song.songCount);
            Song kashmir = new Song("Kashmir", "Led Zeppelin", 150);
            Console.WriteLine(Song.songCount);                          // static variable of class. same value for every object created. info not specific to object, info specific to class itself, class attribute, accessible through class (Song.songCount)
            Console.WriteLine(holiday.title + " " + holiday.artist);    // non-static variables. differs value for each object created. info specific to object, object (an instance of class) attribute, accessible through object (holiday.artist)
            Console.WriteLine(kashmir.title + " " + kashmir.artist);    // non-static variables. differs value for each object created. info specific to object, object (an instance of class) attribute, accessible through object (kashmir.artist)
            // Objects could return class's static variable via a getter method (if created)
            Console.WriteLine(kashmir.GetSongCount() + " = " + holiday.GetSongCount());
            Console.WriteLine("");

            /** STATIC METHODS & CLASSES **/
            // Static methods is basicly just a method that belongs to the class itself so a lot of times when we create methods inside our c# classes usually those methods will be used on objects so we can have an object of a specific class and then that object can use that methods to
            // do different things. The static method in a class is a method that belongs to the actual class which means you don't have to create an object instance of that class in order to use it and access it and these could be extremely useful in a lot of circumstances you wanna create
            // classes that have static methods inside of them.

            Console.WriteLine(Math.Sqrt(144));                          // Sqrt is a static method in Math class, we didn't have to create an object to access it

            UsefulTools.SayHi("Serkan");                                // Call method without creating an object of UsefulTools object

            // Math myMath = new Math();                                // You can't create an instance of a static class

            UsefulTools tools = new UsefulTools();                      // UsefulTools class is not static
            Console.WriteLine("");

            /** INHERITANCE **/
            Chef chef = new Chef();                                     // SUPERCLASS
            chef.MakeChicken();
            ItalianChef italianChef = new ItalianChef();                // SUBCLASS
            italianChef.MakeChicken();
            italianChef.MakePasta();

            chef.MakeSpecialDish();
            italianChef.MakeSpecialDish();
            
            Console.ReadLine();
        }

        static void SayHi(string name, int age)
        {
            Console.WriteLine("Hello " + name + " you are " + age);
        }

        static int Cube(int num)
        {
            int result;
            result = num * num * num;
            return result;
            // return num * num * num;
        }

        static int GetMax(int num1, int num2, int num3)
        {
            int result;
            if (num1 >= num2 && num1 >= num3)
            {
                result = num1;
            } else if (num2 >= num1 && num2 >= num3)
            {
                result = num2;
            } else
            {
                result = num3;
            }
            return result;
        }

        static string GetDayOfWeek(int dayNum)
        {
            string dayName;
            switch(dayNum)
            {
                case 0:
                    dayName = "Sun";
                    break;
                case 1:
                    dayName = "Mon";
                    break;
                case 2:
                    dayName = "Tue";
                    break;
                case 3:
                    dayName = "Wed";
                    break;
                case 4:
                    dayName = "Thu";
                    break;
                case 5:
                    dayName = "Fri";
                    break;
                case 6:
                    dayName = "Sat";
                    break;
                default:
                    dayName = "Invalid day";
                    break;              
            }
            return dayName;
        }

        static int Power(int baseNum, int exponent)
        {
            int product = 1;
            for (int k = 0; k < exponent; k++)
            {
                product *= baseNum;
            }
            return product;
        }
    }
}
