#include <iostream>
using namespace std;

class calculater
{
    int num1 ;
    int num2 ;

public:
    calculater ()
    {
        cout << "Enter the first number: " ; cin >> num1 ;
        cout << "Enter the second number: " ; cin >> num2 ;
    }
    void print()
    {
        cout << num1 << " + " << num2 << " = " << num1+num2 << "\n" ;
        cout << num1 << " * " << num2 << " = " << num1*num2 << "\n" ;
        cout << num1 << " - " << num2 << " = " << num1-num2 << "\n" ;
        cout << num1 << " / " << num2 << " = " << num1/num2 << "\n" ;
        cout << num1 << " % " << num2 << " = " << num1%num2 << "\n" ;
    }

};

int main()
{
    calculater c1 ;
    c1.print() ;

    cout <<"\n" ;
    system("pause") ;
    return 0;
}
