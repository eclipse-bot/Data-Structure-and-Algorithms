#include<iostream>
using namespace std;
void swap(int &a,int &b);
int main(){
    int a[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    for(int i=0;i<4;i++){
        int count=i;
        for(int j=i+1;j<5;j++){
            if(a[j]<a[count]){
                count=j;
            }
        }
        swap(a[i],a[count]);
    }
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
void swap(int &a,int &b){
//    a=a^b;
//    b=a^b;
//    a=a^b;
    int j=a;
    a=b;
    b=j;
}