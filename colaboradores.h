//GILER ANNI Ingresar y mostrar los datos personales
class Persona{
	
	private:
		//fstream archivo;
		string nombres, apellidos,cedula;
		int aa,ma,da,an,mn,dn,a,m,d;
		float peso, estatura,imc;
		
		
	public:
  Persona(){
		}
  void ingresar()
		{
			
			cout<<"Ingrese los datos"<<endl;
			
			cout<<"Degite su numero de cedula: \n";getline(cin,cedula); 
			
			cout<<"Escriba sus nombres:  ";getline(cin,nombres);//
			cout<<"Escriba sus apellidos:  ";getline(cin,apellidos);
			cout<<"Digite su peso: ";cin>>peso;
			cout<<"Digite su estatura: ";cin>>estatura;
			cout<<"Ingres la fecha de nacimiento (a-m-d): "; 
               cin>>an>>mn>>dn;
            
		}

	void mostrar()
		{
	    cout<<"-----------------------------------------------------"<<endl;	
		cout<<"|CEDULA"<<"\t";
		cout<<"  |NOMBRES"<<"\t"; 
		cout<<"  |APELLIDOS"<<"\t";
		cout<<"  |PESO"<<"\t";
		cout<<"  |ESTATURA"<<"\t";
		cout<<"  |AA:"<<"\t";
		cout<<"  |MM:"<<"\t";
		cout<<"  |DD:"<<endl;
cout<<"|"<<cedula<<"\t";
		cout<<"  |"<<nombres<<"\t";
		cout<<"  |"<<apellidos<<"\t";
		cout<<"|"<<peso<<"\t";
		cout<<"|"<<estatura<<"\t";
		cout<<"  |"<<an<<"\t";
		cout<<"  |"<<mn<<"\t";
		cout<<"  |"<<dn<<endl;
		
		}

//BAEZ DANIEL
//ERAS JOEL
//BECERRA MICHAEL
//MONTAŃO LUIS
