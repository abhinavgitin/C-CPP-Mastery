// #include <iostream>
// using namespace std;

// // --------------------------------------------------
// // 1. int, float  VS  float, int
// // --------------------------------------------------

// void whatCalled( int a ) {
//     cout << "This is an integer " << endl;
// }

// void whatCalled( float a ) {
//     cout << "This is a float" << endl;
// }

// void test1(int a, float b)
// {
//     cout << "test1: int, float" << endl;
// }

// void test1(float a, int b)
// {
//     cout << "test1: float, int" << endl;
// }


// // --------------------------------------------------
// // 2. double, int  VS  int, double
// // --------------------------------------------------

// void test2(double a, int b)
// {
//     cout << "test2: double, int" << endl;
// }

// void test2(int a, double b)
// {
//     cout << "test2: int, double" << endl;
// }


// // --------------------------------------------------
// // 3. long, int  VS  int, long
// // --------------------------------------------------

// void test3(long a, int b)
// {
//     cout << "test3: long, int" << endl;
// }

// void test3(int a, long b)
// {
//     cout << "test3: int, long" << endl;
// }


// // --------------------------------------------------
// // 4. double, long  VS  long, double
// // --------------------------------------------------

// void test4(double a, long b)
// {
//     cout << "test4: double, long" << endl;
// }

// void test4(long a, double b)
// {
//     cout << "test4: long, double" << endl;
// }


// // --------------------------------------------------
// // MAIN
// // --------------------------------------------------

// int main()
// {
//     cout << "TEST 1" << endl;
//     // first i will pass integer 6 and test -> aftert testing the integer was called
//     // whatCalled(6);
//     // now float 6.0f and i saw that after the testing the float was called
//     whatCalled(6.0f);
    
//     // which one will be called?
//     test1(10, 10.5f);

//     // // Exact match
//     // test1(10.5f, 10);


//     // cout << "\nTEST 2" << endl;

//     // // Exact match
//     // test2(10.5, 10);

//     // // Exact match
//     // test2(10, 10.5);


//     // cout << "\nTEST 3" << endl;

//     // // Exact match
//     // test3(100L, 10);

//     // // Exact match
//     // test3(10, 100L);


//     // cout << "\nTEST 4" << endl;

//     // // Exact match
//     // test4(10.5, 100L);

//     // // Exact match
//     // test4(100L, 10.5);


//     // /*
//     // ==================================================
//     //                 AMBIGUITY TESTS
//     // ==================================================

//     // DO NOT RUN THESE TOGETHER WITH THE PROGRAM ABOVE.

//     // Uncomment ONE at a time to see the compiler error.
//     // */

//     return 0;
// }


// #include <iostream>
// using namespace std;


// // --------------------------------------------------
// // WHAT CALLED?
// // --------------------------------------------------

// void whatCalled(int a)
// {
//     cout << "This is an integer" << endl;
// }

// void whatCalled(float a)
// {
//     cout << "This is a float" << endl;
// }

// void whatCalled(double a)
// {
//     cout << "This is a double" << endl;
// }

// void whatCalled(long a)
// {
//     cout << "This is a long" << endl;
// }


// // --------------------------------------------------
// // 1. int, float VS float, int
// // --------------------------------------------------

// void test1(int a, float b)
// {
//     cout << "test1: int, float" << endl;
// }

// void test1(float a, int b)
// {
//     cout << "test1: float, int" << endl;
// }


// // --------------------------------------------------
// // 2. double, int VS int, double
// // --------------------------------------------------

// void test2(double a, int b)
// {
//     cout << "test2: double, int" << endl;
// }

// void test2(int a, double b)
// {
//     cout << "test2: int, double" << endl;
// }


// // --------------------------------------------------
// // 3. long, int VS int, long
// // --------------------------------------------------

// void test3(long a, int b)
// {
//     cout << "test3: long, int" << endl;
// }

// void test3(int a, long b)
// {
//     cout << "test3: int, long" << endl;
// }


// // --------------------------------------------------
// // 4. double, long VS long, double
// // --------------------------------------------------

// void test4(double a, long b)
// {
//     cout << "test4: double, long" << endl;
// }

// void test4(long a, double b)
// {
//     cout << "test4: long, double" << endl;
// }


// // --------------------------------------------------
// // MAIN
// // --------------------------------------------------

// int main()
// {
//     cout << "WHAT CALLED" << endl;

//     // Integer
//     whatCalled(6);

//     // Float
//     whatCalled(6.0); // removing the f gives the answer as double

//     // Double
//     whatCalled(6.0); // gives double

//     // Long
//     whatCalled(6); // rm the L and its soon an integer


//     cout << "\nTEST 1" << endl;

//     // Exact match
//     test1(10, 10.5); // same here

//     // Exact match
//     test1(10.5f, 10);


//     cout << "\nTEST 2" << endl;

//     // Exact match
//     test2(10.5, 10);

//     // Exact match
//     test2(10, 10.5);


//     cout << "\nTEST 3" << endl;

//     // Exact match
//     test3(100L, 10);

//     // Exact match
//     test3(10, 100L);


//     cout << "\nTEST 4" << endl;

//     // Exact match
//     test4(10.5, 100L);

//     // Exact match
//     test4(100L, 10.5);


//     return 0;
// }


#include <iostream>
using namespace std;

void test(int a, float b)
{
    cout << "int, float" << endl;
}

void test(float a, int b)
{
    cout << "float, int" << endl;
}

int main()
{
    test(10L, 10);

    return 0;
}