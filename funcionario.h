#pragma once
#ifndef TRABALHOAEDAPARTE1_FUNCIONARIO_H
#define TRABALHOAEDAPARTE1_FUNCIONARIO_H

#include <iostream>
#include <string>
#include <vector>

#include "modalidade.h"

using namespace std;
/// Classe Funcionario.
/// Permite representar todos os funcionários.
class Funcionario {

protected:
    string nome;
    char sexo;
    Data dataNascimento;
    int passaporte;
    string funcao;
    Data dataChegada;
    Data dataPartida;
    int custoDiario;
    string servico;
    int indisp;
public:
    /// Construtor vazio do Funcionário.
    Funcionario();
    /// Construtor do funcionario com servico e indispoinibilidade
    ///
    /// @param servico Servico específico do Funcionario
    /// @param indisp Horas de indisponibilidade do Funcionario
    Funcionario(string servico, int indisp);
    /// Construtor do Funcionário.
    ///
    /// @param nome Nome do funcionário
    /// @param sexo Sexo do funcionário
    /// @param dataNascimento Data de nascimento do funcionário
    /// @param passaporte Número de passaporte do funcionário
    /// @param funcao Função do funcionário
    /// @param dataChegada Data de chegada do funcionário
    /// @param dataPartida Data de partida do funcionário
    /// @param custoDiario Custo diário do funcionário
    Funcionario(string nome, char sexo, Data dataNascimento, int passaporte, string funcao, Data dataChegada, Data dataPartida, int custoDiario);
    /// Destrutor do funcionário.
    virtual ~Funcionario();
    /// Operador de atribuição do funcionário.
    ///
    /// @return Retorna o Funciário a ser atribuído
    Funcionario& operator=(const Funcionario&);
    /// Método get do nome.
    ///
    /// @return Retorna o nome do funcionário
    string getNome();
    /// Método get da função.
    ///
    /// @return Retorna a função do funcionário
    string getFuncao();
    /// Método get da data de nascimento.
    ///
    /// @return Retorna a data de nascimento do funcionário
    Data getDataNascimento();
    /// Método get da data de chegada.
    ///
    /// @return Retorna a data de chegada do funcionário
    Data getDataChegada();
    /// Método get da data de partida.
    ///
    /// @return Retorna a data de partida do funcionário
    Data getDataPartida();
    /// Método get do número de passaporte.
    ///
    /// @return Retorna o número de passaporte do funcionário
    int getPassaporte();
    /// Método get do custo diário.
    ///
    /// @return Retorna o custo diário do funcionário
    int getCustoDiario();
    /// Método get do serviço do funcionario
    ///
    /// @return Retorna o serviço do funcionário
    string getServico();
    /// Método get da indisponibilidade do funcionário
    ///
    /// @return Retorna as horas de indisponibilidade do funcionário
    int getIndisp();
    /// Método set do nome.
    ///
    /// @param nome Nome para o qual o nome deve ser alterado
    void setNome(string nome);
    /// Método set da função.
    ///
    /// @param funcao Função para a qual a função deve ser alterada
    void setFuncao(string funcao);
    /// Método set da data de chegada.
    ///
    /// @param dataChegada Data para a qual a data deve ser alterada
    void setDataChegada(Data dataChegada);
    /// Método set da data de partida.
    ///
    /// @param dataPartida Data para a qual a data deve ser alterada
    void setDataPartida(Data dataPartida);
    /// Método set da data de nascimento.
    ///
    /// @param nascimento Data para a qual a data deve ser alterada
    void setDataNascimento(Data nascimento);
    /// Método set da indisponibilidade do funcionário
    ///
    /// @param indisp Horas de indisponibilidade do funcionário
    void setIndisp(int indisp);
    /// Método set do número de passaporte.
    ///
    /// @param pass Número para o qual o número do passaporte deve ser alterado
    void setPassaporte(int pass);
    /// Visualizar informação do funcionário.
    virtual void viewInfo();
    /// Operador de verificação de igualdade.
    ///
    /// @param funcionario Funcionário a comparar com o funcionário antes do operador
    /// @return Retorna true se os funcionários forem iguais
    bool operator== (Funcionario funcionario);
    /// Operador de comparação de menor do funcionário
    ///
    /// @param f Funcionário a ser comparado
    /// @return Retorna o funcionário com o menor número de horas de indisponibilidade
    bool operator< (const Funcionario f) const;
    /// Operdador de funçao do funcionário (Função de hash)
    ///
    /// @param f Funcionário a inserir na tabela
    /// @return Retorna o índice na tabela para inserir o funcionário
    int operator() (const Funcionario & f) const;
    /// Operador de função do funcionário (Operador de verificação de igualdade, para resolução de colisões)
    ///
    /// @param f1 Funcionário a comparar
    /// @param f2 Funcionário a comparar
    /// @return Retorna verdadeiro de forem iguais, falso se forem diferentes
    bool operator() (const Funcionario & f1, const Funcionario & f2) const;
    /// Operador de escrita do funcionário
    ///
    /// @param o Stream de output
    /// @param f Funcionário cujos dados devem ser escrito
    /// @return Retorna a stream de output o
    friend ostream &operator<<(ostream & o, const Funcionario &f);
    /// Operador de leitura do funcionário.
    ///
    /// @param i Stream de input i
    /// @return Retorna a stream de input i
    virtual istream& input(istream& i);
};

class Atleta:public Funcionario{
private:
    string modalidade;
    int peso;
    int altura;
    int ranking;
    vector<Competicao> competicoes;
    vector<Resultado> resultados;
public:
    /// Construtor vazio do atleta.
    Atleta();
    /// Construtor do atleta.
    ///
    /// @param nome Nome do atleta
    /// @param sexo Sexo do atleta
    /// @param dataNascimento Data de nascimento do atleta
    /// @param passaporte Número de passaporte do atleta
    /// @param funcao Função do atleta
    /// @param dataChegada Data de chegada do atleta
    /// @param dataPartida Data de partida do atleta
    /// @param custoDiario Custo diário do atleta
    /// @param modalidade Modalidade do atleta
    /// @param peso Peso do atleta
    /// @param altura Altura do atleta
    /// @param ranking Ranking do atleta
    Atleta(string nome, char sexo, Data dataNascimento, int passaporte, string funcao, Data dataChegada, Data dataPartida, int custoDiario, string modalidade, int peso, int altura, int ranking);
    /// Destrutor do atleta.
    ~Atleta();
    /// Método get dos resultados.
    ///
    /// @return Retorna o vetor de resultados do atleta
    vector<Resultado> getResultados();
    /// Adicionar competição
    /// Adiciona uma competição ao vetor de competições do atleta
    ///
    /// @param competicao Competição a adicionar
    void addCompeticao(Competicao competicao);
    /// Adicionar resultado
    /// Adiciona um resultado ao vetor de resultados do atleta
    ///
    /// @param resultado Resultado a adicionar
    void addResultado(Resultado resultado);
    /// Visualizar informação do atleta.
    void viewInfo();
    /// Visualizar resultados do atleta.
    void viewResultados();
    /// Elimina atleta.
    void elimAtleta();
    /// Método set do peso.
    ///
    /// @param novo Peso novo
    void setPeso(int novo);
    /// Método set da altura.
    ///
    /// @param novo Altura nova
    void setAltura(int novo);
    /// Método set do ranking.
    ///
    /// @param novo Ranking novo
    void setRanking(int novo);
    /// Método get do ranking.
    ///
    /// @return Retorna o ranking do atleta
    int getRanking();
    /// Método get da altura
    ///
    /// @return Retorna a altura do atleta
    int getAltura();
    /// Método get do peso.
    ///
    /// @return Retorna o peso do atleta
    int getPeso();
    /// Operador de verificação de igualdade.
    ///
    /// @param atleta Atleta a comparar com o atleta antes do operador
    /// @return Retorna true se os atletas forem iguais
    bool operator== (Atleta atleta);
    /// Operador de escrita do atleta.
    ///
    /// @param o Stream de output
    /// @param a Atleta a escrever
    /// @return Retorna a stream de output o
    friend ostream &operator<<(ostream & o, const Atleta &a);
    /// Operador de leitura do atleta.
    ///
    /// @param i Stream de input
    /// @return Retorna a stream de input i
    virtual istream& input(istream& i);
};

#endif //TRABALHOAEDAPARTE1_FUNCIONARIO_H
