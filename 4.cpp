// Write a class Date that overloads prefix and postfix operators to increase the Date object by one day, while causing appropriate increments to the month and year (use the appropriate condition for leap year). The prefix and postfix operators in the Date class should behave exactly like the built-in increment operators.

#include<iostream>
using namespace std;
class Date{
    private:
        int day,month,year;
    public:
        Date(int d,int m, int y): day{d}, month{m}, year{y} {}
        Date operator++(){
            day++;
            //month increase
            if(
                ((month==1||month==3||month==5||month==7||month==8||month==10||month==12)&&day>31)
                ||
                ((month==4||month==6||month==9||month==11)&&(day>30))
                ||
                (isLeapYear() &&(month==2 && day>29))
                ||
                (!isLeapYear() && (month==2 && day>28))

            )
            {   day=1;
                month++;
            }
            //year increase
            if(month>12){
                month=1;
                year++;
            }

            return Date(day,month,year);
        }
        //int as a param specifies the postfix operator
        Date operator++(int){
            Date temp = *this;
            ++ *this;
            return temp;
        }
        bool isLeapYear(){
            if(year%400==0 || (year%4==0 && year%100!=0)) {
                return true;
                }
            return false;
        }
        void display(){
            cout<<year<<"-"<<month<<"-"<<day<<endl;
                    }
};
int main(){
    //non-leap-year post-increment
    Date d1(28,2,2023);
    d1.display();
    d1++;
    d1.display();

    cout<<endl;

    //leap-year pre-increment
    Date d2(28,2,2024);
    d2.display();
    ++d2;
    d2.display();
    

}