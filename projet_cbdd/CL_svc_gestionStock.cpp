#include "CL_CAD.h"
#include "CL_svc_gestionStock.h"

namespace NS_Svc {

	CL_svc_gestionStock::CL_svc_gestionStock(void)
	{
		this->cad = gcnew NS_Composants::CL_CAD();
		this->article = gcnew NS_Composants::CL_map_TBSTOCK();
		this->ds = gcnew Data::DataSet();
		this->TestStock2 = gcnew TestStock1();
	}
	DataSet^ CL_svc_gestionStock::listeArticle(String^ dataTableName)
	{
		this->ds = this->cad->getRows(this->article->SELECT(), dataTableName);
		return ds;
	}
	int CL_svc_gestionStock::ajouter(String^ nom_article, String^ nature_article, String^ couleur_article)
	{
		int id_article;
		//référence null
		this->article->setNomarticle(nom_article);
		this->article->setNaturearticle(nature_article);
		this->article->setCouleurarticle(couleur_article);
		id_article = this->cad->actionRowsID(this->article->INSERT());
		/*this->TestStock2->comparerstock1(this->article->INSERT(), "INSERT INTO Article " +
			"(nom_article,nature_article,couleur_article) " +
			"VALUES('horloge', '" + this->article->getNaturearticle() + "', '" + this->article->getCouleurarticle() + "');SELECT @@IDENTITY;");*/
	
		return id_article;
	}
	void CL_svc_gestionStock::modifier(int id_article, String^nom_article, String^ nature_article, String^ couleur_article)
	{
		this->article->setId(id_article);
		this->article->setNomarticle(nom_article);
		this->article->setNaturearticle(nature_article);
		this->article->setCouleurarticle(couleur_article);

		this->cad->actionRows(this->article->UPDATE());
		/*this->TestStock2->comparerstock(this->article->UPDATE(), "UPDATE Article " +
			"SET nom_article = '" + this->article->getNomarticle() + "', nature_article = '" + this->article->getNaturearticle() + "', couleur_article = 'rouge' " +
			"WHERE(id_article = " + this->article->getId() + ");");*/
	}
	void CL_svc_gestionStock::supprimer(int id_article)
	{
		this->article->setId(id_article);
		this->cad->actionRows(this->article->DELETE());
	}
}