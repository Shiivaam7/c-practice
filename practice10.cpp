//45. Print odd numbers from 15 to 35 using do...while loop.
#include<iostream>
using namespace std;
int main(){
    int num = 15;
    do{
        if(num%2!=0){
            cout<<" number is odd "<<num <<endl;
        }
        num = num + 1;
    }while(num<=35);
}