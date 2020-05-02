//
// Created by deloa on 4/25/2020.
//

#ifndef UNTITLED3_FUNCIONES_H
#define UNTITLED3_FUNCIONES_H

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>

void uva146(std::string cla){
    if (std::next_permutation(cla.begin(),cla.end()))
        std::cout<< cla<<std::endl;
    else
        std::cout << "no more";
}
void uva299() {
    int can=0;
    std::cin >> can;
    for(int i =0; i<can ; i++){
        int vag = 0;
        std::cin >> vag;
        std::vector<int> trains;
        for(int j = 0; j< vag; j++){
            int vags=0;
            std::cin>> vags;
            trains.push_back(vags);
        }
        int sw=0;
        for(int j = 0 ; j<trains.size()-1; j++){
            for (int k =j+1; k<trains.size();k++)
                if(trains[j]>trains[k]) {std::swap(trains[j], trains[k]);sw++;}
        }
        std::cout<< "se necesita como minimo: "<< sw << std::endl;
    }

}
void uva482() {
    int can = 0;
    std::cin >> can;
    for (int a = 0; a < can; a++) {
        std::vector<int> ind;
        std::vector<float> num;
    }
}
void uva612(){
    int sets=0;
    std::cin >> sets;
    for(int a =0 ; a<sets; a++){

        int lines=0;
        int columns=0;
        std::cin>> columns>> lines;
        std::vector<std::string> dna(0);
        std::vector<std::string> codna(0);
        std::vector<int> rec;
        for(int i =0; i<lines;i++){
            std::string a;
            std::cin>>a;
            dna.push_back(a);
        }
        codna= dna;

        for(int i =0; i<lines; i++){
            int con= 0;
            for(int j =0; j< columns; j++){
                for(int k=j+1; k<columns; k++){
                    if(codna[i][j]==codna[i][k]){
                        codna[i][k]='Z';
                    }
                }
            }
            for(int j =0; j< columns; j++){
                for(int k=j+1; k<columns; k++){
                    if(codna[i][j]!='Z'){
                       if(codna[i][j]>codna[i][k]){
                           con++;
                       }
                    }
                }
            }
            rec.push_back(con);
        }
        for(int j = 0 ; j<lines--; j++){
            for (int k =j+1; k<lines;k++)
                if(rec[j]>rec[k]) {
                    std::swap(rec[j], rec[k]);
                    std::swap(dna[j],dna[k]);}
        }
        for(std::string f: dna) std::cout<< f <<std::endl;

    }
}
void uva11340(){ //solo puede haber espacios entre las líneas, en caso contrario el loop contará como un srting diferente a cada palabra
    int cases=0;
    std:: cin>> cases;
    for(int i =0; i< cases; i++){
        int let=0;
        std::cin>> let;
        std::map<char, int> prices;
        for(int j =0; j<let; j++){
            char a;
            int b;
            std::cin >> a >> b;
            prices[a]=b;
        }
        for(auto&& el1:prices){std::cout<<el1.first<< ' '<< el1.second<<std::endl;}
        int lines;
        std::cin>> lines;
        float fprice=0;
        std::string a=" ";
        for(int j = 0; j< lines; j++){
            std::cin>> a;
            for(char k : a){
                auto search = prices.find(k);
                if (search != prices.end()){ fprice += search->second;}
                }
            }
        std::cout<< fprice/100<<std::endl;
        }
    }

#endif //UNTITLED3_FUNCIONES_H

