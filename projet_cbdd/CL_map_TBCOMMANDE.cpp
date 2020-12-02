#include "CL_map_TBCOMMANDE.h"

namespace NS_Composants {
	CL_map_TBCOMMANDE::CL_map_TBCOMMANDE(void)
	{
		this->id_commande = -1;
		this->date_commande = "01/01/1999";
		this->date_livraison = "01/01/1999";
		this->date_paiement = "01/01/1999";
		this->moyen_paiement = "01/01/1999";
		this->reference_commande = "Vide";
		this->id_client = -1;
		this->id_facture = -1;
	}

	String^ CL_map_TBCOMMANDE::SELECT(void)
	{
		return "SELECT id_commande,date_commande,date_livraison,date_paiement,moyen_paiement,reference_commande,id_client,id_facture " +
			"FROM Commande;";
	}

	String^ CL_map_TBCOMMANDE::INSERT(void)
	{
		return "INSERT INTO Commande " +
			"(date_commande,date_livraison,date_paiment,moyen_paiement,reference_commande,id_client,id_facture) " +
			"VALUES('" + this->getdateCommande() + "', '" + this->getdateLivraison() + "', '" + this->getdatePaiement() + "', '" + this->getmoyenPaiement() + "', '" + this->getreferenceCommande()
			+ "', '" + this->getidClient() + "', '" + getidFacture() + "');SELECT @@IDENTITY;";
	}

	String^ CL_map_TBCOMMANDE::UPDATE(void)
	{
		return "UPDATE Client " +
			"SET date_commande = '" + this->getdateCommande() + "', date_livraison = '" + this->getdateLivraison() + "', date_paiement = '" + this->getdatePaiement() + "', moyen_paiement = '" + this->getmoyenPaiement() +
			"', reference_commande = '" + this->getreferenceCommande() + "', id_client = '" + this->getidClient() + "', id_facture = '" + this->getidFacture() + "' " +
			"WHERE(id_commande = " + this->getId() + ");";
	}

	String^ CL_map_TBCOMMANDE::DELETE(void)
	{
		return "DELETE FROM Commande " +
			"WHERE(id_commande=" + this->getId() + ");";
	}

	void CL_map_TBCOMMANDE::setID(int id_commande)
	{
		if (id_commande > 0) {
			this->id_commande = id_commande;
		}
	}

	void CL_map_TBCOMMANDE::setdateCommande(String^ commande)
	{
		if (commande != "") {
			this->date_commande = commande;
		}
	}

	void CL_map_TBCOMMANDE::setdateLivraison(String^ commande)
	{
		if (commande != "") {
			this->date_livraison = commande;
		}
	}

	void CL_map_TBCOMMANDE::setdatePaiement(String^ commande)
	{
		if (commande != "") {
			this->date_paiement = commande;
		}
	}

	void CL_map_TBCOMMANDE::setmoyenPaiement(String^ commande)
	{
		if (commande != "") {
			this->moyen_paiement = commande;
		}
	}

	void CL_map_TBCOMMANDE::setreferenceCommande(String^ commande)
	{
		if (commande != "") {
			this->reference_commande = commande;
		}
	}

	void CL_map_TBCOMMANDE::setidClient(int id_commande)
	{
		if (id_commande > 0) {
			this->id_client = id_commande;
		}
	}

	void CL_map_TBCOMMANDE::setidFacture(int id_commande)
	{
		if (id_commande > 0) {
			this->id_facture = id_commande;
		}
	}

	int CL_map_TBCOMMANDE::getId(void)
	{
		return this->id_client;
	}

	String^ CL_map_TBCOMMANDE::getdateCommande(void)
	{
		return this->date_commande;
	}

	String^ CL_map_TBCOMMANDE::getdateLivraison(void)
	{
		return this->date_livraison;
	}

	String^ CL_map_TBCOMMANDE::getdatePaiement(void)
	{
		return this->date_paiement;
	}

	String^ CL_map_TBCOMMANDE::getmoyenPaiement(void)
	{
		return this->moyen_paiement;
	}

	String^ CL_map_TBCOMMANDE::getreferenceCommande(void)
	{
		return this->reference_commande;
	}

	int CL_map_TBCOMMANDE::getidClient(void)
	{
		return this->id_client;
	}

	int CL_map_TBCOMMANDE::getidFacture(void)
	{
		return this->id_facture;
	}

}