#include "modalidade.h"

#include<fstream>

Modalidade::Modalidade()= default;

Modalidade::Modalidade(string nome)
{
   this->nome = nome;

   ifstream file;

   string filename = nome + ".txt";


   file.open(filename);

   while(!file.eof())
   {
       Competicao c;

       file >> c;

       competicoes.push_back(c);
   }

}

string Modalidade::getNome()
{
    return nome;
}
