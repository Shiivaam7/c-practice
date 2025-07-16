//44. Print even numbers from 2 to 20 using do...while loop.
#include<iostream>
using namespace std;
int main(){
    int num = 2;
    do{
        if(num%2==0){
            cout<<" even number from 2 to 20 is "<<num <<endl;
        }
        num = num +1;
      
    }while(num<=20);
}