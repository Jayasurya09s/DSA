#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of elements : " << endl;
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
    // Swapping min and max numbers in thr given array

    int max = 0;
    int min = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[max] >= arr[i])
        {
            max = i;
        }
        if (arr[min] <= arr[i])
        {
            min = i;
        }
    }
    swap(arr[max], arr[min]);
    cout << "the array after swapping is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}