#include <stdio.h>
int A[] = {9,8,7,6,5,4,3,2,1,0,-1}; 

//int A[] = {1,2,3,4,6,5,7,8,9};
void BubbleSort(int A[], int N)
{
	
	for (int i=N-1; i>0; i--)
	{   
		int flag = 0;
		for (int j=1; j<N; j++)
		{	
			if(A[j-1] > A[j])
			{	
				int temp = 0;
				temp = A[j-1];
				A[j-1] = A[j];
				A[j] = temp; 
				flag = 1;
			}

		}
	}	
//	printf("Resout : %d", A[i]);
}


int main ()
{
	int len = sizeof(A)/sizeof(int);// Array Length
	printf("Begin: ");
	for(int i=0;i<len;i++)
		printf("%d ",A[i]);
		
	BubbleSort(A,len);//Using BubbleSort
	printf("After: ");
	for(int i=0;i<len;i++)
		printf("%d ", A[i]);
	return 0;
} 
