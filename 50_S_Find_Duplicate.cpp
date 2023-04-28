#include<iostream>
#include<set>
using namespace std;

int main() {
	string s;
	s = "abcdacd";

	int n = s.size();

	set<char> st;

	cout << "Repating characters are :" << endl;

	for(int i=0; i<n; i++) {
		int size = st.size();

		st.insert(s[i]);
		// if charter already present then size remain same
		if(st.size()==size){
			cout << s[i] << " ";
		}
	}
	return 0;
}