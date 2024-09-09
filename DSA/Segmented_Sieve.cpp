#include<iostream>
#include<vector>
#include <cmath>
using namespace std;
const int N=1000000;
bool sieve[N+1];
void createSieve(bool sieve[N+1],int N){
    for(int i=2;i<N;i++){
        sieve[i]=true;
    }
    for(int i=2;i*i<=N;i++){   
            if(sieve[i]==true){
            for(int j=i*i;j<=N;j++){
                sieve[j]=false;
            }
        }
}
}
vector<int> generate_primes(int N){
    vector<int>ds;
    for(int i=2;i<=N;i++){
        if(sieve[i]==true){
            ds.push_back(i);
        }
    }
    return ds;
}
//O(!0^6)
int main() {
    createSieve(sieve,N);
    int t;
    cout<<"Enter number of test cases:"<<endl;
    cin>>t;
    while (t--)
    {
        int l,r;
        cout<<"Enter the lower and upper limit of number in beteween which u want to find prime number"<<endl;
        cin>>l>>r;
        //O(10^6)
        //step1:TO generate all prime till sqrt(r)
        vector<int>prime=generate_primes(sqrt(r));
        //step2:create a dummy array of size e-l+1
        //and make everyone as 1
        int dummy[r-l+1];
        for(int i=0;i<r-l+1;i++){
            //O(10^6)
            dummy[i]=1;
        }
        //step3: for all prime number make it smultiple as false
        for(auto pr:prime){
            //O(10^4)
            int first_multiple=(l/pr)*pr;
            if(first_multiple<l){
                first_multiple=first_multiple*pr;
            }
            for(int j=max(first_multiple,pr*pr);j<=r;j+=pr){
            dummy[j-l]=0;
            }
        }
    
        //step4:get all primes
        for(int i=l;i<=r;i++){
            if(dummy[i-l]==1){
                cout<<i<<" ";
            }
        }
        cout<<endl;
        }
    
    return 0;
}
