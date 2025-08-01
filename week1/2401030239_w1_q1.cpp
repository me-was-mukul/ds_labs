#include <iostream>
#include <stack>
using namespace std;

class solution{
public:
    bool isvalid(string s){
        stack<int> stk;
        for(char c : s){
            if(c=='['||c=='{'||c=='('){stk.push(c);}
            else{
                if(stk.size()!=0||((stk.top()=='}'&&c!='{')||
                   (stk.top()==']'&&c!='[')||
                   (stk.top()==')'&&c!='('))){return 0;}
                else{
                    stk.pop();
                }
            }
        }
        if(stk.size()==0){return 1;}
    }
};

int main() {
    solution oho;
    cout<<boolalpha<< oho.isvalid("{{}})[]{{}}");

}
