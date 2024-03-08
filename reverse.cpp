#include "reverse.h"

uint32_t reverse(char* filename){
       FILE* fp = fopen(filename,"r");
       char n[5] = fread(n,sizeof(uint32_t),4,fp);
       uint32_t *num = reinterpret_cast<uint32_t *>(n);
       fclose(fp);
       return htonl(*num);
}
