/*
  Name : Wan Faruq Jazli bin Wan Ahmad Jaffry
  Matric Number : A25CS0372
  Date : 11/11/2025
  Set : 2
*/
#include <iostream>
using namespace std;

int main () {
    int sum = 0;
    int num ;
    cout << "Enter an integer number: ";
    cin >> num ;
    while (num != 0){

        int digit = num % 10;
        cout << digit;
        sum = sum + digit;
        num = num / 10;
		
		if ( num != 0){
			cout << " + " ;
		}
    }	
    cout << " = " << sum << endl;

    if (sum % 2 == 0) {
        cout << sum << " is even number " << endl;
    } else {
        cout << sum << " is odd number " << endl;
    }
	if ((sum % 5 == 0) && (sum % 4 == 0)){
		cout << sum << " is multiple of 5 and 4" << endl;
	}else if (sum % 5 == 0){
    	cout << sum << " is multiple of 5" << endl;
    }else if (sum % 4 == 0){
      	cout << sum << " is multiple of 4" << endl;
   	}
    return 0;
}
    

    


