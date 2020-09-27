//
// Created by user on 27.09.2020.
//

#ifndef FACTORYMETHOD_CONCRETECREATOR1_H
#define FACTORYMETHOD_CONCRETECREATOR1_H


#include "Creator.h"
#include "ConcreteProduct1.h"

class ConcreteCreator1 : public Creator {
public:
    Product *FactoryMethod() const override {
        return new ConcreteProduct1();
    }
};


#endif //FACTORYMETHOD_CONCRETECREATOR1_H
