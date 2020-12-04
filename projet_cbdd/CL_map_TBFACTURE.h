#pragma once
using namespace System;
#include "TestFacture.h"
namespace NS_Composants {
	ref class CL_map_TBFACTURE
	{
	private:
		int id_facture;
		String^ nom_societe;
		String^ adresse_societe;
		int code_postal;
		String^ ville;
		float numero_service_client;
		int id_commande;
		TestFacture1^ Test12;


	public:
		CL_map_TBFACTURE(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setID(int);
		void setnomsociete(String^);
		void setadressesociete(String^);
		void setcodepostal(int);
		void setville(String^);
		void setnumeroserviceclient(float);
		void setidcommande(int);

		int getId(void);
		String^ getnomsociete(void);
		String^ getadressesociete(void);
		int getcodepostal(void);
		String^ getville(void);
		float getnumeroserviceclient(void);
		int getidcommande(void);
	};

}