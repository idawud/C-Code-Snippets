/*
    * ofstream: Stream class to write on files
    * ifstream: Stream class to read from files
    * fstream: Stream class to both  read & write from/on files
*/
#include <iostream>
#include <fstream>

int main()
{
    std::string line;
    std::ifstream file_("myFile.txt");
    if(file_.is_open())
    {
        while(std::getline(file_, line))
        {
            std::cout<<line << "\n";
        }
        file_.close();

    }else
    {
         std::cout<< "File cannot be opened\n";
    }


    std::cin.get();
    return 0;
}
