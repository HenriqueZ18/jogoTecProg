#pragma once
#define WINDOW_SIZEX 2000
#define WINDOW_SIZEY  1000
#include <SFML/Graphics.hpp>
#include <list>
#include "Greg.h"
#include "Greca.h"
#include "Obstaculo.h"
using namespace sf;
using namespace std;
class Jogo
{
private:
    RenderWindow janela;
    Greg greg;
    Greca greca;
    Obstaculo plataforma;
    list<Entidade*> lista_ent;
    static int gravidade;
public:
    Jogo(/* args */);
     ~Jogo();
    static int get_g() { return gravidade; }
};

