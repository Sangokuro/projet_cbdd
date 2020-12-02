#pragma once
using namespace System;

namespace NS_Composants {
	ref class CL_map_TBCOMMANDE
	{
	private:
		int id_commande;
		String^ date_commande;
		String^ date_livraison;
		String^ date_paiement;
		String^ moyen_paiement;
		String^ reference_commande;
		int id_client;
		int id_facture;


	public:
		CL_map_TBCOMMANDE(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setID(int);
		void setdateCommande(String^);
		void setdateLivraison(String^);
		void setdatePaiement(String^);
		void setmoyenPaiement(String^);
		void setreferenceCommande(String^);
		void setidClient(int);
		void setidFacture(int);

		int getId(void);
		String^ getdateCommande(void);
		String^ getdateLivraison(void);
		String^ getdatePaiement(void);
		String^ getmoyenPaiement(void);
		String^ getreferenceCommande(void);
		int getidClient(void);
		int getidFacture(void);
	};

}