class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0,a=0,b=x;
            while(b>0){
                a=b%10;
                rev=rev*10+a;
                b=b/10;

            }
        if(rev==x){
            return true;
        }
        else
        return false;
        
    }
};