
#include "CL_svc_gestionClient.h"

namespace NS_Svc {
	CL_svc_gestionClient::CL_svc_gestionClient(void)
	{
		this->cad = gcnew NS_Composants::CL_CAD();
		this->personne = gcnew NS_Composants::CL_map_TBCLIENT();
		this->ds = gcnew Data::DataSet();
	}

	DataSet^ CL_svc_gestionClient::listePersonnel(String^ dataTableName)
	{
		//this->ds->Clear();
		this->ds = this->cad->getRows(this->personne->SELECT(), dataTableName);
		return ds;
	}

	int CL_svc_gestionClient::ajouter(String^ nom, String^ prenom, String^ datenaissance, String^ datepremierachat)
	{
		int id_personne;
		//référence null
		this->personne->setNom(nom);
		this->personne->setPrenom(prenom);
		this->personne->setDateNaissance(datenaissance);
		this->personne->setDatePremierAchat(datepremierachat);
		id_personne = this->cad->actionRowsID(this->personne->INSERT());

		return id_personne;
	}

	void CL_svc_gestionClient::modifier(int id_personne, String^ nom, String^ prenom, String^ datenaissance, String^ datepremierachat)
	{
		this->personne->setID(id_personne);
		this->personne->setNom(nom);
		this->personne->setPrenom(prenom);
		this->personne->setDateNaissance(datenaissance);
		this->personne->setDatePremierAchat(datepremierachat);

		this->cad->actionRows(this->personne->UPDATE());
	}

	void CL_svc_gestionClient::supprimer(int id_personne)
	{
		this->personne->setID(id_personne);
		this->cad->actionRows(this->personne->DELETE());
	}
}