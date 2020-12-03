#pragma once
using namespace System;

namespace NS_Composants {
	ref class CL_map_TBSTOCK
	{
	private:
		int id_article;
		String^ nom_article;
		String^ nature_article;
		String^ couleur_article;


	public:
		CL_map_TBSTOCK(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setId(int);
		void setNomarticle(String^);
		void setNaturearticle(String^);
		void setCouleurarticle(String^);
		int getId(void);
		String^ getNomarticle(void);
		String^ getNaturearticle(void);
		String^ getCouleurarticle(void);
	};
};

