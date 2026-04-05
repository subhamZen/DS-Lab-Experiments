// Q2: WACP to input an array with n element and perform sorting operation by
//using SELECTION SORT technique

#include<stdio.h>
void Ssort(int a[],int n)
{
	int i,j,c;
	for(i=0;i<=n-2;i++){
		for(j=i+1;j<=n-1;j++){
			if(a[i]>a[j]){
				c = a[i];
				a[i] = a[j];
				a[j] = c;
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
	Ssort(a,n);
}
