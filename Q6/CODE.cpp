#include<iostream>
using namespace std;

int fibo(int);
void fibonaciiSeries(int);

int  fibo(int num ){
    if (num==1){
        return 1;
    }
    else if(num==0){
        return 0;
    }
    else{
        return fibo(num-1) + fibo(num-2);
    }
}
void fibonaciiSeries(int n){
    for (int i = 0; i < n; i++){
        cout<<fibo(i)<<" ";
    }
}

int main(){   

    cout<<"finonacii Series"<<endl;
    fibonaciiSeries(7);

    return 0;
}
