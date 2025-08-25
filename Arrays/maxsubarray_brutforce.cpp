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
    // brute force approach to find maximum subarray sum
    // time complexity is O(n^2)
    int msum=INT_MIN; //negative infinity
    for(int i=0;i<n;i++){
        int sum=0;      
        for(int j=i;j<n;j++){
            sum=sum+arr[j];  
        }
        msum=max(msum,sum);
    }
    cout<<msum;
    return 0;
}