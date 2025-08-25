#include<iostream>
using namespace std;
int main(){
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
    // sum and product of elements
    int sum=0;
    int product=1;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        product=product*arr[i];
    }
    cout<<"the sum of given"<<n<<" numbers are : " <<sum;
    cout<<"the product of given "<<n<<"numbers are : "<<product;
    return 0;
}
