#include <iostream>
#include <stack>
#include<vector>
using namespace std;

class solution{
public:
    int next_greater(vector<int> arr, int target){
        int n = arr.size();
        stack<int> stk;
        int a = 0;
        for(int i =0; i<n; i++){
            if(arr[i]==target){a=i; break;}
        }
        for(int i=a; i<n; i++){
            if(arr[i]>target){
                stk.push(i);
            }
            if(arr[i]>target && target < arr[stk.top()]){
                stk.pop();
                stk.push(i);
            }
        }
        return stk.top()-a;
    }
};

int main() {
    solution oho;
    vector<int>  oh  = {1,4,2,6,0,5,7} ;
    cout<<oho.next_greater(oh, 4);

}
