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
    // print all subarrays
    // time complexity is O(n^3)
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k];
                
            }
            cout<<" ";
           
            
        }
        cout<<endl;
    }
    return 0;
}