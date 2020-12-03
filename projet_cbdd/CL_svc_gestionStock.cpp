#include "CL_CAD.h"
#include "CL_svc_gestionStock.h"

namespace NS_Svc {

	CL_svc_gestionStock::CL_svc_gestionStock(void)
	{
		this->cad = gcnew NS_Composants::CL_CAD();
		this->article = gcnew NS_Composants::CL_map_TBSTOCK();
		this->ds = gcnew Data::DataSet();
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
		return id_article;
	}
	void CL_svc_gestionStock::modifier(int id_article, String^nom_article, String^ nature_article, String^ couleur_article)
	{
		this->article->setId(id_article);
		this->article->setNomarticle(nom_article);
		this->article->setNaturearticle(nature_article);
		this->article->setCouleurarticle(couleur_article);

		this->cad->actionRows(this->article->UPDATE());
	}
	void CL_svc_gestionStock::supprimer(int id_article)
	{
		this->article->setId(id_article);
		this->cad->actionRows(this->article->DELETE());
	}
}