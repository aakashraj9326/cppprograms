#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number: ";
	cin >> n;

	if(n<=1){
		cout << "Not prime";
	return 0;
	}
	for(int i=2; i<n; i++){
	   if(n % i == 0){
		cout << "Not Prime";
		return 0;
	}
	}

	cout<<"prime";
	return 0;
}
		
	
