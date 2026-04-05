// Q3: WACP to perform merging operation with two SORTED ARRAY A[] and B[]
//{METHODE 3}

#include<stdio.h>
void marge3(int a[],int n1,int b[],int n2)
{
	int i=0,j=0,k=0,c[30];
	while(i<n1 && j<n2)
	{
		if(a[i]>b[j]){
			c[k] = b[j];
			k++;
			j++;
		}
		else{
			c[k] = a[i];
			k++;
			i++;
		}
	}
	if(j==n2){
		for(i=i;i<n1;i++,k++){
			c[k] = a[i];
		}
	}
	else{
		for(j=j;j<n2;j++,k++){
			c[k] = b[j];
		}
	}
	printf("\nPrinting Marged Array:\n");
	for(k=0;k<=(n1+n2)-1;k++){
		printf("%d ",c[k]);
	}
}
void main(){
	int n1,n2,i,j,a[10],b[10];
	printf("Enter N1:");
	scanf("%d",&n1);
	
	printf("Enter 1st Sorted Array:\n");
	for(i=0;i<n1;i++){
		scanf("%d",&a[i]);
	}
	
	printf("Enter N2:");
	scanf("%d",&n2);
	
	printf("Enter 2nd Sorted Array:\n");
	for(i=0;i<n2;i++){
		scanf("%d",&b[i]);
	}
	marge3(a,n1,b,n2);
}
