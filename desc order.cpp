/* yildiz
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
   
	vector<int> v = { 5,2,4,7,8,1 };
	sort(v.rbegin(), v.rend());
	for (auto it : v)
	{
		cout << it << "\n";
	}
	
}

