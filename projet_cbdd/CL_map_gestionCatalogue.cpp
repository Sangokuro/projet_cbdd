
#include "CL_map_gestionCatalogue.h"

namespace NS_Composants {
	CL_map_TBGESTIONCATALOGUE::CL_map_TBGESTIONCATALOGUE(void)
	{
		this-> id_catalogue=-1;
		this-> prix_articleht=0;
		this-> quantite_stock=0;
		this-> seuil_rea=0;
		this-> taux_tva=0;
		this-> id_article=-1;
	}
	String^ CL_map_TBGESTIONCATALOGUE::SELECT(void)
	{
		return "SELECT id_catalogue,prix_articleht,quantite_stock,seuil_rea,taux_tva " +
			"FROM Catalogue;";
	}
	String^ CL_map_TBGESTIONCATALOGUE::INSERT(String^ nomArticle)
	{
		return "INSERT INTO Catalogue " +
			"(prix_articleht,quantite_stock,seuil_rea,taux_tva, id_article) " +
			"VALUES('" + this->getprixArticle() + "', '" + this->getquantiteStock() + "', '" + this->getseuilRea() + "', '" + this->gettauxTva() + "', (SELECT id_article FROM Article WHERE (nom_article='" +
			nomArticle + "')));SELECT @@IDENTITY;";
	}
	String^ CL_map_TBGESTIONCATALOGUE::UPDATE(void)
	{
		return "UPDATE Catalogue " +
			"SET prix_articleht = '" + this->getprixArticle() + "', quantite_stock = '" + this->getquantiteStock() + "', seuil_rea = '" + this->getseuilRea() + "', taux_tva = '" + this->gettauxTva() + "' " +
			"WHERE(id_catalogue = " + this->getId() + ");";
	}
	String^ CL_map_TBGESTIONCATALOGUE::DELETE(void)
	{
		return "DELETE FROM Catalogue " +
			"WHERE(id_catalogue=" + this->getId() + ");";
	}
	void CL_map_TBGESTIONCATALOGUE::setID(int id_catalogue)
	{
		if (id_catalogue > 0) {
			this->id_catalogue = id_catalogue;
		}
	}
	void CL_map_TBGESTIONCATALOGUE::setprixArticle(int prix)
	{
		if (prix > 0) {
			this->prix_articleht = prix;
		}
	}
	void CL_map_TBGESTIONCATALOGUE::setquantiteStock(int quantite)
	{
		if (quantite > 0) {
			this->quantite_stock = quantite;
		}
	}
	void CL_map_TBGESTIONCATALOGUE::setseuilRea(int seuil)
	{
		if (seuil > 0) {
			this->seuil_rea = seuil;
		}
	}
	void CL_map_TBGESTIONCATALOGUE::settauxTva(int taux)
	{
		if (taux > 0) {
			this->taux_tva = taux;
		}
	}
	void CL_map_TBGESTIONCATALOGUE::setidArticle(int idArticle)
	{
		if (idArticle > 0) {
			this->id_article = idArticle;
		}
	}
	int CL_map_TBGESTIONCATALOGUE::getId(void)
	{
		return this->id_catalogue;
	}
	int CL_map_TBGESTIONCATALOGUE::getprixArticle(void)
	{
		return this->prix_articleht;
	}
	int CL_map_TBGESTIONCATALOGUE::getquantiteStock(void)
	{
		return this->quantite_stock;
	}
	int CL_map_TBGESTIONCATALOGUE::getseuilRea(void)
	{
		return this->seuil_rea;
	}
	int CL_map_TBGESTIONCATALOGUE::gettauxTva(void)
	{
		return this->taux_tva;
	}
	int CL_map_TBGESTIONCATALOGUE::getidArticle(void)
	{
		return this->id_article;
	}
}
