#include<iostream>
using namespace std;
int euclidean_recursive(int a, int b){
	if(b==0) return a;
	return gcd(b, a%b);
}
int stein_recursive(int a, int b){
	if(a==0) return b;
	if(b==0) return a;
	if(a%2==0 && b%2==0) return 2*stein(a>>1, b>>1);
	if(a%2==0) return stein(a>>1, b);
	if(b%2==0) return stein(a, b>>1);
	return stein((a>b)?(a-b):(b-a), (a<b)?a:b);
}
int euclidean_iterative(int a, int b){
	int t;
	while(b){
		t=a;
		a=b;
		b=t%b;
	}
	return a;
}
int stein_iterative(int a, int b){
	int c=1, t;
	while(a*b){
		if(a%2==0 && b%2==0){
			a=a>>1;
			b=b>>1;
			c=c<<1;
		}else if(a%2==0){
			a=a>>1;
		}else if(b%2==0){
			b=b>>1;
		}else{
			t=a;
			a=(a>b)?(a-b):(b-a);
			b=(t<b)?t:b;
		}
	}
	if(a==0) c*=b;
	if(b==0) c*=a;
	return c;
}
