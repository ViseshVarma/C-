#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    
	    if(x < 100) cout << "Easy" << endl;
	    else if(x < 200) cout << "Medium" << endl;
	    else cout << "Hard" << endl;
	}
	
	return 0;
}
