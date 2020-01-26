#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
    vector<long long> v(n);
	for(int i = 0; i < n; ++i) cin >> v[i];
	sort(v.begin(),v.end());
	int sets = pow(2,n);
	long long c = 0;
	for(long long i = 1; i < sets; ++i){
	    if( __builtin_popcountll(i) == 1) continue;
		long long lsum = 0, rsum = 0;
        for(int j = n-1; j >= 0 ; --j){
            if( i & ( 1 << j ) )
				if(lsum < rsum ) lsum += v[j];
				else rsum += v[j];
		}
		if(rsum == lsum) ++c;
    }
	cout << c <<endl;
	return 0;
}

