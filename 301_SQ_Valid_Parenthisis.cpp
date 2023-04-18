#include<iostream>
#include<stack>
using namespace std;

bool check(string x) {
	// calculate size
	int n=x.size();

	// create stack
	stack<char> s;

	for(int i=0; i<n; i++) {

		// if there is any close paranthese & stack is empty
		if((x[i]==')' || x[i]=='}' || x[i]==']') && s.empty())
            return false;
            
        // if any open paran. then push in stack    
        if(x[i]=='(' || x[i]=='{' || x[i]=='[') {
                s.push(x[i]);
        }
        // check if any opposite bracket is present at top of stack
        else {
             	if(x[i]==')'){
                if(s.top()=='('  && !s.empty())
                    s.pop();
                else 
                    return false;      
            }
            else if(x[i]=='}'){
                if(s.top()=='{'  && !s.empty())
                    s.pop();
                else 
                    return false;
            }
            else{
                if(s.top()=='['  && !s.empty())
                    s.pop();
                else 
                    return false;
            }
            
          }	    
            
        }
        return true;
	}


int main() {
	string s;
	s="[{()}]";

	cout<<check(s);

	return 0;
}
