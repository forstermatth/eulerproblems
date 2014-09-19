// Special Pythagorean Triplet
#include <iostream>
using namespace std;

int findtripleproductof(int);

int main(){
	cout << findtripleproductof(1000);
	return 0;
}

int findtripleproductof(int num){
	int s = num;
	int a, b, c;
	a = b = c = 0;

	//we know a < b < c
	// a < s/3, a < b < s/2
	// c = s - b - a

	for( ; a < s / 3; a++){
		for(b = a; b < s / 2; b++){
			c = s - b - a;
			if(a*a + b*b == c*c) return a*b*c;
		}
	}

}
