#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;
const int N = 105;

int t, n, w[N];

void init(){
	int T;
	scanf("%d",&T);
	for(int t=1; t<=T; t++){
		scanf("%d",&n);
		for(int i = 1; i <= n; i++){
			scanf("%d",&w[i]);
		}
		sort(w + 1, w + 1 + n);
		int i = 0, j = n, res = 0;
		while(1){
			i += (int)ceil(50.0 / w[j]) - 1;
			if(i >= j) break;
			res++;
			j--; 
		}
		printf("Case #%d: %d\n",t,res);
	}
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	init();
	return 0;
}