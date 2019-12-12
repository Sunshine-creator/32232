#include<stdio.h>
#include<Windows.h>
#include<string.h>
# pragma warning(disable :4996)
int  sum(int top)
{
	int i = 1;
	int sum = 0;
	int result = 0;
	for (; i <= top; i++){
		sum += i;
	}
	return sum;


}

int main()
{
	printf(" enter the number :");
	int top = 1;
	int result = 0;
	scanf("%d\n", &top);
	result = sum(top);


	system("pause");
}
