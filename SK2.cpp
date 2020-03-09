/*
Nama		: Hafidh Akhdan N
NPM			: 140810180061
Kelas		: A
Program		: Studi Kasus 2 "Sequental Search"
*/


#include<iostream>
using namespace std;

int main(){
	int x[5] = {1,2,3,4,5};
	int y = 4;
	int n = sizeof(x)/sizeof(x[0]);
	
	
	int i = 1;
	int idx;
	bool found = false;
	
	while(i<=n && !found){
		if(x[i] == y){
			found = true;
		}else
		i = i+1;
	}
	if(found == true){
		idx = i;
	}else
	idx = 0;
	cout<<"Hasil yang dicari index elemen : "<<idx;
}

