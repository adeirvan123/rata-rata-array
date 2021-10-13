#include<iostream>
#include<algorithm>
using namespace std;

void printArray(int nama[], int a) {
	for (int i=0; i < a; i++) {
		cout<<nama[i]<<" ";
	}
}

int main() {
	float hasil;
	int tinggi_badan[10] = {175, 165, 166, 157, 184, 156, 163, 176, 171, 169};
	
	for(int i=0; i<sizeof(tinggi_badan)/sizeof(int); i++) {
		 hasil += tinggi_badan[i];
	}
	printArray(tinggi_badan, 10);
		
	cout<<endl;
	cout<<"Total : "<<hasil<<endl;
	
	cout<<"Rata - Rata Adalah : ";
	hasil /= (sizeof(tinggi_badan)/sizeof(int));
	cout<<hasil;
	
}

