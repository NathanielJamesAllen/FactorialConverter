// Source2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int fact(int);

int main()
{
    
    int num1, num2;

    //Input
    cout << "Enter the integer: ";
    cin >> num1;

    //Output
    cout << "The factorial value is " << fact(num1) << endl;
    

    return 0;


}
int fact(int n) {
    if (n > 1) {
        return(n*fact(n-1));
    }
    else {
        return(1);
    }

}


