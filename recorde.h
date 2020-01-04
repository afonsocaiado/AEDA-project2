#ifndef TRABALHOAEDAPARTE1_RECORDE_H
#define TRABALHOAEDAPARTE1_RECORDE_H

#include "data.h"

using namespace std;

class Recorde {
private:
    Data data;
    string local;
    string atleta;
    string modalidade;
    string competicao;

public:
    Recorde();
    Recorde(Data data, string local, string atleta, string modalidade, string competicao);
    bool operator<(const Recorde& r) const;
    bool operator== (const Recorde &r) const;
    Recorde operator= (Recorde &r);
    friend ostream &operator<<(ostream &o, const Recorde &r);
    string getModalidade() const;
    string getComp() const;
    string getAt() const;
    string getLoc() const;
    Data getData() const;
};


#endif //TRABALHOAEDAPARTE1_RECORDE_H
