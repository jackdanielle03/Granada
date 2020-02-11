
#include<iostream>

using namespace std;

int first(int p, int q);
int scnd(int p, int q);

main(){
	
	int p,q;
	cout<< "Enter 1 for true and 0 for false";
	cout<<"\n\n	input the value of P";
	cin>>p;
	cout<<"\n	input the value of Q";
	cin>>q;
	
	if((first(p,q)==1 && scnd(p,q)==1)||(first(p,q)==0 && scnd(p,q)==0))
	
		cout<<"This statement -(p or q) <-> (-p ^-q) will always be true";
	
	
	
	
	
}

	int first(int p, int q){
		int a=0;
		
		if(q==1 && p==1) a=0;
		else if(q==1 ||  p==0) a=0;
		else if(q==0 ||  p==1) a=0;
		else a=1;
	
		return a;
	}
	
	int scnd(int p, int q){
		int a=0;
		
		if(p==1) p=0;
		else if(p==0) p=1;
		
		if(q==1) q=0;
		else if(q==0) q=0;
		
		
		return a;		
	}
