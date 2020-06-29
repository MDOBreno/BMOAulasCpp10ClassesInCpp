//
//  main.cpp
//  BMOAulasCpp10ClassesInCpp
//
//  Created by Breno Medeiros on 28/06/20.
//  Copyright © 2020 ProgramasBMO. All rights reserved.
//

#include <iostream>

#define Log(x) std::cout << x << std::endl

//#define struct class    //Serve paar manter a compatibilidade de Struct's da linguagem C, para o C++.

//A diferença entre Struct e Class é que a primeira por padrao atrib/metod são publicos,classes o contrario.

struct JogadorStruct {
    int x,y;
    int velocidade;
    void Mover(int xa, int ya) {
        x += xa * velocidade;
        y += ya * velocidade;
    }
}; //Sempre nessessario ';'

class JogadorClasse {
public:
    int x,y;
    int velocidade;
    void Mover(int xa, int ya) {                                //Isso é um método.
        x += xa * velocidade;
        y += ya * velocidade;
    }
}; //Sempre nessessario ';'

/*void Mover(Jogador& jogador, int xa, int ya) {                //Isso é uma função.
    jogador.x += xa * jogador.velocidade;
    jogador.y += ya * jogador.velocidade;
}*/

struct vec2 {
    float x,y;
    void Add(const vec2& outro){
        x += outro.x;
        y += outro.y;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    
    JogadorClasse jogadorClasse;
    jogadorClasse.Mover(1, -1);
    jogadorClasse.x = 5;
    
    JogadorStruct jogadorStruct;
    jogadorStruct.Mover(1, -1);
    jogadorStruct.x = 5;
    
    return 0;
}
