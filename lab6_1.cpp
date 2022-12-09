#include<iostream>
using namespace std;

int main(){
  int a = 0;
  int b = 0;
  int num;
    while(num != 0){
    cout << "Enter an integer: ";
    cin >> num;
    if(num != 0){
    if(num%2 == 0){  
       a++ ;  
    }else{
       b++ ;
    }
      }
        }
    
    cout << "#Even numbers = " << a << endl;
    cout << "#Odd numbers = "<< b;
    return 0;
}