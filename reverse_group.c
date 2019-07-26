#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int k=3;
    int n=9;
    void swap(int *p, int *q){
        int temp= *p;
        *p=*q;
        *q=temp;
    }
    for(int i=0; i<n; i+=k){
        for(int j=0; j<k/2; j++){
            swap((arr+i+j),(arr+i+k-1-j));
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
