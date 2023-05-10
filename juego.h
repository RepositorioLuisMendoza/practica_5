

#ifndef JUEGO_H
#define JUEGO_H

#include <QGraphicsScene>
#include "personaje.h"

class juego : public QGraphicsScene
{
public:
    juego();

private:
    p_ppal *bolita_amarilla;
};

#endif // JUEGO_H







