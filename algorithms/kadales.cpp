#include<iostream>
#include<climits>
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
    // kadane's algorithm to find maximum subarray sum
    // time complexity is O(n)
    int msum=INT_MIN;
    int csum=0;
    for(int i=0;i<5;i++){
        csum=csum+arr[i];
        msum=max(csum,msum);
        
        if(csum<0){
            csum=0;
        }

    }
    cout<<"the sum of maximum subarray is :"<<msum;
    return 0;
}