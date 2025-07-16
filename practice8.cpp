//43. Print numbers from 10 down to 1 using do...while loop.
#include<iostream>
using namespace std;
int main(){
    int num = 10;
    do{
        cout<<" number is "<<num<<endl;
        num = num -1;
    }while(num>=1);
}