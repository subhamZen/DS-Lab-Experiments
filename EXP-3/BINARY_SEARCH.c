// Q2: WACP to search an element in an existing array using BINARY SEARCH technique

#include<stdio.h>
void Bsearch(int a[],int n,int x)
{
	int LB,UB,MID;
	LB=0;
	UB=n-1;
	while(LB<=UB){
		MID = (LB + UB) / 2;
		if(x == a[MID]){
			printf("ELEMENT IS FOUND IN %d LOCATION",MID);
			break;
		}
		else if(x>a[MID]){
			LB = MID + 1;
		}
		else{
			UB = MID - 1;
		}
		if(LB > UB){
			printf("ELEMENT IS NOT FOUND");
		}
	}
}
void main(){
	int a[10],n,x,i;
	printf("Enter Size:");
	scanf("%d",&n);
	
	printf("Enter Sorted Array Elements:\n");
	for(i = 0;i < n ;i++){
		scanf("%d",&a[i]);
	}
	
	printf("Enter value:");
	scanf("%d",&x);
	
	Bsearch(a,n,x);
}
