// Q3: WACP to search an element in an existing array using LINEAR SEARCH technique

#include<stdio.h>
#include "process.h"
void Lsearch(int a[],int n,int x)
{
	int i;
	for(i=0;i<n;i++){
		if(x == a[i]){
			printf("ELEMENT FOUND in %d location",i);
			exit(0);
		}
		else
			continue;
	}
	if(x != a[i]){
		printf("ELEMENT NOT FOUND");
	}
}
void main(){
	int a[10],n,x,i;
	printf("Enter Size:");
	scanf("%d",&n);
	
	printf("Enter Array Elements:\n");
	for(i = 0;i < n ;i++){
		scanf("%d",&a[i]);
	}
	
	printf("Enter value:");
	scanf("%d",&x);
	
	Lsearch(a,n,x);
}
