#include "sibitcant.h"

class sibitCantData : public QSharedData
{
public:

};

sibitCant::sibitCant(QWidget *parent)
    : QWidget{parent}, data(new sibitCantData)
{

}

sibitCant::sibitCant(const sibitCant &rhs)
    : data{rhs.data}
{

}

sibitCant &sibitCant::operator=(const sibitCant &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

sibitCant::~sibitCant()
{

}
