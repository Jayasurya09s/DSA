#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    int n;

    cout << "enter number of elements : " << endl;
    cin >> n;
    cout << "Enter " << n << " elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        vec.push_back(element);
    }
    cout << "The " << n << " elements are :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
    // linear search in a vector
    int target;
    cout << "enter target value : ";
    cin >> target;
    for (int i = 0; i < n; i++)
    {

        if (vec[i] == target)
        {
            cout << "target value " << target << " found at index " << i << endl;
            return 0;
        }
    }

    return 0;
}