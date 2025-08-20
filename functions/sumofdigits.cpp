#include <iostream>
using namespace std;
int sumof(int n)
{
    int sumis = 0;
    while (n > 0)
    {
        int lastdig = n % 10;

        sumis = sumis + lastdig;
        n = n / 10;
    }

    return sumis;
}
int main()
{
    int n;
    cout << "enter a number : " << endl;
    cin >> n;
    cout << sumof(n);
    return 0;
}