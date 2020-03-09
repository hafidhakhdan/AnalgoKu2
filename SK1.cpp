/*
Nama		: Hafidh Akhdan N
NPM			: 140810180061
Kelas		: A
Program		: Studi Kasus 1 "Pencarian nilai maksimal"
*/

#include<iostream>
using namespace std;

int main(){
	int x[5]={31,45,100,4,35};
	int n= sizeof(x)/sizeof(x[0]);
	
	int maks = x[0];
	int i= 2;
	
	while (i<= n){
		if(x[i] > maks){
			maks = x[i];
		}
			i=i+1;
	}
	
	cout<<"Nilai maksimum adalah : "<<maks;
	
}

