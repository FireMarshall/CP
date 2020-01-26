#include <stdio.h>
#include <limits.h>
#define max(a,b) ((a)>(b)? (a): (b))
#define min(a,b) ((a)<(b)? (a): (b))

int main(void) {
	int t;
	scanf("%i", &t);
	while(t--){
	    int n, m, l, r, k;
	    scanf("%i %i %i %i %i", &n, &m, &k, &l, &r);
	    int c, p;
	    int ans = INT_MAX;
	    for(int i = 0; i < n; ++i){
	        scanf("%i %i", &c, &p);
	        if(c < k){
	            c = min(k, m+c);
	        } else if (c > k){
    	        c = max(k, c-m);
	        }
	        if(c >= l && c <= r){
	            ans = min(ans, p);
	        }
	    }
	    printf("%i\n", (ans == INT_MAX ? -1: ans));
	}
	return 0;
}


