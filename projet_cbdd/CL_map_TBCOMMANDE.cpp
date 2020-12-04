#include "CL_map_TBCOMMANDE.h"

namespace NS_Composants {
	CL_map_TBCOMMANDE::CL_map_TBCOMMANDE(void)
	{
		this->id_commande = -1;
		this->moyen_paiement = "VIDE";
		this->reference_commande = "VIDE";
		this->id_client = 0;
		this->id_facture = 0;
	}

	String^ CL_map_TBCOMMANDE::SELECT(void)
	{
		return "SELECT id_commande,date_commande,date_livraison,date_paiement,moyen_paiement,reference_commande,montant_total_ht,quantite_article,id_client,id_facture " +
			"FROM Commande;";
	}

	String^ CL_map_TBCOMMANDE::INSERT(String^ article)
	{
		return "INSERT INTO Commande " +
			"(date_commande,date_livraison,date_paiement,moyen_paiement,reference_commande,montant_total_ht,montant_total_tva,montant_total_ttc,prix_special,quantite_article) " +
			"VALUES('" + this->getdateCommande() + "', '" + this->getdateLivraison() + "', '" + this->getdatePaiement() + "', '" + this->getmoyenPaiement() + "', '" +
			this->getreferenceCommande() + "',"+ 
			"(SELECT prix_articleht*"+ this->getquantite() + " FROM Catalogue WHERE (id_article=(SELECT id_article FROM Article WHERE nom_article='" + article + "')))," +
			"(SELECT prix_articleht * taux_tva * "+this->getquantite()+ " FROM Catalogue WHERE (id_article=(SELECT id_article FROM Article WHERE nom_article='" + article + "'))),"+
			"(SELECT prix_articleht * taux_tva * " + this->getquantite() + "+" + this->getquantite() + "*prix_articleht" + " FROM Catalogue WHERE (id_article=(SELECT id_article FROM Article WHERE nom_article='" + article + "')))," +
			"8,"
			+ this->getquantite() +");SELECT @@IDENTITY;";
	}
	String^ CL_map_TBCOMMANDE::INSERTLIEN(String^ article, int commande) {
		return "INSERT INTO Contient (id_article,id_commande) VALUES((SELECT id_article FROM Article WHERE nom_article='" + article + "')," + commande + ");";
	}

	String^ CL_map_TBCOMMANDE::UPDATE(void)
	{
		return "UPDATE Commande " +
			"SET date_commande = '" + this->getdateCommande() + "', date_livraison = '" + this->getdateLivraison() + "', date_paiement = '" + this->getdatePaiement() + "', moyen_paiement = '" + this->getmoyenPaiement() +
			"', reference_commande = '" + this->getreferenceCommande() +/* "', id_client= " + this->getidClient() + ", id_facture=" + this->getidFacture() +*/
			"' WHERE(id_commande = " + this->getId() + ");";
	}

	String^ CL_map_TBCOMMANDE::UPDATEIDfacture(String^ nom, String^ prenom)
	{
		return "UPDATE Commande " +
			"SET id_facture =" + this->getidFacture() + ", id_client=(SELECT id_client FROM Client WHERE(nom_client='" + nom +"'))" +
			" WHERE(id_commande = " + this->getId() + ");";
	}

	String^ CL_map_TBCOMMANDE::DELETE(void)
	{
		return "DELETE FROM Contient WHERE id_commande=" + getId() + "; DELETE FROM Facture WHERE id_commande=" + getId() +
			"; DELETE FROM Commande WHERE id_commande=" + getId() + ";";
	}

	void CL_map_TBCOMMANDE::setIDcommande(int id_commandes)
	{
		if (id_commandes > 0) {
			this->id_commande = id_commandes;
		}
	}

	void CL_map_TBCOMMANDE::setdateCommande(DateTime^ date_commande)
	{
			this->date_commande = date_commande;
	}

	void CL_map_TBCOMMANDE::setdateLivraison(DateTime^ date_livraison)
	{
			this->date_livraison = date_livraison;
	}

	void CL_map_TBCOMMANDE::setdatePaiement(DateTime^ date_paiement)
	{
			this->date_paiement = date_paiement;
	}

	void CL_map_TBCOMMANDE::setmoyenPaiement(String^ moyen_paiement)
	{
		if (moyen_paiement != "") {
			this->moyen_paiement = moyen_paiement;
		}
	}

	void CL_map_TBCOMMANDE::setreferenceCommande(String^ reference_commande)
	{
		if (reference_commande != "") {
			this->reference_commande = reference_commande;
		}
	}

	void CL_map_TBCOMMANDE::setquantite(int quantite)
	{
		if (quantite > 0) {
			this->quantite = quantite;
		}
	}

	void CL_map_TBCOMMANDE::setidClient(int id_client)
	{
		if (id_client > 0) {
			this->id_client = id_client;
		}
	}

	void CL_map_TBCOMMANDE::setidFacture(int id_facture)
	{
		if (id_facture > 0) {
			this->id_facture = id_facture;
		}
	}

	int CL_map_TBCOMMANDE::getId(void)
	{
		return this->id_commande;
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

	int CL_map_TBCOMMANDE::getquantite(void)
	{
		return this->quantite;
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