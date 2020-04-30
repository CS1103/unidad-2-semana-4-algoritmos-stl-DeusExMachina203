//
// Created by deloa on 4/25/2020.
//

#ifndef UNTITLED3_FUNCIONES_H
#define UNTITLED3_FUNCIONES_H

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
void uva146(std::string cla){
    if (std::next_permutation(cla.begin(),cla.end()))
        std::cout<< cla<<std::endl;
    else
        std::cout << "no more";
}
void uva299() {
    int cases = 0;
    std::cin>> cases;
    for (int i = 0; i <cases; i++) {
        std::vector<int> trains;
        int ncar=0;
        std::cin>>ncar;
        for(int a =0; a<ncar; a++){
            int car=0;
            std::cin>>car;
            trains.push_back(car);}
        int sw = 0;
        for (auto j = trains.begin(); j != trains.end(); j++) {
            for (auto k = j; k != trains.end(); k++)
                if (*k > *(k++)) {
                    std::swap(trains[1], trains[0]);
                    sw++;
                }
        }
        std::cout << "El minimo de swaps es: " << sw << std::endl;
    }
}


#endif //UNTITLED3_FUNCIONES_H
