#include<iostream>
using namespace std;
void swap(int &,int &);
int main(){
    const int num=5;
    int a[num];
    for(int i=0;i<num;i++){
        cin>>a[i];
    }
    for(int i=0;i<num-1;i++){
        for(int j=0;j<num-1-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    for(int i=0;i<num;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
void swap(int &a,int &b){
    int i=a;
    a=b;
    b=i;
}