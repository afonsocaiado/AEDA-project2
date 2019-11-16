#include "funcionario.h"

#include <iostream>

using namespace std;

Funcionario::Funcionario()= default;

Funcionario::Funcionario(string nome, char sexo, Data dataNascimento, int passaporte, string funcao, Data dataChegada, Data dataPartida, int custoDiario):nome(nome), sexo(sexo), dataNascimento(dataNascimento), passaporte(passaporte), funcao(funcao), custoDiario(custoDiario)
{

    this->dataChegada = dataChegada;
    this->dataPartida = dataPartida;
}

Funcionario::~Funcionario()= default;

Funcionario &Funcionario::operator=(const Funcionario &f)
{
    if(this != &f)
    {
        this->nome = f.nome;
        this->sexo = f.sexo;
        this->dataNascimento = f.dataNascimento;
        this->passaporte = f.passaporte;
        this->funcao = f.funcao;
        this->dataChegada = f.dataChegada;
        this->dataPartida = f.dataPartida;
        this->custoDiario = f.custoDiario;
    }
    return *this;
}

string Funcionario::getNome()
{
    return nome;
}

string Funcionario::getFuncao()
{
    return funcao;
}

Data Funcionario::getDataChegada()
{
    return dataChegada;
}

Data Funcionario::getDataPartida()
{
    return dataPartida;
}

int Funcionario::getCustoDiario()
{
    return custoDiario;
}

void Funcionario::setDataChegada(Data dataChegada)
{
    this->dataChegada = dataChegada;
}

void Funcionario::setNome(string nome)
{
    this->nome = nome;
}

void Atleta::setPeso(int novo){
    this->peso = novo;
}

int Atleta::getPeso() {
    return this->peso;
}

void Atleta::setAltura(int novo) {
    this->altura = novo;
}

int Atleta::getAltura() {
    return this->altura;
}

void Atleta::setRanking(int novo) {
    this->ranking = novo;
}

int Atleta::getRanking(){
    return this->ranking;
}

Data Funcionario::getDataNascimento() {
    return dataNascimento;
}

void Funcionario::setPassaporte(int pass) {
    this->passaporte = pass;
}

int Funcionario::getPassaporte() {
    return passaporte;
}

void Funcionario::setFuncao(string funcao)
{
    this->funcao = funcao;
}

void Funcionario::setDataPartida(Data dataPartida)
{
    this->dataPartida = dataPartida;
}

bool Funcionario::operator== ( Funcionario funcionario)
{
    return this->passaporte == funcionario.passaporte;
}

void Funcionario::viewInfo() {
    cout << endl << "Nome: " << nome << endl;
    cout << endl << "Data de Nascimento: " << dataNascimento << endl;
    cout << endl << "Numero de Passaporte: " << passaporte << endl;
    cout << endl << "Estadia: " << dataChegada << " - " << dataPartida << endl;
}

Atleta::Atleta() {}

Atleta::Atleta(string nome, char sexo, Data dataNascimento, int passaporte, string funcao, Data dataChegada, Data dataPartida, int custoDiario, string modalidade, int peso, int altura, int ranking):modalidade(modalidade), peso(peso), altura(altura), ranking(ranking), Funcionario(nome, sexo, dataNascimento, passaporte, funcao, dataChegada, dataPartida, custoDiario) {}

Atleta::~Atleta() = default;

void Atleta::addCompeticao(Competicao competicao)
{
    competicoes.push_back(competicao);
}

void Atleta::addResultado(Resultado resultado)
{
    resultados.push_back(resultado);
}

void Funcionario::setDataNascimento(Data nascimento){
    dataNascimento = nascimento;
}

void Atleta::viewInfo() {
    cout << endl << "Nome: " << nome << endl;
    cout << endl << "Data de Nascimento: " << dataNascimento << endl;
    cout << endl << "Numero de Passaporte: " << passaporte << endl;
    cout << endl << "Estadia: " << dataChegada << " - " << dataPartida << endl;
    cout << endl << "Peso: " << peso << endl;
    cout << endl << "Altura: " << altura << endl;
    cout << endl << "Ranking: " << ranking << endl;
}

void Atleta::viewResultados() {
    for (unsigned int i = 0; i < resultados.size(); i++){
        cout << endl << "Competicao: " << resultados.at(i).getCompeticao().getNome() << endl;
        cout << endl << "Prova: " << resultados.at(i).getProva().getNome() << endl;
        cout << endl << "Classificao: " << resultados.at(i).getClassificacao() << endl << endl;
    }

}

vector<Resultado> Atleta::getResultados(){
    return resultados;
}

bool Atleta::operator== (Atleta atleta)
{
    return this->passaporte == atleta.passaporte;
}

ostream &operator<<(ostream & o, const Funcionario &f)
{
    o << f.nome << ";" << f.sexo << ";" << f.dataNascimento << ";" << f.passaporte << ";" << f.funcao << ";" << f.dataPartida << ";" << f.dataChegada << ";" << f.custoDiario << ";";
    return o;
}

istream& Funcionario::input(istream& i)
{
    getline(i, this->nome, ';');
    i >> this->sexo;
    i.ignore();
    i >> this->dataNascimento;
    i >> this->passaporte;
    i.ignore();
    getline(i, this->funcao, ';');
    i >> this->dataChegada;
    i >> this->dataPartida;
    i >> this->custoDiario;
    i.ignore(2, '\n');
    return i;
}

ostream &operator<<(ostream & o, const Atleta &a)
{
    o << a.nome << ";" << a.sexo << ";" << a.dataNascimento << ";" << a.passaporte << ";" << a.funcao << ";" << a.dataPartida << ";" << a.dataChegada << ";" << a.custoDiario << ";" << a.modalidade << ";" << a.peso << ";" << a.altura << ";" << a.ranking << ";" << endl;
    return o;
}

istream& Atleta::input(istream& i)
{
    getline(i, this->nome, ';');
    i >> this->sexo;
    i.ignore();
    i >> this->dataNascimento;
    i >> this->passaporte;
    i.ignore();
    getline(i, this->funcao, ';');
    i >> this->dataChegada;
    i >> this->dataPartida;
    i >> this->custoDiario;
    i.ignore();
    getline(i, this->modalidade, ';');
    i >> this->peso;
    i.ignore();
    i >> this->altura;
    i.ignore();
    i >> this->ranking;
    i.ignore(2, '\n');
    return i;
}

