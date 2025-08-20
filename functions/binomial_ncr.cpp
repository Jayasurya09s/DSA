#include <iostream>
using namespace std;
int binomialcoeff(int n, int r)
{
    int coeff, nfact = 1, rfact = 1, nrfact = 1;
    for (int i = 1; i <= n; i++)
    {
        nfact = nfact * i;
    }
    for (int i = 1; i <= n - r; i++)
    {
        nrfact = nrfact * i;
    }
    for (int i = 1; i <= r; i++)
    {
        rfact = rfact * i;
    }
    coeff = nfact / (rfact * nrfact);

    return coeff;
}
int main()
{
    int n, r;

    cout << "enter a number for n in ncr : " << endl;
    cin >> n;

    cout << "enter a number for r in ncr :  : " << endl;
    cin >> r;
    cout << binomialcoeff(n, r);
    return 0;
}