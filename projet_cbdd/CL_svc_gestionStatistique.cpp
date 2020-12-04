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

    DataSet^ CL_svc_gestionStatistique::listePersonnel(String^ dataTableName)
    {
        this->ds = this->cad->getRows(this->statistique->SELECT(), dataTableName);

        return ds;
    }
    DataSet^ CL_svc_gestionStatistique::listeSousSeuil(String^ dataTableName)
    {
        this->ds = this->cad->getRows(this->statistique->ProduitSousSeuil(), dataTableName);
        this->test14->comparercommande1(this->statistique->ProduitSousSeuil(), "SELECT nom_article FROM Article INNER JOIN Catalogue ON Article.id_article=Catalogue.id_article WHERE seuil_rea>quantite_stock");

        return ds;
    }
    DataSet^ CL_svc_gestionStatistique::valeurduStock(String^ dataTableName)
    {
        this->ds = this->cad->getRows(this->statistique->ValeurStock(), dataTableName);
        this->test14->comparercommande(this->statistique->ValeurStock(), "SELECT SUM(prix_articleht*quantite_stock) as ValeurStock " +
            "FROM Catalogue");

        return ds;
    }
    DataSet^ CL_svc_gestionStatistique::valeurduCommerce(String^ dataTableName)
    {
        this->ds = this->cad->getRows(this->statistique->ValeurCommercial(), dataTableName);
        this->test14->comparercommande2(this->statistique->ValeurCommercial(), "SELECT SUM((prix_articleht*taux_tva)*quantite_stock) as ValeurCommercial " +
            "FROM Catalogue");

        return ds;
    }
    DataSet^ CL_svc_gestionStatistique::topdesventes(String^ dataTableName)
    {
        this->ds = this->cad->getRows(this->statistique->PlusVendu(), dataTableName);
        this->test14->comparercommande3(this->statistique->PlusVendu(),)
        return ds;
    }

    


}