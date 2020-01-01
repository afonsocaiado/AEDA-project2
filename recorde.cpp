#include "recorde.h"

Recorde::Recorde(Data data, string local, string atleta, string modalidade, string competicao)
{
    this->data = data;
    this->local = local;
    this->atleta = atleta;
    this->modalidade = modalidade;
    this->competicao = competicao;
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