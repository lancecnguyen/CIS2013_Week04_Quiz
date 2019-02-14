#include <iostream>
using namespace std;

int main (){
	int numb;
	for (numb = 1; numb <= 100; numb++){
		if ((numb % 3) == 0 && (numb % 5) == 0)
			cout << "FizzBuzz" << endl;
		else if (numb % 5 == 0)
			cout << "Buzz" << endl;
		else if (numb % 3 == 0)
			cout << "Fizz" << endl;
		else
			cout << numb << endl;
		
	}

return 0;
}