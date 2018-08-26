/*
    * ofstream: Stream class to write on files
    * ifstream: Stream class to read from files
    * fstream: Stream class to both  read & write from/on files
*/
#include <iostream>
#include <fstream>

int main()
{
    std::string name;
    int id;
    double marks;
    std::ifstream file_("custom.txt");
    if(file_.is_open())
    {
        while(file_ >> id >> name >> marks)
        {
            std::cout<< id << " " << name << " " << marks <<"%"<< "\n";
        }
        file_.close();

    }else
    {
         std::cout<< "File cannot be opened\n";
    }


    std::cin.get();
    return 0;
}
