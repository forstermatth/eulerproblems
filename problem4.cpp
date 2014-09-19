// Largest Palindrome Product

/* A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is:
	9009 = 91 X 99
Find the largest palindrome made from the product of two 3-digit numbers
*/

#include <iostream>
#include <string>
using namespace std;

string reverse(string);
int main(){
	int palindrome = 0;
	for(int x = 999; x >= 100; x--){
		for(int y = 999; y >= 100; y--){
			int n = x*y;
			string nn = to_string(n);
			if(nn == reverse(nn)){
				if(n > palindrome) palindrome = n;
			 }
		}
	}
	cout << palindrome;
	return 0;
}

//reverse exists inside <algorithm> but practice.
string reverse(string init){

	char temp;
	int i = 0;
	int y = init.length()-1;
	for(; i < y ; i++, y--){
		temp = init[y];
		init[y] = init[i];
		init[i] = temp;
	} 
	return init;
}
