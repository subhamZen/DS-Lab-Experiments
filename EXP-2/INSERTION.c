// Q1: WACP to insert a new element in an existing array in any location

#include<stdio.h>
void insertion(int a[],int n,int loc,int x)
{
	int i;
	if(loc == n){
		a[i] = x;
	}
	else{
		for(i = n;i>=loc+1;i--){
			a[i] = a[i-1];
		}
		a[loc] = x;
	}
	n++;
	printf("The Result Array Is:\n");
	for(i = 0;i<n;i++){
		printf("%d\n",a[i]);
	}
}
void main(){
	int a[10],n,loc,x,i;
	printf("Enter Size:");
	scanf("%d",&n);
	
	printf("Enter Array Elements:\n");
	for(i = 0;i < n ;i++){
		scanf("%d",&a[i]);
	}
	
	printf("Enter location:");
	scanf("%d",&loc);
	
	printf("Enter value:");
	scanf("%d",&x);
	
	insert(a,n,loc,x);
}
