#include "CL_map_TBSTOCK.h"

namespace NS_Composants {

	CL_map_TBSTOCK::CL_map_TBSTOCK(void)
	{
		this->id_article = -1;
		this->nom_article = "RIEN";
		this->nature_article = "RIEN";
		this->couleur_article = "RIEN";
	}

	String^ CL_map_TBSTOCK::SELECT(void)
	{
		return "SELECT id_article, nom_article,nature_article,couleur_article" +
			" FROM Article;";
	}
	String^ CL_map_TBSTOCK::INSERT(void)
	{
		return "INSERT INTO Article " +
			"(nom_article,nature_article,couleur_article) " +
			"VALUES('" + this->getNomarticle() + "', '" + this->getNaturearticle() + "', '" + this->getCouleurarticle() + "');SELECT @@IDENTITY;";
	}

	String^ CL_map_TBSTOCK::UPDATE(void)
	{
		return "UPDATE Article " +
			"SET nom_article = '" + this->getNomarticle() + "', nature_article = '" + this->getNaturearticle() + "', couleur_article = '" + this->getCouleurarticle() + "' " +
			"WHERE(id_article = " + this->getId() + ");";
	}
	String^ CL_map_TBSTOCK::DELETE(void)
	{
		return "DELETE FROM Article" +
			"WHERE(id_article = " + this->getId() + ");";
	}
	void CL_map_TBSTOCK::setId(int id_article)
	{
		if (id_article > 0) {
			this->id_article = id_article;
		}
	}
	void CL_map_TBSTOCK::setNomarticle(String^ nom_article)
	{
		if (nom_article != "") {
			this->nom_article = nom_article;
		}
	}
	void CL_map_TBSTOCK::setNaturearticle(String^ nature_article)
	{
		if (nature_article != "") {
			this->nature_article = nature_article;
		}
	}
	void CL_map_TBSTOCK::setCouleurarticle(String^ couleur_article)
	{
		if (couleur_article != "") {
			this->couleur_article = couleur_article;
		}
	}
	int CL_map_TBSTOCK::getId(void)
	{
		return this->id_article;
	}
	String^ CL_map_TBSTOCK::getNomarticle(void)
	{
		return this->nom_article;
	}
	String^ CL_map_TBSTOCK::getNaturearticle(void)
	{
		return this->nature_article;
	}
	String^ CL_map_TBSTOCK::getCouleurarticle(void)
	{
		return this->couleur_article;
	}
}