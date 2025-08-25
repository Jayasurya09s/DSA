#include<iostream>
#include<vector>
using namespace std;
int main(){
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
    cout<<endl;
    // reverse a vector
    int start=0;int end=n-1;
    while(start<=end){
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
    cout<<"The reversed vector is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}