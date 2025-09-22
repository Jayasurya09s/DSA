#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>num;
   int n;
   cout<<"enter number of elements :";
   cin>>n;
   cout<<"enter the "<<n<<" elements"<<endl;
   
   for(int i=0;i<n;i++){
    int element ;
    cin>>element;
    num.push_back(element);
   }
   cout<<"the elements are :";
   for(int i=0;i<n;i++){
    cout<<num[i] <<" ";
   }
   cout<<endl;
   vector<int>ans;
   int target;
   cout<<"enter the target number :";
   cin>>target;
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(num[i]+num[j]==target){
            
        ans.push_back(i);
        ans.push_back(j);
        }
    }
   }
cout<<ans[0]<<" "<<"and "<<ans[1]<<" "<<" are the indexes of the elements of pairsum";

    return 0;
}