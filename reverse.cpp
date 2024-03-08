#include "reverse.h"

uint32_t reverse(char* filename){
       FILE* fp = fopen(filename,"r");
       uint32_t n = fread(n,sizeof(uint32_t),1,fp);
       return htonl(n);
