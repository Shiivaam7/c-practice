//29. Print numbers from 1 to 50 that are divisible by 9 using while loop.
#include<iostream>
using namespace std;
int main(){
    int num = 1;
    while(num<= 50){
        if(num%9==0){
            cout<< " number is divisible by 9 = "<<num<<endl;
        }
        num = num + 1;
    }

}