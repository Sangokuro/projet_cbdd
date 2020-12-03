#pragma once
using namespace System;

#include "TestCatalogue.h"
namespace NS_Composants {
	ref class CL_map_TBGESTIONCATALOGUE
	{
	private:
		int id_catalogue;
		int prix_articleht;
		int quantite_stock;
		int seuil_rea;
		int taux_tva;
		int id_article;
		TestCatalogue1^ TestCatalogue2;

	public:
		CL_map_TBGESTIONCATALOGUE(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setID(int);
		void setprixArticle(int);
		void setquantiteStock(int);
		void setseuilRea(int);
		void settauxTva(int);
		void setidArticle(int);
		int getId(void);
		int getprixArticle(void);
		int getquantiteStock(void);
		int getseuilRea(void);
		int gettauxTva(void);
		int getidArticle(void);
	};

}