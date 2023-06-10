#include <iostream>
using namespace std;

int main(){
	int size;
	cout<<"Enter size of array: ";
	cin>>size;
	int values[size];
	for(int i=0; i<size; i++){
	cout<<"Enter value "<<i+1<<": ";
	cin>>values[i];	
	}
	
	int min = values[0];
	int max = values[0];
	
	for(int i=0; i<size; i++){
		if (values[i] <= min){
			min = values[i];
		}
	if(values[i] >= max){
		max = values[i];
	}	
	}
	cout<<"Minimum value in array is: "<<min<<endl;
	cout<<"maximum value in array is: "<<max<<endl;
}
