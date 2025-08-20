// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     int k=1;
//     for(int i=0;i<n;i++){

//         for(int j=k;j>0;j--){
//             cout<<j<< " ";

//         }
//         cout<<endl;
//         k++;
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "enter a number : " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}