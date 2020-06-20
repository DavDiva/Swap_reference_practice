#include <iostream>
using namespace std;

template <typename T> 
void swapd(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
   double a = 5.5;
   double b = 10.7;
    cout << "Before swap: " << endl;
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
    swapd(a, b);
    cout << "After swap: " << endl;
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
    return 0;
}

