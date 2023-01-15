#include "functions.h"

int fib(int k){
    if(k==1||k==2){
        return 1;
    }
    int first=1;
    int second=1;
   
    for(int i=3;i<=k;i++){
        int tmp=second;
        second+=first;
        first=tmp;
    }

    return second;
}

bool pwr_of_two(int num) {
	return num && !(num & (num - 1));
}

int sum_of_1(int k){
    int sum = 0;
    while(k>0){
        if(k%2==1){
            sum++;
        }
        k=k/2;
    }
    return sum;
}

bool prime(int k){
    if(k == 1 || k%2==0){
        return false;
    }
    for(int i = 3; i<k/2;i+=2){
        if(k%i==0){
            return false;
        }
    }
    return true;
}
