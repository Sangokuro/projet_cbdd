#include "CL_svc_gestionCommande.h"
#include "CL_svc_gestionFacture.h"
#include"Facture.h"
#include "AdresseCommande.h"


namespace NS_Svc {
	CL_svc_gestionCommande::CL_svc_gestionCommande(void)
	{
		this->cad = gcnew NS_Composants::CL_CAD();
		this->commande = gcnew NS_Composants::CL_map_TBCOMMANDE();
		this->ds = gcnew Data::DataSet();
		this->TestCommande2 = gcnew TestCommande1();
	}

	DataSet^ CL_svc_gestionCommande::listeCommande(String^ dataTableName)
	{
		//this->ds->Clear();
		this->ds = this->cad->getRows(this->commande->SELECT(), dataTableName);
		return ds;
	}

	int CL_svc_gestionCommande::ajouter(DateTime^ date1, DateTime^ date2, DateTime^ date3, String^ paiement, String^ reference, int quantite, String^ article)
	{
		int id_commande;
		//référence null
		this->commande->setdateCommande(date1);
		this->commande->setdateLivraison(date2);
		this->commande->setdatePaiement(date3);
		this->commande->setmoyenPaiement(paiement);
		this->commande->setreferenceCommande(reference);
		this->commande->setquantite(quantite);
		this->commande->setidClient(0);
		this->commande->setidFacture(0);
		id_commande = this->cad->actionRowsID(this->commande->INSERT(article));
		this->cad->actionRows(this->commande->INSERTLIEN(article, id_commande));
		/*this->TestCommande2->comparercommande1(this->commande->INSERT(article), "INSERT INTO Commande " +
			"(date_commande,date_livraison,date_paiement,moyen_paiement,reference_commande,montant_total_ht,montant_total_tva,montant_total_ttc,prix_special,quantite_article) " +
			"VALUES('" + this->commande->getdateCommande() + "', '" + this->commande->getdateLivraison() + "', '" + this->commande->getdatePaiement() + "', 'carte bancaire', '" +
			this->commande->getreferenceCommande() + "'," + "(SELECT prix_articleht FROM Catalogue WHERE (id_article=(SELECT id_article FROM Article WHERE nom_article='" + article + "')))," +
			"(SELECT taux_tva FROM Catalogue WHERE (id_article=(SELECT id_article FROM Article WHERE nom_article='" + article + "')))" + ",8,8," + this->commande->getquantite() + ");SELECT @@IDENTITY;");*/

		//NS_Svc::CL_svc_gestionFacture^ processusFacture;
		//processusFacture->ajouter("aaa", "eee", "e", "e", "e", id_commande, 8);

		int *id_facture = new int;
		std::string* nom = new std::string;
		std::string* prenom= new std::string;

		

		

		projet_cbdd::Facture^ f5 = gcnew projet_cbdd::Facture(id_commande, id_facture,nom,prenom);
		f5->ShowDialog();

		String^ nom2 = gcnew String((*nom).c_str());
		String^ prenom2 = gcnew String((*prenom).c_str());

		//projet_cbdd::AdresseCommande^ f6 = gcnew projet_cbdd::AdresseCommande(nom, prenom);
		//f6->ShowDialog();

		this->commande->setIDcommande(id_commande);
		this->commande->setmoyenPaiement(nom2);
		this->commande->setidFacture(*id_facture);

		this->cad->actionRows(this->commande->UPDATEIDfacture(nom2, prenom2));

		return id_commande;
		
	}

	void NS_Svc::CL_svc_gestionCommande::modifier(int id_commande, DateTime^ date1, DateTime^ date2, DateTime^ date3, String^ paiement, int quantite, String^ reference)
	{
		this->commande->setIDcommande(id_commande);
		this->commande->setdateCommande(date1);
		this->commande->setdateLivraison(date2);
		this->commande->setdatePaiement(date3);
		this->commande->setmoyenPaiement(paiement);
		this->commande->setquantite(quantite);
		this->commande->setreferenceCommande(reference);

		this->cad->actionRows(this->commande->UPDATE());


		/*this->TestCommande2->comparercommande(this->commande->UPDATE(), "UPDATE Commande " +
			"SET date_commande = '" + this->commande->getdateCommande() + "', date_livraison = '" + this->commande->getdateLivraison() + "', date_paiement = '" + this->commande->getdatePaiement() + "', moyen_paiement = 'cheque', reference_commande = '" + this->commande->getreferenceCommande() +/* "', id_client= " + this->getidClient() + ", id_facture=" + this->getidFacture() +
			"' WHERE(id_commande = " + this->commande->getId() + ");");*/

	}

	void CL_svc_gestionCommande::supprimer(int id_commande)
	{
		this->commande->setIDcommande(id_commande);
		this->cad->actionRows(this->commande->DELETE());
	}
}