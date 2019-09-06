#include <iostream>
using namespace std;

void Order(int s[],int n);

int main() {
    int n;
    cin>>n;
    int p[n];
    for(int i=0;i<n;i++)
        cin>>p[i];
    
    Order(p,n);
    for(int i=0;i<n-1;i++)
        cout<<p[i]<<" ";
    cout<<p[n-1]<<endl;
}

void Order(int s[],int n){
    for(int i=0;i<n;i++){
        int min=s[i];
        int minnum=i;
        for(int j=i+1;j<n;j++){
            if(s[j]<min){
                min=s[j];
                minnum=j;
            }
        }
        s[minnum]=s[i];
        s[i]=min;
    }
}
