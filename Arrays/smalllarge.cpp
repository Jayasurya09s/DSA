#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of elements  : " << " ";
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
    // Printing Smallest and Largest numbers in an array including their index numbers
    int smallest = arr[0];
    int largest = arr[0];
    int small_index = 0, large_index = 0;
    for (int i = 0; i < n; i++)
    {
        if (smallest >= arr[i])
        {
            smallest = arr[i];
            small_index = i;
        }
        if (largest <= arr[i])
        {
            largest = arr[i];
            large_index = i;
        }
    }
    cout << "The smallest element is : " << smallest << " with the index number" << small_index << endl;
    cout << "The largest element is : " << largest << " with the index number" << large_index << endl;
    return 0;
}