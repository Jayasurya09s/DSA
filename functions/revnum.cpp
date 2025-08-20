#include <iostream>
using namespace std;
int revnum(int n)
{
    int lg;
    while (n > 0)
    {
        lg = n % 10;
        cout << lg;
        n = n / 10;
    }
    return 0;
}
int main()
{
    int n;
    cout << "enter a number : " << endl;
    cin >> n;
    revnum(n);
    return 0;
}