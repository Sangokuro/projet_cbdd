#pragma once
using namespace System;

#include "TestClient.h"

namespace NS_Composants {
	ref class CL_map_TBCLIENT
	{
	private:
		int id_personne;
		String^ nom;
		String^ prenom;
		DateTime^ date_naissance;
		DateTime^ date_premier_achat;
		TestClient1^ TestClient2;

	public:
		CL_map_TBCLIENT(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		String^ JointureCommandeClient(void);
		void setID(int);
		void setPrenom(String^);
		void setDateNaissance(DateTime^);
		void setDatePremierAchat(DateTime^);
		void setNom(String^);
		int getId(void);
		String^ getNom(void);
		String^ getPrenom(void);
		DateTime^ getDateNaissance(void);
		DateTime^ getDatePremierAchat(void);
	};

}