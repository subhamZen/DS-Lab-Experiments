// Q1: WACP to perform merging operation with two array A[] --> B[]
//{METHODE 1}

#include<stdio.h>
void marge1(int a[],int n1,int b[],int n2)
{
	int c[20],i,j;
	for(i=0;i<n1;i++){
			c[i] = a[i];
		}
	for(i=n1,j=0;j<n2;i++,j++){
			c[i] = b[j];
		}
	printf("Printing Marged Array:\n");
	for(i=0;i<n1+n2;i++){
		printf("%d ",c[i]);
	}
}
void main(){
	int n1,n2,i,j,a[10],b[10];
	printf("Enter N1:");
	scanf("%d",&n1);
	
	printf("Enter 1st Array:\n");
	for(i=0;i<n1;i++){
		scanf("%d",&a[i]);
	}
	
	printf("Enter N2:");
	scanf("%d",&n2);
	
	printf("Enter 2nd Array:\n");
	for(i=0;i<n2;i++){
		scanf("%d",&b[i]);
	}
	marge1(a,n1,b,n2);
}
