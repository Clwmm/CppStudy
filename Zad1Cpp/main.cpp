#include <iostream>
#include "Task.h"
#include <map>
#include "Functions.h"
#include "Program.h"

void printMain()
{
    system("cls");
    std::cout << "======================\n";
    std::cout << "=     Jezyk  c++     =\n";
    std::cout << "======================\n";
    std::cout << "=   Kalwa   Mateusz  =\n";
    std::cout << "======================\n\n";
}



int main()
{
    /*std::map<int, std::map<int, void (*)()>> tasksets;
    std::map<int, void (*)()> tasks1;

    

    tasks1[1] = &z1z1;
    tasks1[2] = &z1z2;

    tasksets[1] = tasks1;


    printMain();
    std::cout << "Zestawy: \n";
    for (auto i : tasksets)
        std::cout << i.first << std::endl;*/


    Program p1;
    p1.init();



    /*std::map<int, void (*)()> map;
    map[1] = &z1z1;
    map[2] = &z1z2;

    auto it = map.find(1);

    if (it != map.end())
    {
        std::cout << (*it).first << std::endl;
        (*it).second();
    }*/
        
}