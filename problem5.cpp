// Smallest Multiple

// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder

// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20.

// Has to be a multple of 2, 3, 5, 7, 11, 13, 17, 19
// whats the lowest common multiple?
//LCM(a,b) = (a/(gcd(a,b))*b

// XXX CURRENTLY WRONG


#include <iostream>
#include <numeric>
#include <cmath>
#include <climits>
using namespace std;

int lcd(int, int);
int gcd(int, int);
int main() {
	cout << lcd(20, lcd(19, lcd(18, lcd(17, lcd(16, lcd(15, lcd(14, lcd(13, lcd(12, lcd(11, lcd(10, lcd(9, lcd(8, lcd(7, lcd(6, lcd(5, lcd(4, lcd(3, lcd(2,1))))))))))))))))))) << endl;
	return 0;
}


int gcd (int a, int b) {
	cout << "\nFINDING GREATEST of: " << a << "," << b << endl;
	int temp = 0;
	//if(b>a) {temp = a; a = b; b = temp;}
	if ( b == 0 ) return a;
	return gcd (b, a%b); // go down one step in the ecd alg
	// a%b == a-b but faster (removes multiples)
}

int lcd(int a, int b) {
	cout << "\nFINDING LOWEST of: " << a << "," << b << endl;
	return (a*b) / gcd(a,b);
}

