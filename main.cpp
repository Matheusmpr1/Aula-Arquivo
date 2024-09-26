#include <iostream> 
#include <fstream> 
#include <climits>
using namespace std;


void escreverArquivo(string nome,string texto){
    fstream arquivo;
    arquivo.open(nome,ios::out);

    if(arquivo.is_open()){
    arquivo << texto << endl;
    arquivo.close();

    }

    else{
        cout << "Erro na abertura do arquivo\n";
    }

}

void leArquivo(string nome){
    fstream arquivo;
    arquivo.open(nome, ios:: in);
    string texto;
    if(arquivo.is_open()){
        while(getline(arquivo,texto)){
            cout << texto << endl;
            arquivo.close();
        }
    }
    else{
        cout << "Deu Erro chapa\n";
    }
}


int main (){
  string nome, texto;
  cout << "Fala o nome do arquivo " << endl; 
  cin >> nome;
  cout << "Entra com o texto " << endl;
  //cin >> texto;
  cin.ignore(__INT_MAX__ ,'\n');
  getline(cin,texto);
  escreverArquivo(nome,texto);
  leArquivo(nome);
}
