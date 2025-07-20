////26. Print all numbers divisible by 7 between 1 and 100.
#include<iostream>
using namespace std;

int main() {
    int num = 1;
    while(num <= 100) {
        if(num % 7 == 0) {
            cout << "Divisible by 7: " << num << endl;
        }
        num = num + 1;
    }
    return 0;
}
