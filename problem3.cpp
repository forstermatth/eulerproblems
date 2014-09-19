/* Largest Prime Factor
	The prime factors of 13195 are 5, 7, 13, 29
	What is the largest prime factor of the number 600851475143?
*/

// GCD = last number of prime factorization
// start dividing and writing the results.

#include <iostream>
#include <vector>
using namespace std;

long long largestprime(long long);

int main(){
	long long n = 600851475143;
	cout << largestprime(n);
}

long long largestprime(long long n){
	long long divisor = 0;
	//first prime is 2
	for(int i = 2; i*i <= n; i++){ //check up to sqrt(n). if the last numbe r is higher than i*i, then it will be reflected in the remainder stored in n
		//is n divisible by i?
		if(n%i == 0){
			divisor = i; //yes
			while(n%i == 0){ //reduce n until i is not divisor
				n /= i; // this removes all smaller factors
			}
		}
		//done - divisor the last i to divide into n
		// if n is not 1 (n/i) then what?
	}
	if(n != 1) return n; //number is higher than i*i
	return divisor;
	
}
