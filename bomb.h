#ifndef BOMB_H
#define BOMB_H

#include <QObject>
#include <QGraphicsRectItem>

class Bomb : public QObject, public QGraphicsRectItem
{
    Q_OBJECT

public:
    explicit Bomb();

signals:

public slots:

};

#endif // BOMB_H
