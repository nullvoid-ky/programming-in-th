#include<bits/stdc++.h>
#define GAP " "
#define EL "\n"
using namespace std;

int main(){
	int n, num;
	set<int> s;
	cin >> n;
	for(int i = 0; i < n ;i++){
		cin >> num;
		s.insert(num);
	}
	cout << *s.begin() << EL << *s.rbegin() << EL;
}
