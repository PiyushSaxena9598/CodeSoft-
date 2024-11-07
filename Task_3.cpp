#include <iostream>
using namespace std;

char arr[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int row;
int coloumn;
char token = 'x';
bool tie = false;
string n1;
string n2;
void functionOne()
{
    cout << "       |       |       \n";
    cout << "       |       |       \n";
    cout << "    " << arr[0][0] << "  |   " << arr[0][1] << "   |   " << arr[0][2] << "  \n";
    cout << " ______|_______|_______\n";
    cout << "       |       |       \n";
    cout << "    " << arr[1][0] << "  |   " << arr[1][1] << "   |   " << arr[1][2] << "  \n";
    cout << " ______|_______|_______\n";
    cout << "       |       |       \n";
    cout << "    " << arr[2][0] << "  |   " << arr[2][1] << "   |   " << arr[2][2] << "  \n";
    cout << "       |       |       \n";
}

void functionTwo()
{
    int digits;
    if (token == 'x')
    {
        cout << n1 << " Please enter: ";
        cin >> digits;
    }

    if (token == '0')
    {
        cout << n2 << " Please enter: ";
        cin >> digits;
    }

    if (digits == 1)
    {
        row = 0;
        coloumn = 0;
    }
    if (digits == 2)
    {
        row = 0;
        coloumn = 1;
    }
    if (digits == 3)
    {
        row = 0;
        coloumn = 2;
    }
    if (digits == 4)
    {
        row = 1;
        coloumn = 0;
    }
    if (digits == 5)
    {
        row = 1;
        coloumn = 1;
    }
    if (digits == 6)
    {
        row = 1;
        coloumn = 2;
    }
    if (digits == 7)
    {
        row = 2;
        coloumn = 0;
    }
    if (digits == 8)
    {
        row = 2;
        coloumn = 1;
    }
    if (digits == 9)
    {
        row = 2;
        coloumn = 2;
    }

    else if (digits < 1 || digits > 9)
    {
        cout << "Invalid";
    }
    if (token == 'x' && arr[row][coloumn] != 'x' && arr[row][coloumn] != '0')
    {
        arr[row][coloumn] = 'x';
        token = '0';
    }
    else if (token == '0' && arr[row][coloumn] != 'x' && arr[row][coloumn] != '0')
    {
        arr[row][coloumn] = '0';
        token = 'x';
    }
    else
    {
        cout << "There is no empty space" << endl;
        functionOne();
    }
}

bool functionThree()
{
    for (int i = 0; i < 3; i++)
    {
        if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2] || arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i])
        {
            return true;
        }
        if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] || arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
        {
            return true;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] != 'x' && arr[i][j] != '0')
            {
                return false;
            }
        }
    }
    tie = true;
    return false;
}

int main()
{
    cout << "Enter the name of first player: ";
    getline(cin, n1);

    cout << "Enter the name of second player: ";
    getline(cin, n2);
    cout << n1 << " is the first player so " << n1 << " will play first\n";
    cout << n2 << " is the second player so " << n2 << " will play second\n";
    while (!functionThree())
    {
        functionOne();
        functionTwo();
        functionThree();
    }

    if (token == 'x' && tie == false)
    {
        cout << n2 << " wins" << endl;
    }
    else if (token == '0' && tie == false)
    {
        cout << n1 << " wins";
    }
    else
    {
        cout << "It's a draw" << endl;
    }
    return 0;
}