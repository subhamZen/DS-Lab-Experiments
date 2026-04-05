// Q1: WACP to input an array with n element and perform sorting operation by
//using BUBBLE SORT technique

#include<stdio.h>
void Bsort(int a[],int n)
{
	int i,j,c;
	for(j=1;j<=n-1;j++){
		for(i=0;i<=n-1-j;i++){
			if(a[i]>a[i+1]){
				c = a[i];
				a[i] = a[i+1];
				a[i+1] = c;
			}
		}
	}
	printf("Printing The Result Array:\n");
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
}
void main(){
	int a[10],n,i;
	printf("Enter Size:");
	scanf("%d",&n);
	
	printf("Enter Array Elements:\n");
	for(i = 0;i < n ;i++){
		scanf("%d",&a[i]);
	}
	Bsort(a,n);
}
