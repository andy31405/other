#include<iostream>
#include<vector>
#define N (100)//print all prime numbers < N
using namespace std;
int main(){
	vector<int> prime;
	bool c;
	prime.push_back(2);
	prime.push_back(3);
	prime.push_back(5);
	prime.push_back(7);
	for(int i=12;(i-1)<=N;i+=6){
		c=false;
		for(int j=2;j<prime.size();j++){
			if(prime[j]*prime[j]>(i-1)) break;
			if((i-1)%prime[j]==0){
				c=true;
				break;
			}
		}
		if(!c) prime.push_back(i-1);
		c=false;
		for(int j=2;j<prime.size();j++){
			if(prime[j]*prime[j]>(i+1)) break;
			if((i+1)%prime[j]==0){
				c=true;
				break;
			}
		}
		if(!c) prime.push_back(i+1);
	}
	for(int i=0;i<prime.size();i++){
		cout<<prime[i]<<endl;
	}
	return 0;
}
