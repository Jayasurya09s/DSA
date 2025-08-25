
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of elements : " << " ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << "elements : " << endl;
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
    // printing unique values in an array
    
    cout << "the unique values in the array are : ";
    for (int i = 0; i < n; i++)
    {
        bool unique =true;
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[j] == arr[i])
            {
                unique=false;
                break;
            }
        }
        if (unique)
        {
            cout << arr[i] << " ";
        }
    }

   
    
    
        
    
    return 0;
}