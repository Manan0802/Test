#include<iostream>
using namespace std;
// array  sorted hooni chaaiye 
void bubbleSort(int a[], int n) {
	for (int j = 0 ; j < n - 1 ; j++) {
		for (int i = 0; i < n - 1; ++i)
		{
			if (a[i] > a[i + 1]) {
				swap(a[i], a[i + 1]);
			}
		}

	}
}
void rose(int a[],int n,int money){
    bubbleSort(a,n);
    int i=0;
    int j=n-1;
    int rose1=-1;//intialy not exit
    int rose2=-1;
    while(i>j){
    if(a[i]+a[j]>money){
        j--;
    }
    else if (a[i]+a[j]== money){
        rose1=a[i];
        rose2=a[j];
        i++;
        j--;
    }
    else{
        i++;
    }
    }
    cout<<"Deepak should buy roses whose prices are "<<rose1<<" and "<<rose2<<endl;
}
    

int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int a[100000];
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin>>a[i];
        }
        int money;
        cin>>money;
        rose(a,n,money);
        t--;

        
    }
    return 0;

}