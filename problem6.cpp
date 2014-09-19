// Sum square difference

/* sum of k = (n(n+1))/2
   sum of k^2 = (n(n+1)(2n+1))/6
*/

#include <iostream>
using namespace std;

int main() {
	long sum = ((100*(100+1))/2);
	long squaredsum = (100*(100+1)*((2*100)+1))/6;

	cout << squaredsum << " - " << sum << " = ";
	cout << sum*sum - squaredsum << endl;
	return 0;
}
