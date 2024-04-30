//questo programma credo abbia dei difetti non da meno, non sono riuscito ad 
//implementare correttamente la verifica della risposta corretta e in generale 
//l'implementazione della classe mi sembra alquanto sbagliata, continuerò a pensarci su e provare a risolvere

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
        Domanda(string s1,string s2,string s3,string s4, string s5,int num){}
        Domanda(string testo,string *giuste,int num){}
};

string leggi_Testo(){
    string myText;
    string arraytext[]={};
    ifstream Myfile("Domande_file.txt");
        while(getline(Myfile,myText)){
            char *strcpy(char arraytext,char myText);
            cout << *arraytext << endl;
            cout << endl;
    }
    Myfile.close();
}

bool indovina(int num){
    Domanda domanda;
    domanda.num=num;
    int risposta_giusta[4]={1,2,0,3};
    //cout << domanda.num << endl;
  
       if(domanda.num==1){
            cout<< "giusto" << endl;
            if(domanda.num==2){
                cout << "giusto" << endl;
                    if(domanda.num==0){
                        cout<<"giusto" << endl;
                        if(domanda.num==3){
                            cout << "giusto" << endl;
                        }else{
                            cout << "sbagliato" << endl;
                        }
                    }
                }
            }    
    }   


int main(){
    
    Domanda domanda;    

    leggi_Testo();
    for(int i=0; i<4; i++){
        cout << "inserisci la risposta alla domanda: " << "["<< i <<"]"<< endl;
        cin >> domanda.num;
        indovina(domanda.num);
        
    }
    
    return 0;

}