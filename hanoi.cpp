#include<iostream>
using namespace std;
void hanoi(const int &n, const char &src, const char &buf, const char &dst){
	cout<<"hanoi("<<n<<", "<<src<<", "<<buf<<", "<<dst<<")"<<endl;
	if(n==1){
		cout<<"move disk 1 from "<<src<<" to "<<dst<<endl;
	}else{
		hanoi(n-1, src, dst, buf);
		cout<<"move disk "<<n<<" from "<<src<<" to "<<dst<<endl;
		hanoi(n-1, buf, src, dst);
	}
}
int main(){
	int n;
	while(true){
		cout<<"enter a number: ";
		cin>>n;
		hanoi(n, 'A', 'B', 'C');
	}
	return 0;
}
