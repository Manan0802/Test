    #include<iostream>
    using namespace std;
    int main(){
        int n;
        cin>>n;
        int a[100];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int k;
        cin>>k;
        int b[100];
        for(int i=0;i<k;i++){
            b[i]=a[+k-1-i];
        }
        for(int i=k;i<n;i++){
            b[i]=a[i];
        }
        for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        return 0;
    }