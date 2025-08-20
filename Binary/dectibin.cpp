#include <iostream>
using namespace std;
int main()
{
    int n, pow = 1, ans = 0;
    cout << "enter a Decimal number : " << endl;
    cin >> n;
    while (n > 0)
    {
        int rem = n % 2;
        ans = ans + rem * pow;
        pow = pow * 10;
        n = n / 2;
    }
    cout << ans;
    return 0;
}