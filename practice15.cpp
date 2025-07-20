#include<iostream>
using namespace std;

int main() {
    int num = 1;
    while(num <= 10) {
        cout << "Number: " << num << " | Square: " << (num * num) << endl;
        num = num + 1;
    }
    return 0;
}
