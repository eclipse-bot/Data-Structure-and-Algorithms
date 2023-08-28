#include<iostream>
using namespace std;
void swap(int &,int &);
int main(){
    const int num = 5;
    int a[num];
    for(int i=0;i<num;i++){
        cin>>a[i];
    }
    for(int i=0;i<num;i++){
        for(int j=i;j>0;j--){
            if(a[j]<a[j-1]){
                swap(a[j],a[j-1]);
            }
        }
    }
    for(int i=0;i<num;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
void swap(int &a,int &b){
    int n = a;
    a = b;
    b = n;
}
