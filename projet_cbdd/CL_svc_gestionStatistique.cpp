#include "CL_svc_gestionStatistique.h"
#include "CL_CAD.h"

namespace NS_Svc{

    CL_svc_gestionStatistique::CL_svc_gestionStatistique(void)
    {
        this->cad = gcnew NS_Composants::CL_CAD();
        this->statistique = gcnew NS_Composants::CL_map_TBSTATISTIQUE();
        this->ds = gcnew Data::DataSet();
        this->test14 = gcnew testeStatistique1();
    }

    DataSet^ CL_svc_gestionStatistique::listeSousSeuil(String^ dataTableName)
    {
        this->ds = this->cad->getRows(this->statistique->ProduitSousSeuil(), dataTableName);
       /* this->test14->comparercommande1(this->statistique->ProduitSousSeuil(), "SELECT nom_article FROM Article INNER JOIN Catalogue ON Article.id_article=Catalogue.id_article WHERE seuil_rea>quantite_stock");*/

        return ds;
    }
    DataSet^ CL_svc_gestionStatistique::valeurduStock(String^ dataTableName)
    {
        this->ds = this->cad->getRows(this->statistique->ValeurStock(), dataTableName);
        /*this->test14->comparercommande(this->statistique->ValeurStock(), "SELECT SUM(prix_articleht*quantite_stock) as ValeurStock " +
            "FROM Catalogue");*/

        return ds;
    }
    DataSet^ CL_svc_gestionStatistique::valeurduCommerce(String^ dataTableName)
    {
        this->ds = this->cad->getRows(this->statistique->ValeurCommercial(), dataTableName);
       /* this->test14->comparercommande2(this->statistique->ValeurCommercial(), "SELECT SUM((prix_articleht*taux_tva)*quantite_stock) as ValeurCommercial " +
            "FROM Catalogue");*/

        return ds;
    }
    DataSet^ CL_svc_gestionStatistique::topdesventes(String^ dataTableName)
    {
        this->ds = this->cad->getRows(this->statistique->PlusVendu(), dataTableName);
        /*this->test14->comparercommande3(this->statistique->PlusVendu(), "SELECT TOP 10 Article.id_article,Article.nom_article, COUNT(*) as NombreVendu FROM contient LEFT JOIN Article ON contient.id_article = Article.id_article " +
            "GROUP BY Article.id_article, Article.nom_article ORDER BY NombreVendu DESC");*/
        return ds;
    }
    DataSet^ CL_svc_gestionStatistique::topdesinvendus(String^ dataTableName)
    {
        this->ds = this->cad->getRows(this->statistique->MoinsVendu(), dataTableName);
       /* this->test14->comparercommande4(this->statistique->MoinsVendu(), "SELECT TOP 10 Article.id_article,Article.nom_article, COUNT(*) as NombreVendu FROM contient LEFT JOIN Article ON contient.id_article = Article.id_article " +
            "GROUP BY Article.id_article, Article.nom_article ORDER BY NombreVendu ASC");*/
        return ds;
    }

    DataSet^ CL_svc_gestionStatistique::depensedesclients(String^ dataTableName)
    {
        this->ds = this->cad->getRows(this->statistique->Client(), dataTableName);
       /* this->test14->comparercommande5(this->statistique->Client(), "SELECT nom_client,prenom_client, SUM(montant_total_ttc) as Total FROM Commande LEFT JOIN Client ON Commande.id_client=Client.id_client GROUP BY nom_client,prenom_client");*/

        return ds;
    }

    


}