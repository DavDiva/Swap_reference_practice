#include <iostream>
using namespace std;

template <typename T> 
void swapd(T &a, T &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 5;
    int b = 10;
    cout << "Before swap: " << endl;
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
    swapd(a, b);
    cout << "After swap: " << endl;
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
    return 0;
}

