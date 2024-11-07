#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    cout << "--------Welcome to my Number Guessing Game------------\n";
    cout << "-----In this game you have to guess the number--------\n";
    cout << "-----You have only 5 Chances, so Let's start----------\n";
    cout << "-----You have to guess the number between 1 to 100----\n";
    cout << "------------------------------------------------------\n\n";
    srand(time(0));
    int randNumber = (rand() % 100) + 1;
    int n = 5;
    int playerInput;
    for (int i = 1; i <= 5; i++)
    {
        cout << "Guess the number: ";
        cin >> playerInput;
        if (playerInput == randNumber)
        {
            cout << "Congratulations, You have successfully guessed the right number...";
            cout << "\nThanks for Playing";
            break;
        }
        else
        {
            cout << "You have inserted a larger number please try again\n";
        }
        n--;
        if (n == 0)
        {
            cout << "Sorry your chances have been finished";
            cout << "The Random number was: " << randNumber << endl;
            cout << "Thanks for playing.... ";
        }
    }
    return 0;
}
