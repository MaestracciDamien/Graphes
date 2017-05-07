//
// Created by damie on 5/7/2017.
//

#include "Carc.h"
#include <iostream>
using namespace std;
Carc::Carc(int iNum)
{
    this->iNumDestination = iNum;
}

void Carc::afficher()
{
    cout << "Arc Destination : " <<this->iNumDestination << endl;
}

Carc::~Carc()
{}

int Carc::getINumDestination() const {
    return iNumDestination;
}

void Carc::setINumDestination(int iNumDestination) {
    Carc::iNumDestination = iNumDestination;
}

bool Carc::operator==(const Carc &rhs) const {
    return iNumDestination == rhs.iNumDestination;
}

bool Carc::operator!=(const Carc &rhs) const {
    return !(rhs == *this);
}
