#include "stdio.h"

void  donner_age(int x){
	printf("j'ai %d ans\n", x);
}


int main(){
	printf("bonjour\n");
	printf("comment vas tu?\n");
	donner_age(12);
	return 0;
}
