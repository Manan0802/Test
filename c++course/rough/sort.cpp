#include<iostream>
using namespace std;
void bubblesort(int a[],int n){
    
    for(int j=0;j<n-1;j++){
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                swap(a[i],a[i+1]);
            }
        }

}
}
int main () {
	int n,a[1000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int b[1000];
	for(int i=0;i<n;i++){
		b[i]=a[i]*a[i];

	}
	bubblesort( b,n);
	
	for(int j=0;j<n;j++){
		cout<<b[j]<<" ";
	}
	return 0;
}


	