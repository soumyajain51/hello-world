#include <iostream>
using namespace std;
int main() {
    int n,i=1;
    cin>>n;
    if (n<=1000){
        while(i<=(n/2+1)){
            int j=(n/2+1);
            while(j<=i){
                cout<<"*";
                j=j-1;



            }
            cout<<endl;
            i++;


        }
    }

}

