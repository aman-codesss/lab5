#include<iostream>
using namespace std;
class num{
    private:
        int val;
    public:
        //constructor initializer list
        num(int v): val{v} {}

        //operator overloading
        bool operator==(num x){
            return val==x.val;
        }
        bool operator!=(num x){
            return val!=x.val;
        }
        bool operator<(num x){
            return val<x.val;
        }
        bool operator>(num x){
            return val>x.val;
        }
        bool operator<=(num x){
            return val<=x.val;
        }
        bool operator>=(num x){
            return val>=x.val;
        }
};
int main(){
    num n1(10),n2(7);

    //same as cout<<n1.operator==(n2)<<endl;
    cout<<(n1==n2)<<endl;
    cout<<(n1!=n2)<<endl;
    cout<<(n1<n2)<<endl;
    cout<<(n1>n2)<<endl;
    cout<<(n1<=n2)<<endl;
    cout<<(n1>=n2)<<endl;


}