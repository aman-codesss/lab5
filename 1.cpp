#include<iostream>
using namespace std;
class B;
class A{
    private:
        int x,y;
    public:
        friend void add(A,B);
        A(int s,int t): x{s}, y{t} {}

        void subtract(B b);
        void multiply(B b);
        void divide(B b);
};
class B{
    private:
        int x,y;
    public:
        friend void add(A,B);
        B(int s,int t): x{s}, y{t} {}

        friend class A;//all A members can access members of B.
    
};
void A::subtract(B b){
    int x = this->x - b.x;
    int y = this->y - b.y;
    cout<<x<<", "<<y<<endl;

}
void A::multiply(B b){
    int x = this->x * b.x;
    int y = this->y * b.y;
    cout<<x<<", "<<y<<endl;

}
void A::divide(B b){
    if(b.x!=0 && b.y!=0){
    int x = this->x / b.x;
    int y = this->y / b.y;
        cout<<x<<", "<<y<<endl;
    }
}
void add(A a, B b){
   int x= a.x+b.x;
   int y =a.y+b.y;
   cout<<x<<", "<<y<<endl;

}
int main(){
A c1(15,20);
B c2(3,4);
add(c1,c2);
c1.subtract(c2);
c1.multiply(c2);
c1.divide(c2);
}