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
    /// Construtor vazio da modalidade.
    Modalidade();
    /// Construtor da modalidade.
    ///
    /// @param nome Nome da modalidade
    Modalidade(string nome);
    /// Vetor de competições da modalidade
    /// Permite guardar as competições de cada modalidade
    vector <Competicao> competicoes;
     string getNome();
};

#endif //TRABALHOAEDAPARTE1_MODALIDADE_H
