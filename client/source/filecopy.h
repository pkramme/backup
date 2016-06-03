#ifndef __FILECOPY_H_INCLUDED__
#define __FILECOPY_H_INCLUDED__

#include<iostream>
#include<fstream>
#include<ctime>

class filecopy
{
     std::string dest_path;
     std::string src_path;
public:
     filecopy(std::string, std::string);
     void filecopy_worker()
     {
          std::cout << "FILECOPY PROCESS STARTED" << std::endl;
          std::ifstream source(src_path);
          std::ofstream dest(dest_path); //dest_path HAS TO BE REPLACED BY SOCKET BUFFER
          dest << source.rdbuf();
          source.close();
          dest.close();
     }
};

filecopy::filecopy(std::string a, std::string b)
{
     dest_path = a;
     src_path = b;
}

#endif
