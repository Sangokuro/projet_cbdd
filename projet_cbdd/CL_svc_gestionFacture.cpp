#include "CL_svc_gestionFacture.h"

namespace NS_Svc {
	CL_svc_gestionFacture::CL_svc_gestionFacture(void)
	{
		this->cad = gcnew NS_Composants::CL_CAD();
		this->facture = gcnew NS_Composants::CL_map_TBFACTURE();
		this->ds = gcnew Data::DataSet();
		this->Test12 = gcnew TestFacture1();
	}

	DataSet^ CL_svc_gestionFacture::listeFacture(String^ dataTableName)
	{
		//this->ds->Clear();
		this->ds = this->cad->getRows(this->facture->SELECT(), dataTableName);
		/*this->Test12->comparerfacture(this->facture->SELECT(), "SELECT id_facture,nom_societe,adresse_societe,code_postal,ville,numero_service_client,id_commande " +
			"FROM Facture;");*/
		return ds;
	}

	int CL_svc_gestionFacture::ajouter(String^ nom, String^ adresse, int code, String^ ville, float num, int idcommande)
	{
		int id_personne;
		//référence null
		this->facture->setnomsociete(nom);
		this->facture->setadressesociete(adresse);
		this->facture->setcodepostal(code);
		this->facture->setville(ville);
		this->facture->setnumeroserviceclient(num);
		this->facture->setidcommande(idcommande);
		id_personne = this->cad->actionRowsID(this->facture->INSERT());

		return id_personne;
	}

	void CL_svc_gestionFacture::modifier(int id_facture, String^ nom, String^ adresse, int code, String^ ville, float num, int idcommande)
	{
		this->facture->setID(id_facture);
		this->facture->setnomsociete(nom);
		this->facture->setadressesociete(adresse);
		this->facture->setcodepostal(code);
		this->facture->setville(ville);
		this->facture->setnumeroserviceclient(num);
		this->facture->setidcommande(idcommande);

		this->cad->actionRows(this->facture->UPDATE());
	}

	void CL_svc_gestionFacture::supprimer(int id_facture)
	{
		this->facture->setID(id_facture);
		this->cad->actionRows(this->facture->DELETE());
	}
}