#include<iostream>
#include<memory>
#include<iomanip>
#include "algorithm/fila_dados.h"
 void final_system();
int main(){ 
	unique_ptr<vetor>ini_vector(new vetor());
	ini_vector->inicio_vetor();
         final_system();


 }
 void final_system(){

	 cout<<setw(20)<<setfill('.')<<""<<endl;
	 cout<<"final sistema"<<endl;
 }
