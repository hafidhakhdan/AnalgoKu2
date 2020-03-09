/*
Nama		: Hafidh Akhdan N
NPM			: 140810180061
Kelas		: A
Program		: Studi Kasus 3 "Binary Search"
*/

#include<iostream>
using namespace std;

int main(){
	int x[5]={1,2,3,4,5};
	int idx; 
	int y = 5;
	int n = sizeof(x)/sizeof(x[0]);
	
	int i, j, mid;
	bool found;
	
	i = 1;
	j = n;
	found = false;
	while(!found && i<= j){
		mid = (i + j)/2;
		if (x[mid] == y){
			found = true;
		}
		else if(x[mid] < y){
			i = mid+1;
		}
		else{
			j = mid - 1; 
		}
		
		
	}
	if(found == true){
		idx=mid;
	}else
	idx= 0;
	
	cout<<"Hasil yang dicari indeks elemen : "<<idx;

}

