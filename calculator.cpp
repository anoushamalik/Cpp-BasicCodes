#include <iostream>
using namespace std;

int main()
{
    char oper;
    double num_1,num_2;

    cout << "Enter the operators (+,-,*,/): "<< endl;
    cin >> oper;
    cout << "Enter two numbers one by one: " << endl;
    cin >> num_1 >> num_2;

    switch(oper)
    {
        case '+':
        cout <<num_1 << "+" <<num_2 << "=" << (num_1+num_2);
        break;
        case '-':
        cout <<num_1 << "-" <<num_2 << "=" << (num_1-num_2);
        break;
        case '*':
        cout <<num_1 << "*" <<num_2 << "=" << (num_1*num_2);
        break;
        case '/':
        cout <<num_1 << "/" <<num_2 << "=" << (num_1/num_2);
        break;
        default:
            cout <<"Invalid operator" << endl;
    }

    return 0;
}
