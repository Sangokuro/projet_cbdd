#include "CL_CAD.h"
#include "CL_svc_gestionCatalogue.h"

namespace NS_Svc {
	CL_svc_gestionCatalogue::CL_svc_gestionCatalogue(void)
	{
		this->cad = gcnew NS_Composants::CL_CAD();
		this->catalogue = gcnew NS_Composants::CL_map_TBGESTIONCATALOGUE();
		this->ds = gcnew Data::DataSet();
	}
	DataSet^ CL_svc_gestionCatalogue::listeCatalogue(String^ dataTableName)
	{
		this->ds = this->cad->getRows(this->catalogue->SELECT(), dataTableName);

		return ds;
	}
	int CL_svc_gestionCatalogue::ajouter(int prix, int quantite, int seuil, int tauxtva)
	{
		int id_personne;
		//référence null
		this->catalogue->setprixArticle(prix);
		this->catalogue->setquantiteStock(quantite);
		this->catalogue->setseuilRea(seuil);
		this->catalogue->settauxTva(tauxtva);
		id_personne = this->cad->actionRowsID(this->catalogue->INSERT());

		/*this->TestClient2->comparerstring2(this->personne->INSERT(), "INSERT INTO Client " +
			"(nom_client, prenom_client, date_naissance, date_premier_achat) " +
			"VALUES('Benzema', '" + this->personne->getPrenom() + "', '" + this->personne->getDateNaissance() + "', '" + this->personne->getDatePremierAchat() + "');SELECT @@IDENTITY;");*/

		return id_personne;
	}
	void CL_svc_gestionCatalogue::modifier(int id_catalogue, int prix, int quantite, int seuil, int tauxtva, int idarticle)
	{
		this->catalogue->setID(id_catalogue);
		this->catalogue->setprixArticle(prix);
		this->catalogue->setquantiteStock(quantite);
		this->catalogue->setseuilRea(seuil);
		this->catalogue->settauxTva(tauxtva);
		this->catalogue->setidArticle(idarticle);

		this->cad->actionRows(this->catalogue->UPDATE());
	}
	void CL_svc_gestionCatalogue::supprimer(int id_catalogue)
	{
		this->catalogue->setID(id_catalogue);
		this->cad->actionRows(this->catalogue->DELETE());
	}
}