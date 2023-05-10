/*


#ifndef P_PPAL_H
#define P_PPAL_H

#include <QGraphicsPixmapItem>
#include <QTimer>

class p_ppal : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT

public:
    p_ppal();
    void select_sprite(int x, int y);

private:
    QPixmap *complete, *actual;
    QTimer *time;
    short muerte;

private slots:
    void muerte_personaje();
};

#endif // P_PPAL_H
*/


#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <QGraphicsPixmapItem>
#include <QTimer>

class p_ppal : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT

public:
    p_ppal();
    void select_sprite(int x, int y);

private:
    QPixmap *complete;
    QPixmap segmento;  //pedaso de imagen
    QTimer *time;
    int muerte;  // itera sobre los mochitos

private slots:
    void muerte_personaje();
};

#endif // PERSONAJE_H
