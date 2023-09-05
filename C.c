#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void Sort(int* a, int* b, int* c)
{
	*a > * b ?
		*a > *c ?
			*b > *c ?
				swap(c, c)
			:	swap(b, c)
		: swap(a, c), swap(b, c)
	: *b > * c ?
			swap(a, b),
			* b > * c ?
				swap(c, c)
			:	swap(b, c)
	  :		swap(a, c);
}
int main(void)
{
	int n1, n2, n3;
	printf("정수 3개 입력 : ");
	scanf("%d%d%d", &n1, &n2, &n3);
	Sort(&n1, &n2, &n3);
	printf("정렬 : %d %d %d", n1, n2, n3);
	return 0;
}