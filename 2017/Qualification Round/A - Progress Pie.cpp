#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;
const int N = 1000005;

double square(double x){
	return x * x;
}

double dist(int x1, int y1, int x2, int y2){
	return sqrt( square(x1 - x2) + square(y1 - y2));
}

double angel(double a, double b, double c){
	double v = (square(a) + square(b) - square(c)) / (2 * a * b);
	return acos(v) * 180 / acos(-1);
}

int p, x, y;

void init(){
	int T;
	scanf("%d",&T);
	for(int t=1; t<=T; t++){
		scanf("%d%d%d",&p,&x,&y);
		double a = dist(50, 50, 50, 100);
		double b = dist(50, 50, x, y);
		double c = dist(x, y, 50, 100);
		double p1 = angel(a, b, c);
		if(x < 50) p1 = 360 - p1;
		if((p1 / 360 >= p / 100.0) or b > 50.0) printf("Case #%d: white\n", t);
		else printf("Case #%d: black\n",t);
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