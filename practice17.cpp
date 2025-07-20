//33. Count down from 20 to 0 in steps of 2 using while loop.
// #include<iostream>
// using namespace std;
// int main(){
//     int num = 20;
//     while(num >=0){
//         cout<< " "<<num;
//         num = num - 2;
//     }
    

// }

//34. Input a number and print all its factors using while loop.
// #include<iostream>
// using namespace std;

// int main() {
//     int num;
//     cout << "Enter the number: ";
//     cin >> num;

//     int i = 1;
//     cout << "Factors of " << num << " are: ";

//     while (i <= num) {
//         if (num % i == 0) {
//             cout << i << " ";
//         }
//         i++;
//     }

//     return 0;
// }

//35. Input a number and print whether it is a palindrome using while loop.
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<< " number is "<<num<<endl;
//     cin>>num;
//     while
// }


//36. Print all numbers between 1 to 50 that are divisible by 6 using while loop.
// #include<iostream>
// using namespace std;
// int main(){
//     int num = 1;
//     while(num<=50){
//         if(num%6==0){
//             cout<< ""<<num<<endl;
//         }
//         num = num +1;
//     }
// }


//37. Print a number countdown from user input to 1
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<" enter the number "<<endl;
//     cin>>num;
//     while(num>=1){
//         cout<< "" <<num;
//         num--;

//     }
// }


//38. Print only 3-digit numbers between 100 to 999 using while loop.
// #include<iostream>
// using namespace std;
// int main(){
//     int i = 100;
//     while(i<=999){
//         cout<< "" <<i <<endl;
//         i++;
//     }
// }

//39. Print all numbers between 1 and 50 that are not divisible by 5.
// #include<iostream>
// using namespace std;
// int main(){
//     int num = 1;
//     while(num<=50){
//         if(num%5!=0){
//             cout<< " number is " <<num <<endl;

//         }
//         num = num+1;
        
//     }
// }


//40. Print numbers from 10 to 100, skip numbers divisible by 20.
#include<iostream>
using namespace std;
int main(){
    int i = 10;
    while(i<=100){
        if(i%20==0){
            i++;
            continue;

        }
        
        cout<<" number is "<<i <<endl;
        i++;
    }
    

}