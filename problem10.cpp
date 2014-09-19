
// sum of primes below 2 mil
// prime number seive

#include <iostream>
#include <vector>
using namespace std;

vector<long> erosieve(long);

int main(){
	long sum = 0; //REMEMBER TO USE FUCKING LONGS WHEN ADDING LARGE NUMBERS DUMMY
	vector<long> primelist = erosieve(2000000);
	
	for(vector<long>::iterator it = primelist.begin(); it != primelist.end(); it++){
		sum += *it;
	}	

	cout << sum << endl;
	return 0;
}

vector<long> erosieve(long bound){
	vector<bool> primelist(bound+1, 1);

	primelist[0] = primelist[1] = 0;

	for(int i = 2; i < bound; i++){
		if(primelist[i] == 0) continue;
		int prime = i;
		for(int x = prime+prime; x < bound; x += prime){
			primelist[x] = 0;
		}
	}

	vector<long> primes;
	for(int i = 0; i < bound; i++){
		if(primelist[i] == 1) primes.push_back(i);
	}
	return primes;
	
}
