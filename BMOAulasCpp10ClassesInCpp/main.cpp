//
//  main.cpp
//  BMOAulasCpp10ClassesInCpp
//
//  Created by Breno Medeiros on 28/06/20.
//  Copyright © 2020 ProgramasBMO. All rights reserved.
//

#include <iostream>

#define Log(x) std::cout << x << std::endl

class Jogador {
public:
    int x,y;
    int velocidade;
    void Mover(int xa, int ya) {
        x += xa * velocidade;
        y += ya * velocidade;
    }
}; //Sempre nessessario ';'

/*void Mover(Jogador& jogador, int xa, int ya) {              //Isso é uma função
    jogador.x += xa * jogador.velocidade;
    jogador.y += ya * jogador.velocidade;
}*/

int main(int argc, const char * argv[]) {
    // insert code here...
    
    Jogador jogador;
    jogador.Mover(1, -1);
    jogador.x = 5;
    
    return 0;
}
