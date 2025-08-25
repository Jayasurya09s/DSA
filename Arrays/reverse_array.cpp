#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of elements : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<"number of elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout <<"the "<<n<<" elements are :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    // reversing an array
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"the reverse array of "<<n<< "numbers is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }

    return 0;
}