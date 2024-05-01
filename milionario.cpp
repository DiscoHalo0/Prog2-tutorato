#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Domanda{
    public:
        string testo;
        string *risposte;
        int num;
    public:
        Domanda(){}
        Domanda(string *stream,string *risposte,int num){}
        Domanda(string s1,string s2,string s3,string s4, string s5,int num){
            testo=s1;
            risposte[0]=s2;
            risposte[1]=s3;
            risposte[2]=s4;
            risposte[3]=s5;
            num=num;
        }
        Domanda(string testo,string *giuste,int num){
            string myText;
            string arraytext[]={};
            ifstream Myfile("Domande_file.txt");
        }
        string leggi_Testo(){
            string myText;
            string arraytext[]={};
            ifstream Myfile("Domande_file.txt");
            while(getline(Myfile,myText)){
                char *strcpy(char arraytext,char myText);
                cout << *arraytext << endl;
            }
            Myfile.close();
        } 
        bool indovina(int num){
            Domanda *domanda=new Domanda;
            domanda->num=num;
            int risposta_giusta[]={1203};

        if(domanda->num==risposta_giusta[0]){
            cout<< "Complimenti hai trovato tutte le risposte corrette" << endl;
            return num;
        }else{
            cout << "Mi spiace hai sbagliato una o piu' risposte, riprova!" << endl;
        }
    }    
};
           
int main(){
    
    Domanda *domanda=new Domanda();

    domanda->leggi_Testo();
        
    cout << "inserisci la risposta alle domande, leggi le domande singolarmente e rispondi con la sequenza che si ritiene corretta Esempio(1034, senza spazi): " << endl;
    cin >> domanda->num;
    domanda->indovina(domanda->num);
    
    ofstream output("output_domande.txt");
    output << "il numero di risposte giuste è: " << domanda->indovina(domanda->num)<< endl; 
    
    delete domanda;
    output.close();

    return 0;

}