// Multiples of 3 and 5

// If we list all the natural numbers blow 10 that are mutliples of 3 and 5, we get 3, 5, 6 and 9. The sum is 23.
// Find the sum of all the multiples of 3 or 5 below 1000

#include <iostream>
using namespace std;
int main(){

	int sum = 0;
	for(int i = 0; i < 1000; i++){
		if(i % 3 == 0 || i % 5 == 0) sum += i; 
	}

	cout << sum << endl;
	return 0;
}
