// #include<iostream>
// using namespace std;
// void oddeven(int n){
//     //base case
//     if(n==0){
//         cout<<"0" ;
//     }
//     //recurence rln
//     if(n%2 != 0){
//         cout<<n;
//         oddeven(n-2);
//     }
//     else
//     {
//         oddeven(n-1);
//         cout<<n;

//     }
    
// }
// int main(){
//     int n;
//     cin>>n;
//     oddeven(n);
//     return 0;
// }
#include <iostream>

// void printNumbers(int n) {
//     // Base case: stop recursion when n reaches 0
//     if (n == 0) {
//         std::cout << "0 ";
//         return;
//     }

//     // Recursive case: print odd numbers in decreasing sequence
//     if (n % 2 != 0) {
//         std::cout << n << " ";
//         printNumbers(n - 2);
//     }
//     // Recursive case: print even numbers in increasing sequence
//     else {
//         printNumbers(n - 1);
//         std::cout << n << " ";
//     }
// }

// int main() {
//     int N;
//     std::cout << "Enter a number: ";
//     std::cin >> N;

//     std::cout << "Odd numbers in decreasing sequence: ";
//     printNumbers(N);

//     return 0;
// }
// #include <iostream>
// using namespace std;
// #define int long long

// int32_t main() {

// 	int len;

// 	cin >> len;

// 	int ans = 0;

// 	ans += 2 * len;
// 	ans += (len * (len - 1)) / 2;
// 	ans += (len - 1) * len;
// 	ans += len * (len - 1) * (len - 2) / 2;
// 	ans += 1;
// 	cout << ans << endl;

// 	return 0;
// }
// 
#include<iostream>
using namespace std;
//int cnt=0;
char keys[][10]={"","abc","def","ghi","jkl","mno","pqrs","tuv","wx","yz"};
void keypad(char in[],char out[],int i,int j,int &cnt){
    //base case 
	//int cnt=0;
    if(in[i]== '\0'){
        out[j]='\0';
        cout<<out<<" ";
		cnt++;
		
        return;


    }
    // recursive rln
    int ld=in[i]-'0';
    for(int k=0;keys[ld][k] != '\0';++k){
        out[j]=keys[ld][k];
		
        keypad(in,out,i+1,j+1,cnt);
        
    }
}
int main(){
    char a[100];
	cin>>a;
    char out[100];
	int cnt=0;

    keypad(a,out,0,0,cnt);
	cout<<endl;
	cout<<cnt;
    return 0;
}













