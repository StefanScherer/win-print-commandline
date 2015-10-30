#undef UNICODE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int __cdecl main(int argc, char **argv)
{
  int i;

  // Validate the parameters
  if (argc == 2 && ! strcmp(argv[1], "--help")) {
    printf("usage: %s <any args you want ...>\n", argv[0]);
    printf("printcommandline prints the command line given to it.\n");
    return 1;
  }

  printf("GetCommandLine = %s\n", GetCommandLine());

  printf("argc = %d\n", argc);
  for (i=0; i<argc; i++) {
    printf("argv[%d] = %s\n", i, argv[i]);
  }
  return 0;
}
