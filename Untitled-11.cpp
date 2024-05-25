#include<iostream>

using namespace std;

int set(int a,int b,int c,int d,int e) {
    return (a + b + c + d + e) / 5;
}

int main(){
    int a,b,c,d,e,avrage;
    cout<<"Enter 5 numbers: ";
    cin>>a>>b>>c>>d>>e;
    avrage=set(a,b,c,d,e);
    cout<<"Average: "<<avrage<<endl;
    return 0;
}