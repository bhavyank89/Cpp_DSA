#include <bits/stdc++.h>
using namespace std;
int main()
{

    double Operand1, Operand2;
    int choice = 1;
    char Operator;

    while (choice)
    {
        cout << endl
             << "Enter the task = ";
        cin >> Operand1 >> Operator >> Operand2;

        switch (Operator)
        {
        case '+':
            cout << "Result :"
                 << Operand1 << Operator << Operand2 << " = " << Operand1 + Operand2;
            break;

        case '-':
            cout << "Result :"
                 << Operand1 << Operator << Operand2 << " = " << Operand1 - Operand2;
            break;

        case '*':
            cout << "Result :"
                 << Operand1 << Operator << Operand2 << " = " << Operand1 * Operand2;
            break;

        case '/':
            cout << "Result :"
                 << Operand1 << Operator << Operand2 << " = " << Operand1 / Operand2;
            break;

        case '^':
            cout << "Result :"
                 << Operand1 << Operator << Operand2 << " = " << pow(Operand1, Operand2);
            break;

        default:
            cout << "This Operation Is Coming Soon!!!";
        }

        cout << endl
             << endl
             << "Want to continue(1/0) : ";
        cin >> choice;
    }
}