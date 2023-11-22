#include <stdio.h>
#include <fcntl.h>

int main(void)
{
  int fd;
  char *file = NULL;

  fd = open(file, O_RDONLY);

  if (file)
  {
    printf("True\n");
  }
  else
  {
    printf("False\n");
  }
 
	return (0);

}
