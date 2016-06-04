#include<iostream>
#include<stdlib.h>
#include"filecopy.h"

int main(int argc, char *argv[])
{
     if(argc != 3)
     {
          std::cout << "USAGE: " << argv[0] << " <filesource> <filedestination>" << std::endl;
          return 1;
     }
     else
     {
          filecopy target1(argv[2], argv[1]);
          std::cout << "TARGET ASSIGNED" << std::endl;
          target1.filecopy_worker();
     }
     return 0;
}
