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
	int len = sizeof(A)/sizeof(int);//数组长度 
	printf("排序前: ");
	for(int i=0;i<len;i++)
		printf("%d ",A[i]);
		
	BubbleSort(A,len);//调用冒泡排序 
	printf("排序后：");
	for(int i=0;i<len;i++)
		printf("%d ", A[i]);
	return 0;
} 
