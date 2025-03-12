// MyFirstCPPWithFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "add.h"
#include "Square.h"
#include "Waver.h"
#include <iostream>
#include <cstdlib> // for EXIT_SUCCESS and EXIT_FAILURE

//int add(int x, int y); // forward declaration of add() (using a function declaration) - when not using header file


int getIntValueFromUser() {
    
    std::cout << "Please provide a number \n";
    int intValue{};
    std::cin >> intValue;

    return intValue;
}

/* Problem 1 - Show a double value for a int number */
int doDoubleCalculation() {
   
    int value{ getIntValueFromUser()}; // initialize num with the return value of getIntValueFromUser()

    std::cout << "Calculating double value for " << value;
    //value = value * 2; //BAD solution. Value will be lost and original value cannot be used in the future.
    int doubleValue = { value * 2 }; // initialize and calculate new value
    std::cout << "\nDouble value is = " << doubleValue << "\n";

    return 0;
}


/* Problem 2 - Write a program that asks the user to enter a number, and then enter a second number. The program should tell the user what the result of adding and subtracting the two numbers is.

 The output of the program should match the following(assuming inputs of 6 and 4) :

     Enter an integer : 6
     Enter another integer : 4
     6 + 4 is 10.
     6 - 4 is 2.

 */
void doAddAndSub() {

    int number1 = { }, number2 = {};
    number1 = getIntValueFromUser();
    number2 = getIntValueFromUser();
    std::cout << "The substraction fo these two numbers are = " << (number1 - number2) << ". And the addition of them are = " << add(number1, number2);

}


/*
* Problem 3 - Write a function called doubleNumber() that takes one integer parameter.The function should return double the value of the parameter.
*/
int doubleNumber(int number) {
    return number * 2;
}

void doDoubleNumber() {
    int valueToDouble = { getIntValueFromUser() };
    std::cout << "The double for = " << valueToDouble << ". is = " << doubleNumber(valueToDouble);

}



void verifyWhichProblemToRun(int inputNumber) {
    
    if (inputNumber == 1) 
    {
        doDoubleCalculation();

    }
    else if (inputNumber == 2) {
        doAddAndSub();
    }
    
    else if (inputNumber == 3) {
        doDoubleNumber();

    } else if (inputNumber == 4) {
        std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';

    }
    else if (inputNumber == 5) {
        std::cout << "a square has " << getSquareSides() << " sides\n";
        std::cout << "a square of length 5 has perimeter length " << getSquarePerimeter(5) << '\n';

    }

}

int main()
{
    int chooseProblemOutput = {};
    std::cout << "Please select 1,2 ,3 or 4 \n";
    std::cout << "1 = For double calculation of integer number. \n";
    std::cout << "2 = For addition and subtraction between two integers.  \n";
    std::cout << "3 = Alternative way of doubling a number. \n";
    std::cout << "4 =  For sum between 3 and 7 using header. \n";
    std::cout << "5 = Square sides for header gurads. \n";

    std::cin >> chooseProblemOutput;

    verifyWhichProblemToRun(chooseProblemOutput);

    std::cin.clear(); // reset any error flags
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer until we find an enter character
    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
