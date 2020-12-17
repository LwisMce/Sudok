#include <iostream>
#include "class/SudokGrid.h"

int main() {
    std::cout << "Hello World!\n";

    int s = 5;

    SudokGrid G0 = SudokGrid(s);
    std::cout<<"displaying \n";
    G0.Display_Grid();

    int test = 5;

    while(test > 0){
        int r, c, v;
        std::cout<<"Add coef \n"<<"line : ";
        std::cin>>r;
        std::cout<<"col : ";
        std::cin>>c;
        std::cout<<"value : ";
        std::cin>>v;
        
        G0.Write_Number(r, c, v);
        G0.Display_Grid();
        test --;

    }


    return 0;


}