/*
    * ofstream: Stream class to write on files
    * ifstream: Stream class to read from files
    * fstream: Stream class to both  read & write from/on files
*/
#include <iostream>
#include <fstream>

int main()
{
    std::ofstream file_("myFile.txt");
    /* OR
    std::ofstream file_;
    file_.open("myFile.txt");
    */ 
   
    if(file_.is_open())
    {
         for(int i = 1; i <= 10; i++)
         {
              file_ << "Another Monkey "<<i<< "\n";
         }
         std::cout<<"Process Complete \n";

        file_.close();
    }


    //std::cin.get();
    return 0;
}
