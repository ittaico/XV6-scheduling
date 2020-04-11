#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{

	//printf(1, "%s%d%s", "The process is using: ", memsize() ,"B \n");
  	printf(1, "The process is using: %dB \n",memsize());
  	printf(1,"Allocateing more memory\n");
  	//need to check the malloc size 
  	char* array = (char*) malloc(1*sizeof(char));
  	printf(1, "The process is using: %dB \n",memsize());
  	printf(1,"Freeing memory\n");
  	free(array);
  	printf(1, "The process is using: %dB \n",memsize());

  exit();
}