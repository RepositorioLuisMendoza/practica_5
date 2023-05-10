/*


#include "personaje.h"


p_ppal::p_ppal()
{
    complete = new QPixmap(":/imagenes/pngwing.com.png");
    actual = new QPixmap;
    time = new QTimer;
    *complete = complete->copy(240, 0, 35*1 ,35*11);
    muerte = 0;
    setPos(150, 76);
    connect(time, SIGNAL(timeout()), this, SLOT(muerte_personaje()));
    time->start(1000);
}

void p_ppal::select_sprite(int x, int y)
{
    *actual = complete->copy(35*x,35*y,35,35);
    setPixmap(*actual);
}

void p_ppal::muerte_personaje()
{
    static int frame = 0;  // Variable para controlar el marco actual

        if (frame <= 9)
        {
            select_sprite(8, frame);  // Carga el marco actual del sprite
            frame++;
        }
        else
        {
            time->stop();
        }
}

*/



#include "personaje.h"

p_ppal::p_ppal()
{
    complete = new QPixmap(":/imagenes/pngwing.com.png");
    *complete = complete->copy(240, 0, 35 * 1, 35 * 11);
    setPixmap(*complete);
    setPos(150,75);
    muerte = 0;
    segmento = complete->copy(240, 0, 35, 35);



    time = new QTimer(this);
    connect(time, SIGNAL(timeout()), this, SLOT(muerte_personaje()));
    time->start(200);
}

void p_ppal::select_sprite(int x, int y)
{


    // No se utiliza en la animación de muerte
   // Q_UNUSED(x);
    //Q_UNUSED(y);
}

void p_ppal::muerte_personaje()
{
    muerte++;
    if (muerte < 11)
    {
        segmento = complete->copy(0, muerte * 35, 35, 35);
        setPixmap(segmento);
    }
    else
    {
        time->stop();
    }
}
