#include <iostream>
#include "SudokGrid.h"


SudokGrid::SudokGrid(int sz){
    size = sz;
    grid = new int*[size];

    for (int i=0; i<size; i++){
        grid[i] = new int[size];
    }

    for (int i = 0; i<size; i++){
        for(int j = 0; j<size; j++){
            this->grid[i][j] = 0;
        };
    };
};

void SudokGrid::Display_Grid(){
    std::cout<<"C>\t\t";
    for (int i = 0; i<size; i++){
        std::cout<<i<<" | ";
        } //les identifiants des colonnes
    std::cout<<"\n";
    std::cout<<"R"<<std::endl<<"V\n";
    
    for (int i = 0; i<size; i++){
        std::cout<<i<<"||\t\t";
        for(int j = 0; j<size; j++){
            std::cout<<this->grid[i][j]<<" | "; //affiche le coeff
        };
        std::cout<<"\n";
    };

};

void SudokGrid::Reveal(float pct){

};

void SudokGrid::Write_Number(int row, int col, int value){
    if (row <= this->size && col <= this->size){
        this->grid[row][col] = value;

    };
};

