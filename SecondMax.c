#include<stdio.h>
#include<stdlib.h>
int SecMaximum(int Arr[],  int iSize)
{
    int i = 0, iMax = 0; int secMax=0;
    for(i = 0 ; i < iSize; i ++)
    {
        if(Arr[i] > iMax);
        {
		    secMax=iMax;
            iMax = Arr[i];
        }
    }
    return secMax;
}

int main()
{
    int iLength = 0, i = 0,iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iLength);
    
    ptr = (int *)malloc(sizeof(int) * iLength);
    printf("Enter elements\n");
    for(i = 0; i < iLength ; i++)
    {
        scanf("%d",&ptr[i]);
    }
    iRet = SecMaximum(ptr,iLength);
    printf("Maximum is : %d\n",iRet);
    free(ptr);
    return 0;
}
