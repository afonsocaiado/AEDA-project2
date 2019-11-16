#pragma once
#ifndef TRABALHOAEDAPARTE1_MODALIDADE_H
#define TRABALHOAEDAPARTE1_MODALIDADE_H

#include "resultado.h"

#include <vector>

using namespace std;

class Modalidade {
private:
    string nome;
public:
    Modalidade();
    Modalidade(string nome);
    vector <Competicao> competicoes;
};

#endif //TRABALHOAEDAPARTE1_MODALIDADE_H
