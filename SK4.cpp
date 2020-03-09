/*
Nama		: Hafidh Akhdan N
NPM			: 140810180061
Kelas		: A
Program		: Studi Kasus 4 "Insertion Sort"
*/

#include<iostream>
using namespace std;

int main(){
	int x[5]={2,3,1,5,4};
	int n = sizeof(x)/sizeof(x[0]);
	
	int i , j, insert;
	
	for(i=1; i<n; i++){
		insert= x[i];
		j = i - 1;
		
		while(j >= 0 && x[j] > insert){
			x[j+1] = x[j];
			j = j - 1; 
		}
		x[j+1] = insert;
	}
	for(j = 0; j < n ; j++ ){
			cout<<x[j]<<" ";
	}
}

