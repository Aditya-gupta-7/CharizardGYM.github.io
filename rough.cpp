#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    float n;
	    cin>>n;
	    int re=-1;
	    float num_1=sqrt(n);
	    for(int i=0;i<=num_1;i++){
	        float rem=n-pow(i,2);
	        float num_2=sqrt(rem);
	        float q=num_2-int(num_2);
	        if(q==0 && num_2>=0){
	            cout<<i<<" "<<num_2<<endl;
	            re=0;
	            break;
	        }
	    }
	    if(re==-1){
	        cout<<-1<<endl;
	    }
	}
	return 0;
}
