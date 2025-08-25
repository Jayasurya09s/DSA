
#include <iostream>
using namespace std;
int main()
{
    // first array
    int n;
    cout << "enter number of elements in array 1 is : " << " ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements for array 1: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The  " << n << " elements are :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // second array
    int m;
    cout << "Enter number of elements in array 2 : " << " ";
    cin >> m;
    int arr1[m];
    cout << "Enter " << m << "elements in array 2 : " << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }
    cout << "The " << m << " elements are :" << endl;
    for (int i = 0; i < m; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    // printing common  values in an array

    cout << "the point of intersection in 2 arrays are : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i]==arr1[j] ){
                cout<<arr[i]<<" ";
                break;
            }
        }
    }

    return 0;
}