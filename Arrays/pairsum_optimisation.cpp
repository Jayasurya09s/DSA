#include<iostream>
#include <vector>
using namespace std;
 vector<int> pairSum(vector<int> nums, int target) {
        vector<int>ans;
        int n=nums.size();
        int st=0,end=n-1;
        
        while(st<end){
            int pairSum= nums[st]+nums[end];
            if(pairSum > target){
                end--;
            }
            else if( pairSum < target){
                st++;
            }
            else{
                ans.push_back(st);
                ans.push_back(end);
                return ans;
            }
            
        }
        return ans;
    }
int main(){
    vector<int>nums;
   int n;
   int target;
   cout<<"enter number of elements :";
   cin>>n;
   cout<<"enter the "<<n<<" elements"<<endl;
   
   for(int i=0;i<n;i++){
    int element ;
    cin>>element;
    nums.push_back(element);
   }
    cout << "Enter the target number: ";
    cin >> target;
   cout<<"the elements are :";
   for(int i=0;i<n;i++){
    cout<<nums[i] <<" ";
   }
   cout<<endl;
   
   vector<int>ans = pairSum(nums,target);
    if (!ans.empty()) {
        cout << ans[0] << " and " << ans[1]<<" "<< " are the indexes of the elements of pairsum.\n";
    } else {
        cout << "No pair found with the given target.\n";
    }
    return 0;
}