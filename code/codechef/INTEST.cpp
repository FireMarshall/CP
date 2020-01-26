#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,k,c = 0,x;
	cin >> n >> k;
    // scanf("%d%d",&n,&k);
	while(n--){
	    cin >> x;
	   //scanf("%d",&x);
	    if(x % k == 0) ++c;
	}
	cout << c << endl;
	return 0;
}
