#include<iostream>
using namespace std;
int main(){
	int n;
	cin >>n;
	int a[1000];
	for(int i = 0 ; i <n;i++){
		cin >>a[i]; 
	} for(int i = 0; i < n;i++){
		if(a[i]>0){
		 cout << a[i] << " "; 
		}
	} cout << endl ;
	for(int i = 0 ; i < n ; i++){
		if(a[i] < 0){
			cout  <<a[i]<< " "; 
		} 
	} 
} 
