#include <iostream>
using namespace std;
void Addition()
{
    int a;
    cout << "Enter the First Number: ";
    cin >> a;
    int b;
    cout << "Enter the Second Number: ";
    cin >> b;
    int sum = a + b;
    cout << "The sum of " << a << " and " << b << " is: " << sum;
}
void Subtraction()
{
    int a;
    cout << "Enter the First Number: ";
    cin >> a;
    int b;
    cout << "Enter the Second Number: ";
    cin >> b;
    int diff = a - b;
    cout << "The difference of " << a << " and " << b << " is: " << diff;
}
void Multiplication()
{
    int a;
    cout << "Enter the First Number: ";
    cin >> a;
    int b;
    cout << "Enter the Second Number: ";
    cin >> b;
    int mul = a * b;
    cout << "The multiplication of " << a << " and " << b << " is: " << mul;
}
void Division()
{
    float a;
    cout << "Enter the First Number: ";
    cin >> a;
    float b;
    cout << "Enter the Second Number: ";
    cin >> b;
    float div = a / b;
    cout << "The division of " << a << " and " << b << " is: " << div;
}
int main()
{
    int choice;
    do
    {
        cout << "\n\n----------Menu of tasks that can Perform Your Calculator----------\n";
        cout << "\n1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Division" << endl;
        cout << "------------------------------------------------------------------\n";
        cout << "Please Enter Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            Addition();
            break;
        case 2:
            Subtraction();
            break;
        case 3:
            Multiplication();
            break;
        case 4:
            Division();
            break;
        default:
            cout << "Invalid Choice Please select according to Menu";
        }
    } while (choice != 5);
    return 0;
}