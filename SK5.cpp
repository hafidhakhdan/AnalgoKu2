/*
Nama		: Hafidh Akhdan N
NPM			: 140810180061
Kelas		: A
Program		: Studi Kasus 5 "Selection Sort"
*/

#include<iostream>
using namespace std;

int main(){
	int x[5] = {1,7,3,9,5};
	int n = sizeof(x)/sizeof(x[0]);
	
	int i, j, imaks, temp;
	
	for ( i=2 ; i<n; i++){
		imaks = 1;
		for( j=2; j<i; j++){
			if ( x[j] > x[imaks]){
				imaks = j;
			}
		}
		temp = x[i];
		x[i] = x[imaks];
		x[imaks] = temp; 
	}
	for (int i=0; i<n; i++){
		cout<<x[i]<<" ";
	}
}

