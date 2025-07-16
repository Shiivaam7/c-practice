//24. Print all even numbers between 2 and 40 using while loop.
#include<iostream>
using namespace std;
int main(){
    int num = 2;
    while(num<=40){
        if(num%2==0){
            cout<<" even number is " <<num<<endl;
        }
        num = num + 1;
    }
}