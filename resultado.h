#pragma once
#ifndef TRABALHOAEDAPARTE1_RESULTADO_H
#define TRABALHOAEDAPARTE1_RESULTADO_H


#include <string>
#include <vector>

#include "competicao.h"

using namespace std;

/// Classe Resultado.
/// Permite representar um resultado de um atleta, relativo a uma prova e competição
class Resultado {
private:
    Competicao competicao;
    Prova prova;
    int classificacao;
    bool passou;

public:
    /// Construtor vazio do Resultado.
    Resultado();
    /// Construtor do Resultado.
    ///
    /// @param competicao Competição a que se refere o resultado
    /// @param prova Prova a que se refere o resultado
    /// @param classificacao Classificação obtida
    /// @param passou Booleano relativo a passagem ou não na prova.
    Resultado(Competicao competicao, Prova prova, int classificacao, bool passou);
    /// Método get da competção.
    ///
    /// @return Retorna a competição a que se refere o resultado
    Competicao getCompeticao();
    /// Método get da prova.
    ///
    /// @return Retorna a prova a que se refere o resultado
    Prova getProva();
    /// Método get da classificação.
    ///
    /// @return Retorna a classificação obtida
    int getClassificacao();
    /// Método get de passou.
    ///
    /// @return Retorna true se o resultado permitir a passagem à prova seguinte
    bool getPassou();
    /// Método get de medalha.
    ///
    ///@param classificacao Classificação obtida
    ///@return Retorna a medalha obtida, se for caso disso
    string getMedalha(int classificacao) const;
    /// Método set da prova.
    ///
    /// @param prova Prova para a qual será alterada a prova a que se refere o resultado
    void setProva(Prova prova);
    /// Método set da classificação.
    ///
    /// @param prova Classificação para a qual será alterada a classificação obtida
    void setClassificacao(int classificacao);
    /// Método set do booleano passou.
    ///
    /// @param prova Booleano cujo valor vai ser o novo valor do booleano passou do resultado
    void setPassou(bool passou);
    /// Operador de escrita do resultado.
    ///
    /// @param o Stream de output
    /// @param resultado Resultado a escrever
    /// @return Retorna a stream de output o
    friend ostream & operator<<(ostream &o, const Resultado &resultado);

};

#endif //TRABALHOAEDAPARTE1_RESULTADO_H
