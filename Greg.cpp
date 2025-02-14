#include "Greg.h"
#include "Jogo.h"
Greg::Greg(list<Entidade*>* le):
Entidade(Vector2f(0.f, WINDOW_SIZEY-200), Vector2f(40.f,40.f), 10), 
nvl_greg(10),
vel(1),
vel_pulo(0)
{
    p_lista_ent = le;
    caixa.setFillColor(Color::White);
}
Greg::~Greg(){}
void Greg::move()
{
    if (Keyboard::isKeyPressed(Keyboard::D))
    {
        velocidade.x += 0.01*vel;
    }    
    else if (Keyboard::isKeyPressed(Keyboard::A))
    {
        velocidade.x -= 0.01*vel;
    }
    else
        velocidade.x -= velocidade.x*0.1;
    if (Keyboard::isKeyPressed(Keyboard::Space))
    {
        velocidade.y = -vel;
    }
    if (velocidade.x > 0.3)
        velocidade.x = 0.3;
    if (velocidade.x < -0.3)
        velocidade.x = -0.3;
    caixa.move(velocidade);   
    velocidade.y += 0.006;
}