
#include <iostream>
#include <vector>
#include <algorithm>  //std::remove
// C++11 Vectors
/*
    vectors allows for dynamic changing of list size as oppose to
    array which are static and difficult to change
    int arr[3] = {1,2,3}; it size 3 can't be updated

*/
int main()
{
    // vector declaration can start with an initial size, 10 in this case  //std::vector<int> my_vec(10);
    std::vector<int> my_vec;
    my_vec.push_back(10);
    my_vec.push_back(20);
    my_vec.push_back(30);
    my_vec.push_back(40);
    my_vec.push_back(50);

    std::cout <<"My vector size is: "<<my_vec.size() <<std::endl;
    std::cout <<"**** Using Range-based for Loop ********"<<std::endl;
    for(int item : my_vec)
    {
        std::cout << item <<std::endl;
    }

    std::cout << std::endl <<std::endl;
    std::cout <<"///////// Using normal for loop ////// "<<std::endl;
    for(int i = 0; i< my_vec.size() ; i++)
    {
        std::cout<<"Vector "<<i << "a -> " <<my_vec[i] <<std::endl;
            // OR OR OR OR
        std::cout<<"Vector "<<i << "b -> " <<my_vec.at(i) <<std::endl;
    }

    std::cout << std::endl <<std::endl;
    std::cout <<"########## UPDATES ############"<<std::endl;

    my_vec.erase(my_vec.begin()); // delete at first index
    my_vec.erase(my_vec.begin()+ 2); // delete at index two

    //REMOVING SPECIFIC VALUES
    my_vec.erase(
                 std::remove(my_vec.begin(), my_vec.end(), 20) ,  my_vec.end()
                 );
     for(int i = 0; i< my_vec.size() ; i++)
    {
        std::cout<<"Vector "<<i << "a -> " <<my_vec[i] <<std::endl;
            // OR OR OR OR
            // line above n below do the same thing
        std::cout<<"Vector "<<i << "b -> " <<my_vec.at(i) <<std::endl;
    }
    // CLEARING  A VECTOR FULLY
    std::cout << std::endl <<std::endl;
    std::cout <<"########## CLEAR ############"<<std::endl;
    std::cout<<"is Vector empty: "<< my_vec.empty()<<std::endl; // 0=false
    my_vec.clear();
    std::cout<<"is Vector empty: "<< my_vec.empty()<<std::endl; // 1= true

    return 0;
}
