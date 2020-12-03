#pragma once
using namespace System;

namespace NS_Composants {
	ref class CL_map_TBCOMMANDE
	{
	private:
		int id_commande;
		DateTime^ date_commande;
		DateTime^ date_livraison;
		DateTime^ date_paiement;
		String^ moyen_paiement;
		String^ reference_commande;
		int id_client;
		int id_facture;


	public:
		CL_map_TBCOMMANDE(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ UPDATEIDfacture(void);
		String^ DELETE(void);
		void setIDcommande(int);
		void setdateCommande(DateTime^);
		void setdateLivraison(DateTime^);
		void setdatePaiement(DateTime^);
		void setmoyenPaiement(String^);
		void setreferenceCommande(String^);
		void setidClient(int);
		void setidFacture(int);

		int getId(void);
		DateTime^ getdateCommande(void);
		DateTime^ getdateLivraison(void);
		DateTime^ getdatePaiement(void);
		String^ getmoyenPaiement(void);
		String^ getreferenceCommande(void);
		int getidClient(void);
		int getidFacture(void);
	};

}