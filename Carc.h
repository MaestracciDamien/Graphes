//
// Created by damie on 5/7/2017.
//

#ifndef UNTITLED1_CARC_H
#define UNTITLED1_CARC_H


class Carc {
private:
    int iNumDestination;

public:
    Carc(int iNum);
    ~Carc();
    void afficher();

    int getINumDestination() const;

    void setINumDestination(int iNumDestination);

    bool operator==(const Carc &rhs) const;

    bool operator!=(const Carc &rhs) const;

};


#endif //UNTITLED1_CARC_H
