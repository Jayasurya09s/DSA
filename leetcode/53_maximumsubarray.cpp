#include<vector>
#include<climits>   
using namespace std;    
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxsum=INT_MIN;
        for(int val : nums){
            sum=sum+val;
            maxsum=max(maxsum,sum);
            if(sum<0){
                sum=0;
            }

        } 
        return maxsum;       
    }
};