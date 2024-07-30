#pragma once
#ifndef HUNTINGDOG_H
#define HUNTINGDOG_H
#include "Dog.h"
class HuntingDog :
    public Dog
{
public:
    virtual void doTrick() override;

};

#endif
