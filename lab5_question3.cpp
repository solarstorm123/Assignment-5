#include<iostream>
using namespace std;

float klarge(float array[], int length, int k) {
	bool flag=true;
	float temp;
	while(flag) {
		flag = false;
		for (int i=0; i < length; ++i) {
			if (array[i+1] > array[i]) {
				temp = array[i+1];
				array[i+1] = array[i];
				array[i] = temp;
				flag = true;
			}
		}
	}


	return array[k-1];
}

float ksmall(float array[], int length, int k) {
	bool flag=true;
	float temp;
	while(flag) {
		flag = false;
		for (int i=0; i < length; ++i) {
			if (array[i+1] > array[i]) {
				temp = array[i+1];
				array[i+1] = array[i];
				array[i] = temp;
				flag = true;
			}
		}
	}

	return array[length-k];
}

int main() {
    float n,k,arr[50];
	cout<<"Enter the number of elements in array : ";
	cin>>n;
	for(int i=0;i<n;i++)
    {
        cout<<"Array "<<"["<<i<<"]"<<" : ";
        cin>>arr[i];
    }
    cout<<"\nWhich kth largest and smallest element you want?"<<endl;
    cin>>k;
	cout <<"kth largest element is : "<< klarge(arr, n, k) << endl;
	cout <<"kth smallest element is : "<< ksmall (arr, n, k) << endl;

	return 0;
}
