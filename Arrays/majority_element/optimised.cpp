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
    cout << endl;
    int freq;
    for(int i=0;i<n;i++){
        freq=0;
        for(int j=0;j<n;j++){
            if(vec[j]==vec[i]){
                freq++;
            }
        }
        if(freq>n/2){
        cout<<vec[i]<<" is the majority element"<<endl;
        break;
    }
    
    }
    
    return 0;
}