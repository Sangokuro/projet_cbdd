#include "CL_CAD.h"
#include "CL_svc_gestionCatalogue.h"

namespace NS_Svc {
	CL_svc_gestionCatalogue::CL_svc_gestionCatalogue(void)
	{
		this->cad = gcnew NS_Composants::CL_CAD();
		this->catalogue = gcnew NS_Composants::CL_map_TBGESTIONCATALOGUE();
		this->ds = gcnew Data::DataSet();
		this->TestCatalogue2 = gcnew TestCatalogue1();
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

		/*this->TestCatalogue2->comparercatalogue1(this->catalogue->INSERT(), "INSERT INTO Catalogue " +
			"(prix_articleht,quantite_stock,seuil_rea,taux_tva) " +
			"VALUES('500', '" + this->catalogue->getquantiteStock() + "', '" + this->catalogue->getseuilRea() + "', '" + this->catalogue->gettauxTva() + "');SELECT @@IDENTITY;");*/

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
		/*this->TestCatalogue2->comparercatalogue(this->catalogue->UPDATE(), "UPDATE Catalogue " +
			"SET prix_articleht = '" + this->catalogue->getprixArticle() + "', quantite_stock = '5', seuil_rea = '" + this->catalogue->getseuilRea() + "', taux_tva = '" + this->catalogue->gettauxTva() + "' " +
			"WHERE(id_catalogue = " + this->catalogue->getId() + ");");*/
	}
	void CL_svc_gestionCatalogue::supprimer(int id_catalogue)
	{
		this->catalogue->setID(id_catalogue);
		this->cad->actionRows(this->catalogue->DELETE());
		/*this->TestCatalogue2->comparercatalogue2(this->catalogue->DELETE(), "DELETE FROM Catalogue " +
			"WHERE(id_catalogue=" + 5 + ");");*/
	}
}