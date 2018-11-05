#include<stdio.h>
#include<stdlib.h>
//%p是用來列印位址的轉換指定詞//位址通常以16進制表示
int main(void)
{
	char array[5];
	printf("   array = %p\narray[0] = %p\n  &array = %p\n",
		array, &array[0], &array);

	system("pause");
	return 0;
}