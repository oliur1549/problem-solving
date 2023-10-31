/*
#include <iostream>
using namespace std;

int main() {

int n,x, reverse_number = 0, remainder;
  cout << "Enter an integer: ";
  cin >> x;

    n = x;
    while(x > 0){
        remainder = x % 10;
        reverse_number = reverse_number * 10 + remainder;
        x /= 10;
    }
    if(reverse_number == n){
        cout << "Reversed Number = " << reverse_number;
    }
    else{
        cout << "Not Reversed Number = " << reverse_number;
    }

  

  return 0;
}
*/
