#include <iostream>
using namespace std;

class Solution {
public:
    int fib(int n) {

        if(n<=1)
            return n;

        int a=0,b=1,c;

        for(int i=2;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }

        return b;
    }
};

int main(){

    Solution obj;

    cout<<obj.fib(10);

    return 0;
}