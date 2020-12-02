#include "CL_map_TBCOMMANDE.h"

namespace NS_Composants {
	CL_map_TBCOMMANDE::CL_map_TBCOMMANDE(void)
	{
		this->id_commande = -1;
		this->moyen_paiement = "VIDE";
		this->reference_commande = "VIDE";
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
			"(date_commande,date_livraison,date_paiement,moyen_paiement,reference_commande) " +
			"VALUES('" + this->getdateCommande() + "', '" + this->getdateLivraison() + "', '" + this->getdatePaiement() + "', '" + this->getmoyenPaiement() + "', '" +
			this->getreferenceCommande() + "' " + ");SELECT @@IDENTITY;";
	}

	String^ CL_map_TBCOMMANDE::UPDATE1(void)
	{
		return "UPDATE Commande " +
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

	void CL_map_TBCOMMANDE::setdateCommande(DateTime^ datecom)
	{
			this->date_commande = datecom;
	}

	void CL_map_TBCOMMANDE::setdateLivraison(DateTime^ dateliv)
	{
			this->date_livraison = dateliv;
	}

	void CL_map_TBCOMMANDE::setdatePaiement(DateTime^ datepaie)
	{
			this->date_paiement = datepaie;
	}

	void CL_map_TBCOMMANDE::setmoyenPaiement(String^ moypaie)
	{
		if (moypaie != "") {
			this->moyen_paiement = moypaie;
		}
	}

	void CL_map_TBCOMMANDE::setreferenceCommande(String^ refcom)
	{
		if (refcom != "") {
			this->reference_commande = refcom;
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

	DateTime^ CL_map_TBCOMMANDE::getdateCommande(void)
	{
		return this->date_commande;
	}

	DateTime^ CL_map_TBCOMMANDE::getdateLivraison(void)
	{
		return this->date_livraison;
	}

	DateTime^ CL_map_TBCOMMANDE::getdatePaiement(void)
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