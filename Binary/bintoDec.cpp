#include <iostream>
using namespace std;
int bintoDeci(int n)
{
    int val = 0, pow = 1, lastdig;
    while (n > 0)
    {
        lastdig = n % 10;

        val = val + lastdig * pow;
        pow = pow * 2;
        n = n / 10;
    }
    cout << val;
    return val;
}
int main()
{
    int n;
    cout << "enter a binary number : " << endl;
    cin >> n;
    bintoDeci(n);
    return 0;
}