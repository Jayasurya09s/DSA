#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "factorial of " << n << "is :" << fact << endl;
    return fact;
}
int main()
{
    int n;
    cout << "enter a number : " << endl;
    cin >> n;
    factorial(n);

    return 0;
}