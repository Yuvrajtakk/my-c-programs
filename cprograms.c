#include <stdio.h>
#include <math.h>
// decleration for function program
// write two function-to print "hello"
void printhello();
// write two function- one to print "hello" & second to print "good bye"
void question();
// write a function that prints NAMASTE if user is indian & BONJOUR if the user is french.
void namaste();
void bonjour();
// take 2 values form user then add and print the value
int sum(int a, int b);
// print table
void printtable(int n);
// price calculate
void calculateprice(float value);
// calculate square
double calculatesquare(double n);
// practice Qs - write functions to calculate area of square, a circle & a rectangle
float area_circle(float m);
float area_rectangle(float a, float b);
// recursion function
void printHW(int count);
int fact(int n);
float convertTemp(float celsius);
int calpercantage(int science, int math, int sanskrit);
int fibonacci(int n);
int main()
{
    // ✨CHAPTER 2✨
    // #include<stdio.h>-preprocessor directive , angular brackets- <>
    //  ()-parenthesis
    /*printf("allo lelo");

    // chapter 1
    //  variables- name of memory location which stores some data
    int num = 23;
    char star = '*';
    float pi = 3.14;
    int num_1 = 23;
    num_1 = 25;
    printf("%d", num_1);

    // data types- int,char,float

    // constants - values dont change (fixed)

    // keywords - reserved wods (32)

    // comments- not part of program

    printf("ullu da ptha\n"); // output
    printf("ullu da ptha\n");
    printf("ullu da ptha\n");

    // output -  case
    // case 1 integers

    int age = 20;
    printf("age is %d\n", age);

    // case 2 real num
    printf("pi is %f\n", pi);

    // case 3 character
    printf("star is %c\n", star);

    // input
    printf("tell me your score\n");
    int score;
    scanf("%d", &score);
    // ampersand-&
    printf("score is : %d", score);

    int a, b;

    printf("enter a");
    scanf("%d", &a);

    printf("enter b");
    scanf("%d", &b);

    int sum = a + b;
    printf("sum is :%d", sum);
    printf("sum is :%d", a + b); // same output

    // compilation- computer program that translate c code into machine code
    //  hello.c -> c compiler -> a.exe(windows)/a.out(linux & mac)

    // practice question

    // 1. WAP to cal. ar of sqr.
    int lenght, breath;
    printf("enter the lenght :-");
    scanf("%d", &lenght);

    printf("enter the breath :-");
    scanf("%d", &breath); // i made a mistake here when i was writing this code which is i forgot to put ampersand-& so next i will kepp this in my mind

    printf("the area of square is :-%d", lenght * breath);

    // 2. WAP to cal. area of a circle
    // area = pi r*r
    float pie = 3.14, radius;
    printf("enter the radius\n");
    scanf("%f", &radius);

    printf("The area of circle is :-%f", pie * radius * radius);

    // ✨CHAPTER 2✨

    // instructions- these are statements in a program
    // type ->
    //.1 type decleration inst- declare variable before using it
    //.2 arithmetic inst
    //.3 control inst

    //.1
    int a = 22;
    int b = a;
    int c = b * 6;
    int d = 1, e;

    int x, y, z;
    x = y = z = 4; // valid, declare and then use

    // int m=n=o=4; invalid, use & declare

    // .2 arithmatic

    // a+b; a,b operands , + operator
    int a, b, c;
    a = b + c;
    a = b * c;
    a = b / c;
    // invalid - b+c=a; a=bc; a=b^c (note- pow(x,y)for x to the power y)

    int d, e;
    printf("enter the base\n");
    scanf("%d", &d);
    printf("enter the power\n");
    scanf("%d", &e);
    int power = pow(d, e);
    printf("the answer is :- %d", power);

    // modular opr %
    printf("%d\n", 16 % 10);
    printf("%d", -16 % 10);

    // type conversion

    // int op int -> int
    printf("%d\n", 2 / 3);
    // int op float -> float
    printf("%f\n", 2 / 3.0);
    // float op float -> float
    printf("%f\n", 2.0 / 4.0);

    int a = 3.13;
    printf("%d", a); // invalid

    int b = (int)1.9999;
    printf("%d", b);

    // operator precedence- *,/,%  ->  +,-  -> =
    int c = 4 + 9 * 10;
    printf("%d\n", c);

    // associativity (for same precedence)
    // left to right

    int d = 4 * 3 / 6 * 2;
    printf("%d", d);

    int e = 5 * (4 / 2) * 3;
    printf("%d\n", e);

    int f = 5 + 2 / 2 * 3;
    printf("%d", f);

    // .3 - control instructions
    // used to determine flow of program
    // 3.1- sequence control- line 1- 160 is seq control
    // 3.2- decision control
    // 3.3- loop control
    // 3.4- case control

    // OPERATORS
    // a. arithmatic - +,-,*,/,% etc
    // b. relational- ==, >,<, >= ,<=, !=
    // c. logical
    // d. bitwise
    // e. assignment
    // f. ternary

    // b. relational- ==, >,<, >= ,<=, !=
    printf("%d\n", 4 == 4); // except 0 = true
    printf("%d\n", 4 > 5);  // 0 = false
    printf("%d\n", 4 <= 5);
    printf("%d\n", 4 != 5);

    // c. logical operators

    // && - AND - both c/d should true
    printf("%d", 4 > 2 && 5 < 6); // true
    printf("%d", 4 < 2 && 5 < 6); // false
                                  // || - OR - one of them should true
    printf("%d", 4 > 2 || 5 > 6); // t
    printf("%d", 4 < 2 || 5 > 6); // f
    // !  - NOT
    printf("%d", !4 > 2); // false

    // operator precedence
    // 1.!  2.*%/   3.+-  4.< <= > >=  5.==  6.&&  7.||  8.=

    // e. assignment
    int a = 1, b = 4;
    a = a + b;
    printf("%d", a); // output 5
    // or we can also write
    int A = 1, B = 4;
    A += B;
    printf("%d", A); // output 5

    int c = 2, d = 5;
    c = c * d;
    printf("%d", c);

    int C = 2, D = 5;
    C *= D;
    printf("%d", C);

    // asignment operators are - =, +=, -=, /=, %=

    // practice
    // WAP to check if a number is divisible by 2 or not
    int a;
    printf("tell me your number");
    scanf("%d", &a);
    int t = a % 2;
    printf("%d", t == 0); // 0 not divisible, 1 divisible

    // WAP to check if a number is even or odd
    int a;
    printf("tell me your number");
    scanf("%d", &a);
    int t = a % 2;
    printf("%d", t == 0); // 0 even, 1 odd

    // Print 1(true) or O(false) for following statements :
    // a. if it's sunday & it's snowing -> true
    // b. if it's monday or it's raining -> true
    int is_sunday = 1;
    int is_snowing = 1;
    int is_monday = 1;
    int is_raining = 1;

    printf("%d\n", is_sunday && is_snowing);
    printf("%d\n", is_monday && is_raining);

    // c. if a number is greater than 9& less than 100 true(2 diigit num)
    int n;
    printf("enter the number");
    scanf("%d", &n);
    printf("%d", n > 9 && n < 100);

    // a. Write a program to print the average of 3 numbers.
    float a, b, c;
    printf("enter the three numbers");
    scanf("%f%f%f", &a, &b, &c);
    printf("%f\n", (a + b + c) / 3);

    // b. Write a program to check if given character is digit or not.

    char ch;
    printf("enter your character");
    scanf("%c", &ch);
    printf("%d", ch >= '0' && ch <= '9'); // 1= yea its digit

    // c. Write a program to print the smallest number

    int a, b;
    printf("enter your numbers");
    scanf("%d,%d", &a, &b);

    // ✨CHAPTER 3✨- conditional statements

    // 3.1 if else
    // 3.2 switch

    // 3.1 if else

    int age;
    printf("enter person age");
    scanf("%d", &age);

    if (age > 18)
    {
        printf("person is adult\n");
        printf("person can drive\n");
        printf("person can buy\n");
    }
    else
        printf("person is not adult\n");

    printf("thank you");

    // else if
    int age;
    printf("enter person age");
    scanf("%d", &age);

    if (age >= 18)
        printf("person is adult\n");

    else if (age > 13 && age < 18)
        printf("person is teenager\n");

    else
        printf("person is child\n");

    printf("thank you");

    // ternary

    int age;
    printf("enter person age");
    scanf("%d", &age);

    age >= 18 ? printf("adult") : printf("not adult");

    // switch

    int day; // 1-mon; 2-tue; 3-wed; 4-thu; 5-fri; 6-sat; 7-sun;
    printf("enter day (1-7)");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("monday\n");
        break;
    case 2:
        printf("tuesday\n");
        break;
    case 3:
        printf("wednesday\n");
        break;
    case 4:
        printf("thursday\n");
        break;
    case 5:
        printf("friday\n");
        break;
    case 6:
        printf("saturday\n");
        break;
    case 7:
        printf("sunday\n");
        break;
    default:
        printf("loveday\n");
    }

    char signal; // r-red light; y-yellow lighht; g-green light;
    printf("tell me about your light(r,y,g)");
    scanf("%c", &signal);

    switch (signal)
    {
    case 'r':
        printf("red light");
        break;
    case 'y':
        printf("yellow light");
        break;
    case 'g':
        printf("green light");
        break;
    default:
        printf("lgbtq");
    }

    // nested if

    int num;
    printf("enter number");
    scanf("%d", &num);

    if (num >= 0)
    {
        printf("positive\n");
        if (num % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd");
        }
    }

    else
        printf("negative\n");
    if (num % (-2) == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd");
    }

    int marks;
    printf("enter numbers (1-100)");
    scanf("%d", &marks);

    if (marks >= 0 && marks <= 30)
        printf("fail\n");

    else if (marks >= 30 && marks <= 100)
        printf("pass\n");

    else
        printf("invalid marks");

    // or simply we can use this statement

    marks <= 30 ? printf("fail\n") : printf("pass\n");

    // Write a Program to find if a character entered by user is upper case or not.

    char ch;
    printf("enter character");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        // ASCII values- numerical representation of a character
        // ch >= 97 & ch >= 'a' are same
        printf("upper case");

    else if (ch >= 'a' && ch <= 'z')
        printf("lower case");

    else
        printf("not english letter");

    // ✨CHAPTER 4✨- LOOP STATEMENTS

    // print hello world 5 times
    printf("hello world");
    printf("hello world");
    printf("hello world");
    printf("hello world");
    printf("hello world");

    // great, now print 1000 times 😏

    // loop control instruction
    // to repeat some parts of the program♾️

    // three types -
    // 1. for
    // 2. while
    // 3. do while

    // FOR LOOP
    // syntax- for(initialisation;condition; updation){
    // do something }

    for (int i = 1; i <= 1000; i += 1)
    {
        printf("%d.hello world\n", i);
    }
    // i=iterator; counter
    for (int i = 100; i >= -100; i -= 1)
        printf("%d\n", i);

    // increment opretors
    //++i i++
    // --i(pre decrement) i--(post decrement)
    int i = 1;
    printf("%d\n", i++); // use, then increase (pre increment)
    printf("%d\n", i);

    i = 1;
    printf("%d\n", ++i); // increase, then use
    printf("%d\n", i);
    // loop counter can be float or even character
    for (float i = 1.0; i <= 5.0; i++)
    {
        printf("%f\n", i);
    }

    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c\n", ch);
    }

    // infinite loops☠️

    for (int i = 1;; i++)
        printf("s\n");
    printf("n\n");

    // ✨while loop✨

    // syntax- while(c/d){//dosomething}

    int i = 1;
    while (i <= 5)
    {
        printf("hello world\n");
        i++;
    }

    // print num from 0 to n if n is given

    // print num from 0 to n if n is given by user

    int i = 0, n;
    printf("tell me your  number");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }

    int i = 0, n;
    printf("Tell me your number: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
        printf("%d\n", i);

    // ✨DO WHOLE LOOP✨
    // esa while loop jo atleast ek bar exicute ho

    // syntax- do{//do something}while(c/d);

    int i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 5);

    // print the sum of the first n natural numbers

    int i = 1, n, sum = 0;
    printf("enter the number");
    scanf("%d", &n);
    do
    {
        sum = i + sum;
        i++;
    } while (i <= n);
    printf("the sum of first %d natural numbers is :%d", n, sum);

    // print the sum of the first n natural numbers and alse print it in reverse order

    int n;
    printf("enter the number");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1, j = n; i <= n && j >= 1; i++, j--)
    {
        sum = sum + i;
        printf("%d\n", j);
    }
    printf("sum is %d \n", sum);
    // or we can do this

    int n;
    printf("enter the number");
    scanf("%d", &n);

    int sum = 0;
    for (int j = n; j >= 1; j--)
    {
        sum = sum + j;
        printf("%d\n", j);
    }
    printf("sum is %d \n", sum);

    // print table

    int n;
    printf("enter the number");
    scanf("%d", &n);

    for (int i = 0; i <= 10; i++)
    {
        printf("%d\n", i * n);
    }

    // ✨BREAK STATEMEN✨- EXIT THE LOOP

    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
            break;

        printf("%d\n", i);
    }
    printf("end");

    // keep taking numbers as input from user untill user enters an odd number.
    //  in that particular type of situation which is taking input's from user use ✨DO-WHILE loop✨

    int n;
    do
    {
        printf("enter number: ");
        scanf("%d", &n);
        printf("%d\n", n);

        if (n % 2 != 0)
        {
            break;
        }
    } while (1);
    printf("thank you");
    // keep taking numbers as input from user untill user enter number which is multiple of 7.
    int n;
    do
    {
        printf("enter number: ");
        scanf("%d", &n);
        printf("%d\n", n);

        if (n % 7 == 0)
        {
            break;
        }
    } while (1);
    printf("thank you");

    // ✨continue statement✨- skip to next itertion

    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue; // skip
        }
        printf("%d", i);
    }

    // print all the odd numbers from 5 to 50:-

    for (int i = 5; i <= 50; i++)
    {

        if (i % 2 == 1)
        {
            printf("%d\n", i);
        }
    }
    // print the factorial of a number n.

    int f, fact = 1;
    printf("bta bhai kiska factorial chahiye?\n");
    scanf("%d", &f);
    for (int i = 1; i <= f; i++)
    {
        fact = fact * i;
    }
    printf("%d", fact); // work correctly until 12 after 12 it show wrong answer

    // print reverse of table for a number n

    int num;
    printf("bta kis number ki reverse table btau");
    scanf("%d", &num);

    for (int i = 10; i >= 0; i--)
    { // want to share my silly mistake :- loop me c/d ke bad ";" lga di 🥲
        printf("%d\n", num * i);
    }

    // calculate the sum of all numbers between 5 and 50 (including 5 &50)
    int sum = 0;
    for (int i = 5; i <= 50; i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);

    // CHAPTER 5- ✨FUNCTION✨
    // block of code that performs particular task
    // it can use multiple times
    // increase code reusability

    // syntax 1. function prototype- void printhello(); >tell the compiler
    // syntax 2. fuction defination- void printhello(){printf("hello")} >do work
    // syntax 3. fuction call      - int main(){printhello(); return 0;} > use the work

    // write two function-to print "hello"
    printhello();
    // write two function- one to print "hello" & second to print "good bye"
    question();
    // write a function that prints NAMASTE if user is indian & BONJOUR if the user is french.
    printf("enter f for  french and i for indian : \n");
    char ch;
    scanf("%c", &ch);
    if (ch == 'f')
    {
        bonjour();
    }
    else
    {
        namaste();
    }
    // Properties of function
    // -execution always starts from main
    // -A function gets called directy or indirectly from main
    // -there can be multiple functions in a program

    // FUNCTION TYPES
    // 1. library function- special functions inbulit in c; example- scanf(), printf()
    // 2. user- defined- declared & defined by programmer

    // passing arguements - functions v=can take value(parameter) & give some value(return value)
    // examples
    // 1. void printhello();
    // 2. void printtable(int n);
    // 3. int sum(inta, intb);

    // take 2 values form user then add and print the value

    int a, b;
    printf("enter the first number\n");
    scanf("%d", &a);
    printf("enter the second number\n");
    scanf("%d", &b);

    int s = sum(a, b);
    printf("sum is :%d", s);

    // print table
    int n;
    printf("enter the number: ");
    scanf("%d", &n);

    printtable(n); // argument/ actual parameter

    // diffrence between argument and parameter⭐
    //  argumnet -
    // values that are passed in function call
    // used to send value
    //  actual parameter
    // parameter -
    // values in function declaration & defination
    // used to receive value
    // formal parameters

    // note
    // a. Function can only return one fuction at a time
    // b. changes to parameter in function dont change the values in calling function.
    // example for statement .b

    // price calculate
    float value = 100;
    calculateprice(value);
    printf("value is :%f", value); // output is 100.0 y cuz changes to parameter in function dont change the values in calling function
    //(because a copy of argument is passed to the function)

    // practice Qs - use library functions to cal. square of a numbers given by user.

    double n;
    printf("enter the number\n");
    scanf("%lf", &n);
    double square = calculatesquare(n);
    printf("the result is :%lf\n", square);

    // practice Qs - write functions to calculate area of square, a circle & a rectangle

    double n;
    printf(" dimension of square :-\n");
    scanf("%lf", &n);
    double square = calculatesquare(n);
    printf("The area of square is %lf\n", square);

    float m;
    printf(" radius of circle :-\n");
    scanf("%f", &m);
    float area = area_circle(m);
    printf("the area of cicle is %f\n", area);

    float a, b;
    printf(" length of rectangle :-\n");
    scanf("%f", &a);
    printf("width of rectangle :-\n");
    scanf("%f", &b);
    float rectangle = area_rectangle(a, b);
    printf("the area of rectangle is :%f\n", rectangle);

    // RECURSION - when a function calls itself, its called recursion
    //  loop and recursion have same prprties ;
    // print "hello world" 5 times.

    // recursion function
    printHW(5);

    // factorial

    printf("factorial is : %d", fact(5));

    // prprties of recursion
    //  a. Anything that can be done with Iteration, can be done with recursion and vice-versa.
    //  b. Recursion can sometimes give the most simple solution.
    //  c. Base Case is the condition which stops recursion.
    //  d. Iteration has infinite loop & Recursion has stack overflow

    // write a function to convert celsius to fahrenheit.

    float far = convertTemp(37);
    printf("far : %f", far);

    int sc = 89;
    int math = 93;
    int sanskrit = 60;

    printf("percentageis : %d", calpercantage(sc, math, sanskrit));

    fibonacci(6);
    // write a program using loop to print n terms of the fibonacci sequence

    // ✨CHAPTER 6- Pointers✨
    // pointers - A variable that stores the memory address of another variable.

    // Syntax
    int age = 22;
    int *ptr = &age; // & address of // * value of address
    int _age = *ptr;

    printf("%d", _age);

    // Declaring Pointers

    int *ptr;
    int age = 22;
    char ptr;
    char star = "*";
    float *ptr;
    float price = 100.00;

    // format specifier

    printf("%p", &age);
    printf("%p", ptr);
    printf("%p", &ptr);

    int age = 22;
    int *ptr = &age;

    // address
    // printf("%p\n",&age);//0061FF18
    printf("%u\n", &age); // 6422300
    printf("%u\n", ptr);  // 6422300
    printf("%u\n", &ptr); // 6422296

    // format specifier

    printf("%d", age);
    printf("%d", *ptr);
    printf("%d", *(&age));

    // value
    int age = 22;
    int *ptr = &age;
    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));

    */

        int *ptr;
    int x;

    ptr = &x;
    *ptr = 0;

    printf("x is =%d\n", x);
    printf("*ptr is =%d\n", *ptr);

    return 0;
}
// all programs from now can only run in their own particular window so just go n do CP😒
// function program .1

// write two function-to print "hello"
void printhello()
{
    printf("hello!\n");
}

// write two function- one to print "hello" & second to print "good bye"

void question()
{
    printf("hello\n");
    printf("good bye");
}
// write a function that prints NAMASTE if user is indian & BONJOUR if the user is french.
void namaste()
{
    printf("NAMASTE\n");
}
void bonjour()
{
    printf("bonjour\n");
}

// take 2 values form user then add and print the value
int sum(int x, int y)
{ // yup you are free to use diffrent variable but dont forget to use data type (declare and use)
    return x + y;
}

// print table
void printtable(int n)
{ // parameter / formal parameter(formality)
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i * n);
    }
}

// price calculate
void calculateprice(float value)
{
    value = value + (0.18 * value); // add 18% gst
    printf("final price is :%f\n", value);
}
double calculatesquare(double n)
{
    double s = pow(n, 2);
    return s;
}
// practice Qs - write functions to calculate area of square, a circle & a rectangle

float area_circle(float m)
{
    float pie = 3.14;
    float a = pie * pow(m, 2);
    return a; // alternate - return 3.14*m*m
}

float area_rectangle(float a, float b)
{
    return a * b;
}

// Recursion function
void printHW(int count)
{
    if (count == 0)
    {
        return;
    }
    printf("Hello World\n");
    printHW(count - 1);
}

// factorial of n
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int factNm1 = fact(n - 1);
    int factN = factNm1 * n;
    return factN;
}
// write a function to convert celsius to fahrenheit.
float convertTemp(float celsius)
{
    float far = celsius * (9.0 / 5.0) + 32;
    return far;
}

int calpercantage(int science, int math, int sanskrit)
{
    return ((science + math + sanskrit) / 3);
}

// write a function to print n terms of the fibonacci sequence
int fibonacci(int n)
{

    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    int fibonacciNM1 = fibonacci(n - 1);
    int fibonacciNM2 = fibonacci(n - 2);
    int fibonacciN = fibonacciNM1 + fibonacciNM2;
    printf("fibonacci of %d is : %d\n", n, fibonacciN);
    return fibonacciN;
}
