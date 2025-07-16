//25. Print all odd numbers between 15 and 35 using while loop.
#include<iostream>
using namespace std;
int main(){
    int num = 15;
    while(num<=35){
        if(num%2!=0){
            cout<<" odd number is "<<num<<endl;
        }
        num = num +1;
    }
}