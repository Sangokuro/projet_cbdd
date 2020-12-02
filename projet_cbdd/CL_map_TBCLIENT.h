#pragma once
using namespace System;

namespace NS_Composants {
	ref class CL_map_TBCLIENT
	{
	private:
		int id_personne;
		String^ nom;
		String^ prenom;
		String^ date_naissance;
		String^ date_premier_achat;

	public:
		CL_map_TBCLIENT(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setID(int);
		void setPrenom(String^);
		void setDateNaissance(String^);
		void setDatePremierAchat(String^);
		void setNom(String^);
		int getId(void);
		String^ getNom(void);
		String^ getPrenom(void);
		String^ getDateNaissance(void);
		String^ getDatePremierAchat(void);
	};

}