#pragma once
using namespace System;
#include "TestPersonnel.h"
namespace NS_Composants {

	ref class CL_map_TBpersonnel1
	{
	private:
		int id_personnel;
		String^ nom_personnel;
		String^ prenom_personnel;
		String^ nom_superieur;
		String^ adresse_personnel;
		int code_postal;
		String^ ville;
		DateTime^ date_embauche;
		int id_personnel_dirige;
		TestPersonnel1^ testePersonnel2;
		
	public:
		CL_map_TBpersonnel1(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setIDpersonnel(int);
		void setNompersonnel(String^);
		void setPrenompersonnel(String^);
		void setNomsuperieure(String^);
		void setAdressepersonnel(String^);
		void setcodepostal(int);
		void setville(String^);
		void setdateembauche(DateTime^);
		void setIDpersonnelsuperieure(int);
		int getIDpersonnel(void);
		String^ getNompersonnel(void);
		String^ getPrenompersonnel(void);
		String^ getNomsuperieure(void);
		String^ getAdressepersonnel(void);
		int getcodepostal(void);
		String^ getville(void);
		DateTime^ getdateembauche(void);
	    int getIDpersonnelsuperieure(void);

	};


}