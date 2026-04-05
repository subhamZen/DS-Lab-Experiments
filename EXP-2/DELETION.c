// Q2: WACP to delete an element from an existing array from any location

#include<stdio.h>
void deletion(int a[],int n,int loc)
{
	int i;
	if(loc == n-1){
		n--;
	}
	else{
		for(i=loc;i<=n-2;i++){
			a[i] = a[i+1];
		}
		n--;
	}
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
	
	deletion(a,n,loc);
}
