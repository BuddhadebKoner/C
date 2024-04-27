#include<stdio.h>
int main(){
	int s=10;
	int *pt;
	{
		int x=200;
		pt=&x;
	}
	printf("*pt = %d\n",*pt); // dagling
	return 0;
}
