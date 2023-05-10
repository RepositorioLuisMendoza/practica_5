#include "juego.h"

juego::juego()
{
    QPixmap imagen;
    QBrush l;
    QImage r;
    r.load(":/imagenes/fondo.jpeg");
    l.setTextureImage(r);
    imagen.load(":/imagenes/fondo.jpeg");
    bolita_amarilla = new p_ppal;
    addItem(bolita_amarilla);
    setBackgroundBrush(l);
    //bolita_amarilla->select_sprite(1,0);
}
