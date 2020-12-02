#include "CL_svc_gestionFacture.h"

namespace NS_Svc {
	CL_svc_gestionFacture::CL_svc_gestionFacture(void)
	{
		this->cad = gcnew NS_Composants::CL_CAD();
		this->facture = gcnew NS_Composants::CL_map_TBCOMMANDE();
		this->ds = gcnew Data::DataSet();
	}

	DataSet^ CL_svc_gestionFacture::listeFacture(String^ dataTableName)
	{
		//this->ds->Clear();
		this->ds = this->cad->getRows(this->facture->SELECT(), dataTableName);
		return ds;
	}

	int CL_svc_gestionFacture::ajouter(String^ nom, String^ adresse, String^ code, String^ ville, String^ num, int idcommande, int idclient)
	{
		int id_personne;
		//référence null
		this->facture->setdateCommande(nom);
		this->facture->setdateLivraison(adresse);
		this->facture->setdatePaiement(code);
		this->facture->setmoyenPaiement(ville);
		this->facture->setreferenceCommande(num);
		this->facture->setidClient(idcommande);
		this->facture->setidFacture(idclient);
		id_personne = this->cad->actionRowsID(this->facture->INSERT());

		return id_personne;
	}

	void CL_svc_gestionFacture::modifier(int id_facture, String^ nom, String^ adresse, String^ code, String^ ville, String^ num, int idcommande, int idclient)
	{
		this->facture->setID(id_facture);
		this->facture->setdateCommande(nom);
		this->facture->setdateLivraison(adresse);
		this->facture->setdatePaiement(code);
		this->facture->setmoyenPaiement(ville);
		this->facture->setreferenceCommande(num);
		this->facture->setidClient(idcommande);
		this->facture->setidFacture(idclient);

		this->cad->actionRows(this->facture->UPDATE());
	}

	void CL_svc_gestionFacture::supprimer(int id_facture)
	{
		this->facture->setID(id_facture);
		this->cad->actionRows(this->facture->DELETE());
	}
}