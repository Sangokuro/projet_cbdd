
#include "CL_map_TBCLIENT.h"

namespace NS_Composants {
	CL_map_TBCLIENT::CL_map_TBCLIENT(void)
	{
		this->id_personne = -1;
		this->nom = "RIEN";
		this->prenom = "RIEN";
	}

	String^ CL_map_TBCLIENT::SELECT(void)
	{
		return "SELECT id_client,nom_client,prenom_client,date_naissance,date_premier_achat " +
			"FROM Client;";
	}

	String^ CL_map_TBCLIENT::INSERT(void)
	{
		return "INSERT INTO Client " +
			"(nom_client, prenom_client, date_naissance, date_premier_achat) " +
			"VALUES('" + this->getNom() + "', '" + this->getPrenom() + "', '" + this->getDateNaissance() + "', '" + this->getDatePremierAchat() + "');SELECT @@IDENTITY;";
	}

	String^ CL_map_TBCLIENT::UPDATE(void)
	{
		return "UPDATE Client " +
			"SET nom_client = '" + this->getNom() + "', prenom_client = '" + this->getPrenom() + "', date_naissance = '" + this->getDateNaissance() + "', date_premier_achat = '" + this->getDatePremierAchat() + "' " +
			"WHERE(id_client = " + this->getId() + ");";
	}

	String^ CL_map_TBCLIENT::DELETE(void)
	{
		return "DELETE FROM Client " +
			"WHERE(id_client=" + this->getId() + ");";
	}

	void CL_map_TBCLIENT::setID(int id_personne)
	{
		if (id_personne > 0) {
			this->id_personne = id_personne;
		}
	}

	void CL_map_TBCLIENT::setPrenom(String^ prenom)
	{
		if (prenom != "") {
			this->prenom = prenom;
		}
	}

	void CL_map_TBCLIENT::setDateNaissance(String^ date)
	{
		if (date != "") {
			this->date_naissance = date;
		}
	}

	void CL_map_TBCLIENT::setDatePremierAchat(String^ date)
	{
		if (date != "") {
			this->date_naissance = date;
		}
	}

	void CL_map_TBCLIENT::setNom(String^ nom)
	{
		if (nom != "") {
			this->nom = nom;
		}
	}

	int CL_map_TBCLIENT::getId(void)
	{
		return this->id_personne;
	}

	String^ CL_map_TBCLIENT::getNom(void)
	{
		return this->nom;
	}

	String^ CL_map_TBCLIENT::getPrenom(void)
	{
		return this->prenom;
	}
	String^ CL_map_TBCLIENT::getDateNaissance(void)
	{
		return this->date_naissance;
	}
	String^ CL_map_TBCLIENT::getDatePremierAchat(void)
	{
		return this->date_premier_achat;
	}
}
