#include<iostream>
using namespace std;
class space{
    private:
        int x,y,z;
    public:
        //constructor
        space(int a,int b,int c):x{a},y{b},z{c}{}
        //member function
        void print(){
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
        //operator overloading using friend(non-member function)
        friend space operator+ (const space &a,const space &b){
            return space(a.x+b.x,a.y+b.y,a.z+b.z);
        }

};
 int main(){
    space a(1,2,3), b(4,5,6);
    space c = a+b;
    c.print();
 }