#pragma once
using namespace System;

namespace NS_Composants {
	ref class CL_map_TBFACTURE
	{
	private:
		int id_facture;
		String^ nom_societe;
		String^ adresse_societe;
		String^ code_postal;
		String^ ville;
		String^ numero_service_client;
		int id_commande;
		int id_client;


	public:
		CL_map_TBFACTURE(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setID(int);
		void setnomsociete(String^);
		void setadressesociete(String^);
		void setcodepostal(String^);
		void setville(String^);
		void setnumeroserviceclient(String^);
		void setidcommande(int);
		void setidclient(int);

		int getId(void);
		String^ getnomsociete(void);
		String^ getadressesociete(void);
		String^ getcodepostal(void);
		String^ getville(void);
		String^ getnumeroserviceclient(void);
		int getidcommande(void);
		int getidclient(void);
	};

}