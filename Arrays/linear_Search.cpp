#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of elements : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The " << n << " elements are :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // linear search in an array
    int target;
    cout << "enter target value : ";
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        if (target == arr[i])
        {
            cout << "target found at index :" << i << endl;
            
        }
        else{
            cout<<"target not found"<<endl;
        }
       
    }

    return 0;
}