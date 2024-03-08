#include <studio.h>
#include"reverse.h"

int main(char* argv[]){
	uint32_t n1 = reverse(argv[1]);
	uint32_t n2 = reverse(argv[2]);
	printf("%d(%x) + %d(%x) = %d(%x)\n",n1,n1,n2,n2,n1+n2,n1+n2);
}

