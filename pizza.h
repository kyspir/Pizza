#ifndef PIZZA_H
#define PIZZA_H

#include <QString>
#include <QStringList>
#include <iostream>

using namespace std;

class Pizza {
protected:
    QString name;
    QString dough;
    QString souce;
    QStringList *toppings;
public:
    Pizza();
    virtual ~Pizza();
    virtual QString getName();
    virtual void prepare();
    virtual void bake();
    virtual void cut();
    virtual void box();
    virtual QString toString();
};

#endif // PIZZA_H
