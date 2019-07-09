#include <stdio.h>

int length(char *arr)
{
	int i;
	for(i=0; i<arr[i]; i++)
	{
	}
	return i;
}

void selection_sort(char *arr)
{
	int len;
	len = length(arr);
	int i, j, min, tmp;
	for(i=0; i<len-1; i++)
	{
		min=i;
		for(j=i+1; j<len; j++)
		{
			if(arr[min]>arr[j])
				min=j;
		}
		tmp=arr[i];
		arr[i]=arr[min];
		arr[min]=tmp;
	}
}

int main()
{
	char arr[] = "0192837465BCA!";
	printf("old: %s\n", arr);
	selection_sort(arr);
	printf("new: %s\n", arr);	

	return 0;
}
