#
#include<climits>
#include<cmath>
#include<iostream>
using namespace std;
class Solution {
public:
    int reverse(long int x) {
       long long rev=0,b=x,a=0;
       
       if(x<0){
        x=-x;
       }
       
       while(x>0){
        a=x%10;
        rev=rev*10+a;
        if(rev>INT_MAX || b==INT_MIN) return 0;
        x=x/10;
       }
       if(b<0){
        rev=-rev;
       }
        b=rev;
       return b;
    }
};