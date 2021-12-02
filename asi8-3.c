#include<stdio.h>
int rangesum(int)
int main()
{
	int ivalue1=0;
	int ivalue2=0;
	iret=0;
	
	printf("enter starting point\n");
	scanf("%d\n",&ivalue1);
	
	printf("enter the second point");
	scanf("%d",&ivalue2);
	
	rangedisplay(ivalue1,ivalue2);
	printf("addition is %d",iret);
	
	
	return 0;
}

int rangesum(int istart,int iend)

	int icnt=0;
	int isum=0;
	
	for(icnt=istart;icnt<iend;icnt++)
	{
	   isum=isum+icnt;
	 
	}
	
	return isum;
}