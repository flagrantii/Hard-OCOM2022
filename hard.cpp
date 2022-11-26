#include<bits/stdc++.h>
using namespace std;
main(){
	int n,m,max=-100000,min=100000;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m;
		
		if(m>max){
			max=m;
		}
		if(m<min){
			min=m;
		}
	}
	cout<<(max*2)+min;
}
