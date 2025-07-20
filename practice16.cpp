//31. Print sum of numbers from 1 to 25 using while loop.
#include<iostream>
using namespace std;
int main(){
    int num = 1;
    int sum = 0;
    while(num<=25){
        sum = sum + num;
        num++;
    }
    cout << "Sum of numbers from 1 to 25 is: " << sum << endl;
    
}