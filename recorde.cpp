#include "recorde.h"

Recorde::Recorde() = default;

Recorde::Recorde(Data data, string local, string atleta, string modalidade, string competicao)
{
    this->data = data;
    this->local = local;
    this->atleta = atleta;
    this->modalidade = modalidade;
    this->competicao = competicao;
}

string Recorde::getComp() const {
    return competicao;
}

string Recorde::getModalidade() const {
    return modalidade;
}

string Recorde::getAt() const {
    return atleta;
}

string Recorde::getLoc() const {
    return local;
}

Data Recorde::getData() const {
    return data;
}

bool Recorde::operator<(const Recorde& r) const
{
    if (modalidade < r.modalidade)
        return true;

    else if (modalidade > r.modalidade)
        return false;

    else
    {
        if (competicao < r.competicao)
            return true;

        else
            return false;
    }
}

Recorde Recorde::operator= (Recorde &r)
{
    this->competicao = r.competicao;
    this->local = r.local;
    this->data = r.data;
    this->modalidade = r.modalidade;
    this->atleta = r.atleta;

    return *this;
}

bool Recorde::operator== (const Recorde &r) const
{
    if(this->modalidade == r.modalidade && this->competicao == r.competicao){
        return true;
    }
    return false;
}


ostream &operator<<(ostream &o, const Recorde &r) {
    o << r.modalidade << ";" << r.competicao << ";" << r.atleta << ";" << r.local << ";" << r.data.getDia() << "/" << r.data.getMes() << "/" << r.data.getAno() << ";";
    return o;
}
