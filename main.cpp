#include <iostream>

using namespace std;

const int righeMax=3;
const int colonneMax=3;

//prototipi
void caricaMatrice(int matrix[righeMax][colonneMax]);
void visualizzaMatrice(int matrix[righeMax][colonneMax]);
void caricaVettori(int matrix[righeMax][colonneMax], int vr[righeMax*colonneMax], int vc[righeMax*colonneMax]);
void visualizzaVettori(int vr[], int vc[]);
int Menu();

int main() {

  int scelta;
  int matrix[righeMax][colonneMax];
  int VR[righeMax*colonneMax];
  int VC[righeMax*colonneMax];
  
  do {
    scelta=Menu();
    switch(scelta) {
      case 1:
        caricaMatrice(matrix);
      break;
      case 2:
        visualizzaMatrice(matrix);
      break;
      case 3:
        caricaVettori(matrix,VR,VC);
      break;
      case 4:
        visualizzaVettori(VR,VC);
      break;
      case 0:
        cout<<"Esci"<<endl;
      break;
      default:
        cout<<"Attenzione, scelta sbagliata!"<<endl;
      break;
    }
  }while(scelta!=0);
  
}


int Menu() {
  int scegli;
  cout<<"-----------------MENU-----------------"<<endl;
  cout<<"1-Carica matrice"<<endl;
  cout<<"2-Visualizza matrice"<<endl;
  cout<<"3-Carica vettori righe e colonne"<<endl;
  cout<<"4-Stampa i vettori"<<endl;
  cout<<"0-Fine"<<endl;
  cout<<"Scegli un operazione: "<<endl;
  cin>>scegli;

  return scegli;
}


void caricaMatrice(int matrix[righeMax][colonneMax]) {

  cout<<endl;

  for(int i=0; i<righeMax; i++) {
    for(int j=0; j<colonneMax; j++) {
      cout<<"Inserisci il valore della cella "<<i+1<<" "<<j+1<<": ";
      cin>>matrix[i][j];
    }
  }


  cout<<endl;

}

void visualizzaMatrice(int matrix[righeMax][colonneMax]) {

  cout<<endl;

  for(int i=0; i<righeMax; i++) {
    for(int j=0; j<colonneMax; j++) {
      cout<<matrix[i][j]<<"\t";
    }
    cout<<endl;
  }

  cout<<endl;

}


void caricaVettori(int matrix[righeMax][colonneMax], int vr[], int vc[]) {
  
  for(int i=0; i<righeMax; i++) {
    for(int j=0; j<colonneMax; j++) {
      vr[i*colonneMax+j]=matrix[i][j];
    }
  }


  for(int i=0; i<righeMax; i++) {
    for(int j=0; j<colonneMax; j++) {
      vc[i*colonneMax+j]=matrix[j][i];
    }
  }

  
}


void visualizzaVettori(int vr[], int vc[]) {
  cout<<endl;

  cout<<endl;

  cout<<"---------------VETTORE RIGHE---------------"<<endl;

  for(int i=0; i<righeMax*colonneMax; i++) {
     cout<<vr[i]<<endl;
  }

  cout<<endl;

  cout<<"---------------VETTORE COLONNE---------------"<<endl;

  for(int i=0; i<righeMax*colonneMax; i++) {
    cout<<vc[i]<<endl;
  }
  
}
