#include<stdio.h>
void main(){
	int a[100],i,j,n,pos,element;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	printf("enter the elements of the array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	  printf("the elements of the array are\n");
	  for(i=0;i<n;i++)
	  printf("%d\n",a[i]);
	    printf("enter the position and element to be inserted\n");
            scanf("%d%d",&pos,&element);
            if(pos>n)
	    printf("insertion not possible");
	    else{
	    for(i=n;i>=pos;i--)
	    a[i+1]=a[i];
            a[pos]=element;
	    printf("\nthe elements of the array after insertion are\n");
 	    for(i=0;i<n;i++)
	    printf("%d\n",a[i]);
	    }
printf("\nenter the positon to be deleted\n");
scanf("%d",&pos);
if(pos>n)
printf("deletion not possible");
else{
	a[pos]=a[pos+1];
	for(i=pos+1;i<=n;i++)
	a[i]=a[i+1];
	printf("\nthe elements of the array after deletion are\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
}
printf("\nenter the element to be searched\n");
scanf("%d",&element);
for(i=0;i<n;i++){
	if(a[i]==element)
		printf("\nelement found at position %d",i);
	else
		printf("\nelement not found");
}
printf("\nenter the position and element to be updated\n");
scanf("%d%d",&pos,&element);
if(pos>n)
	printf("update not possible");
	else{
		a[pos]=element;
		printf("\nthe elements of the array after update are\n");
		for(i=0;i<n;i++)
			printf("%d\n",a[i]);
	}
}

