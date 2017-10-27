//Programa de tarea
#include<iostream>
using namespace std;
int esprimo(int p){
  int flag=0;
  for (int i=2;i<p/2;i++)
    {
      if(p%i ==0)
	flag=1;
    }
  return flag ;
}

int main(){
  long S=12;
  int p=0;
  cout << "inserte un numero "<<endl;
  cin >> p;
  do{    
    if ( (p%2) ==0)
      p=p+1;
    if (esprimo(p)==1)
      p=p+2;
  }while(esprimo(p)==1);

      cout<<"el valor de p es "<< p <<endl;

return 0;
}

