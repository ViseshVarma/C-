#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin >> a[i];
	    }
	    sort(a, a+n);
	    
	    for(int i=0; i<k; i++){
	        if(a[i]<0){
	            a[i] *= -1;
	        }
	    }
	    
	    int c=0;
	    for(int i=0; i<n; i++){
	        if(a[i] > 0){
	            c += a[i];
	        }
	    }
        cout << c << endl;
	}
	
	return 0;
}
