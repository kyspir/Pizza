#ifndef SIMPLEPIZZAFACTORY_H
#define SIMPLEPIZZAFACTORY_H

#include "pizza.h"
#include "cheesepizza.h"
#include "pepperonipizza.h"

class SimplePizzaFactory {
public:
    SimplePizzaFactory();
    Pizza* createPizza(QString type);
};

#endif // SIMPLEPIZZAFACTORY_H
