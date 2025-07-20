//27. Input a number and print all numbers from 1 to that number using while loop.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<" Enter the number "<<endl;
    cin>>num;

    int i = 1;
    while(i<=num){
        cout<<i << " ";
        i++;
    }

}

