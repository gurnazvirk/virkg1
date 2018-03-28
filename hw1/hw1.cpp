#include <iostream>

using namespace std;

int main()
{
    int a, b, resultA, resultB, resultC, resultD, answer;

    cout << "Please Enter a Number: ";
    cin >> a;
    cout << "Please Enter another Number: ";
    cin >> b;

    cout << "Enter Your Choice: (1 = Sum, 2= Sub, 3= Mul, 4= Div)" << endl;
    cin >> answer;

    resultA = a + b;
    resultB = a - b;
    resultC = a * b;
    resultD = a / b;


    if (answer == 1)
    {
       cout << "Your Answer is: " << resultA << endl;
    }

    else if (answer == 2)
    {
       cout << "Your Answer is: " << resultB << endl;
    }

    else if (answer == 3)
    {
       cout << "Your Answer is: " << resultC << endl;
    }

    else if (answer == 4)
    {
       cout << "Your Answer is: " << resultD << endl;
    }

    else
    {
       cout << "Your Choice is Incorrect." << endl << endl;
    }

    return 0;
}
