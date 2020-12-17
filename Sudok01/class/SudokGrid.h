#pragma once

class SudokGrid{
    //attributs
    private:
        int size;   //la taille de la grille
        int **grid; //le vecteur contenant les 'coefficients'


    //constructeurs
    public:
        SudokGrid();
        SudokGrid(int size);
        

    //méthodes
        void Display_Grid(); //affiche la grille
        void Write_Number(int row, int col, int value); // ajoute un coef dans la grille si c'est le bon
        void Reveal(float pct); //affiche une partie de la grille à compéter




};