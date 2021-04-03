#include<iostream>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
 using namespace std;
 
 struct vetor{
	 void inicio_vetor(){

		 vector<string>nomes;
		 vector<string>::iterator it;
		 int tam;
		 string nome_fila;
		 int remove;
		 cout<<"defina o tamanho da fila"<<endl;
		 cin>>tam;
		 while(tam>0){

			 cout<<"adicione o valor a fila"<<endl;
			 cin>>nome_fila;
		

		         nomes.push_back(nome_fila);	 
			  tam--;
		 }

		 for_each(nomes.begin(),nomes.end(),[](string i){
				 

				 cout<<"nome: "<<i<<endl;

				 cout<<setw(20)<<setfill('.')<<""<<endl;
				 });
	  cout<<"\n";
	  


		 int tam_vector = nomes.size();
		 	 
		  while(tam_vector>0){
		 cout<<"digite 1 para apagar da fila e 0 para sair"<<endl;

		 cin>>remove;
		 if(remove==1){
			 it = nomes.begin();
			 nomes.erase(it);

		
		  for_each(nomes.begin(),nomes.end(),[](string i){
				  
				  cout<<"nome: "<<i<<endl;
				  cout<<setw(20)<<setfill('.')<<""<<endl;
				  });	 

		  tam_vector--;
		 }else{

			 cout<<"final program..."<<endl;
		      _Exit(EXIT_SUCCESS);

		 }

		
		 if(tam_vector<=0){

			 cout<<"todos os elemento da fila removidos"<<endl;
		 }
	
		  }		 
	 }

 };
