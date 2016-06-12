#include<iostream>
#include<boost/filesystem.hpp>
using namespace boost::filesystem;

//bool CopyDir(path const & source_path, path const & destination_path);

int main(int argc, char *argv[])
{
     if(argc < 3)
     {
          std::cout << "USAGE " << argv[0] << " source destination" << std::endl;
          return 1;
     }
     else
     {
          path source_path = argv[1];
          path destination_path = argv[2];
          if(exists(source_path))
          {
               if(is_regular_file(source_path) == true)
               {
                    copy_file(source_path, destination_path); //Link dest path to buffer
                    std::cout << "File has been copied" << std::endl;
               }
               else if(is_directory(source_path) == true)
               {
                    copy_directory(source_path, destination_path);
                    std::cout << "Directory has been copied" << std::endl;
               }
               else
               {
                    std::cerr << "It seems like the specified directory does not exist." << std::endl;
               }
          }
          else
          {
               std::cerr << "The specified directory could not be found" << std::endl;
          }
     }
     return 0;
}
