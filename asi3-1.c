/////write a program which one number from user and print that number of even number on screen


#include<stdio.h>
void printeven(int ino)
{
	if(ino<=0)
	{
		return;
	}
	while((ino%2)==0)
	{
		ino++;
	printf("printeven numbers:%d",ino);
}
}

int main()
{
	int ivalue=0;
	printf("enter number\n");
	scanf("%d",&ivalue);
	printeven(ivalue);
	return 0;
}