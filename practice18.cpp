//46. Input a number and print its multiplication table using do...while loop.
// #include<iostream>
// using namespace std;
// int main(){
//     int num, i =1;
//     cout<<" enter a number " <<endl;
//     cin>>num;
//     do{
//         cout<<num << " x "<< i <<" = "<<num*i<<endl;
//         i++;
//     }while(i<=10);
// }
//47. Keep taking numbers from user until user enters 0 (do...while)
#include<iostream>
using namespace std;
int main(){
    int i ;
    do {
        cout<< " enter the number zero to stop ";
        cin>>i;

    }while( i!=0){
        cout<< " enter zero to terminate ";
    }

}