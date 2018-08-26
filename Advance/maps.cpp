
#include <iostream>
#include <map>
// C++11 Maps
/*
    Maps: are associated containers that stores key-value pairs , just like python
    dictionary or JavaScript object. eg {   1:'boy',
                                            2:'girls',
                                            3:'animals'
                                        }.
    where keys are: 1,2,2 and corresponding values are boys,girls, animals respectively.
    NOTE:
        Keys re unique with maps

*/
int main()
{
    std::map<int, std::string> mappy;
    mappy[1] = "Tommy";
    mappy[2] = "Nicky";
    mappy[3] = "Ricky";
    mappy[4] = "Dicky";
    mappy[5] = "Dawn";

    // mappy.size(); returns the size of the map
    // mappy.clear(); empties all contens of the map

    mappy.insert(std::pair<int, std::string>(6, "cockroach") );
    mappy.insert(std::pair<int, std::string>(7, "GlobalCode") );
    mappy.insert(std::pair<int, std::string>(8, "PythonGhana") );
    mappy.insert(std::pair<int, std::string>(9, "GDG") );
    mappy.insert(std::pair<int, std::string>(10, "DSC") );

    std::cout<< mappy[2]<<","<< mappy[3] << ","<< mappy[4]<<" and"<< mappy[5]<<std::endl;

    // Finding key in a map
    std::cout<<"Key Found: "<<mappy.find(5)->second << std::endl;
    /*
     * OR -> OR -> OR
     * std::map<int, std::string>::iterator it = mappy.find(5);
     * std::cout<<"Key Found: "<<it.->second << std::endl;
     *
    */

    // Deleting an entry
    std::map<int, std::string>::iterator it = mappy.find(5);
    mappy.erase(it);

    // Map is empty & clear
    std::cout<<"Map is empty: "<<mappy.empty()<< std::endl; // 0= not empty
    for(std::map<int, std::string>::iterator mp = mappy.begin(); mp != mappy.end(); mp ++ )
    {    // mp->first returns the key
        //  mp->second  returns the value
        std::cout<< mp->first << " => " << mp->second << std::endl;
    }
    mappy.clear();
    std::cout<<"Map is empty: "<<mappy.empty()<< std::endl; // 0= empty

    return 0;
}
