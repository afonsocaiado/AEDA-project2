#pragma once
#ifndef TRABALHOAEDAPARTE1_RESULTADO_H
#define TRABALHOAEDAPARTE1_RESULTADO_H


#include <string>
#include <vector>

#include "competicao.h"

using namespace std;

class Resultado {
private:
    Competicao competicao;
    Prova prova;
    int classificacao;
    bool passou;

public:
    Resultado();
    Resultado(Competicao competicao, Prova prova, int classificacao, bool passou);
    Competicao getCompeticao();
    Prova getProva();
    int getClassificacao();
    bool getPassou();
    string getMedalha(int classificacao) const;
    void setProva(Prova prova);
    void setClassificacao(int classificacao);
    void setPassou(bool passou);

    friend ostream & operator<<(ostream &o, const Resultado &resultado);

};

#endif //TRABALHOAEDAPARTE1_RESULTADO_H
