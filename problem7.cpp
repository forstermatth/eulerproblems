// prime number seive

#include <vector>
#include <iostream>
using namespace std;

long long primesieve(int);
int main() {

	primesieve(10001);
	return 0;

}


long long primesieve(int num){
	vector<long long> primes;
	primes.push_back(2);
	for(int i = 2; ; i++){
		bool isprime = true; //assume
		for(vector<long long>::iterator it = primes.begin(); it != primes.end(); it++){
			if(i%*it == 0) isprime = false;
		}	
		if(isprime) primes.push_back(i);
		if(primes.size() == num) break;
	}	
	cout << primes.back();
	return primes.back();
}
