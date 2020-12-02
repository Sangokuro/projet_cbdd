
#include "CL_svc_gestionClient.h"

namespace NS_Svc {
	CL_svc_gestionClient::CL_svc_gestionClient(void)
	{
		this->cad = gcnew NS_Composants::CL_CAD();
		this->personne = gcnew NS_Composants::CL_map_TBCLIENT();
		this->ds = gcnew Data::DataSet();
		this->teste = gcnew test1();
	}

	DataSet^ CL_svc_gestionClient::listePersonnel(String^ dataTableName)
	{
		//this->ds->Clear();
		this->ds = this->cad->getRows(this->personne->SELECT(), dataTableName);
		/*this->teste->comprarerstring(this->personne->SELECT(), "SELECT id_client,nom_client,prenom_client,date_naissance,date_premier_achat " +
			"FROM Client;",this->personne->getNom());*/
		return ds;
	}

	int CL_svc_gestionClient::ajouter(String^ nom, String^ prenom, DateTime^ datenaissance, DateTime^ datepremierachat)
	{
		int id_personne;
		//référence null
		this->personne->setNom(nom);
		this->personne->setPrenom(prenom);
		this->personne->setDateNaissance(datenaissance);
		this->personne->setDatePremierAchat(datepremierachat);
		id_personne = this->cad->actionRowsID(this->personne->INSERT());
		
		/*this->teste->comparerstring2(this->personne->INSERT(), "INSERT INTO Client " +
			"(nom_client, prenom_client, date_naissance, date_premier_achat) " +
			"VALUES('Benzema', '" + this->personne->getPrenom() + "', '" + this->personne->getDateNaissance() + "', '" + this->personne->getDatePremierAchat() + "');SELECT @@IDENTITY;");*/

		return id_personne;
	
	}

	void CL_svc_gestionClient::modifier(int id_personne, String^ nom, String^ prenom, DateTime^ datenaissance, DateTime^ datepremierachat)
	{
		this->personne->setID(id_personne);
		this->personne->setNom(nom);
		this->personne->setPrenom(prenom);
		this->personne->setDateNaissance(datenaissance);
		this->personne->setDatePremierAchat(datepremierachat);

		this->cad->actionRows(this->personne->UPDATE());
		/*this->teste->comparerstring1(this->personne->UPDATE(), "UPDATE Client " +
			"SET nom_client = '" + this->personne->getNom() + "', prenom_client = 'rabie', date_naissance = '" + this->personne->getDateNaissance() + "', date_premier_achat = '" + this->personne->getDatePremierAchat() + "' " +
			"WHERE(id_client = " + this->personne->getId() + ");");*/
	}

	void CL_svc_gestionClient::supprimer(int id_personne)
	{
		this->personne->setID(id_personne);
		this->cad->actionRows(this->personne->DELETE());
		/*this->teste->comparerstring3(this->personne->DELETE(), "DELETE FROM Client " +
			"WHERE(id_client=" + 14 + ");");*/


	}
}