#include <stdio.h>
#include <stdlib.h>

char* __itoa(int val) {
	int temp = (val>0)? val: -val;//flip signedness if negative
	char* ret = malloc(100);
	int lim = 0;
	


	long index =0;
	if (val < 0) {
		ret[index] = '-';
		index++;
	}
	while (&(ret[index]) != ret[99] && temp) {//while pointer doesn't point to end and temp != 0
		char to_put = temp %10;
		printf("%i\n", to_put);
		ret[index] = to_put + '0';
		index++;
		temp /= 10;
		
	}
	ret[index] = '\0';
	return ret;

}
int main(void) {
	char* str = __itoa(123);
	printf("%s", str);

}