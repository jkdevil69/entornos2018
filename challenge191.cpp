#include <iostream>
using namespace std;
int main()
{   
    int prueba,compartimentos,litrosmax,diferencia,suma;
    
    
    cin >> prueba;       
    for(int i = 0; i < prueba; i++)
    {
        cin >> compartimentos>>litrosmax>>diferencia;
        suma=0;
       for(int j = 0; j<compartimentos;j++) 
       {
    
        suma=litrosmax+suma;
        litrosmax = litrosmax-diferencia;
    }
        cout<< suma<<endl;
    //else cout <<"NO"<<endl;
        
   }     
    
    return 0;
}
