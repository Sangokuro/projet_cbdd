#include "CL_map_TBSTATISTIQUE.h"

namespace NS_Composants {
    CL_map_TBSTATISTIQUE::CL_map_TBSTATISTIQUE()
    {
        this->test14 = gcnew testeStatistique1();
    }
    String^ CL_map_TBSTATISTIQUE::SELECT(void)
    {
        return "SELECT id_personnel, nom_personnel,prenom_personnel,nom_superieur,adresse_personnel,code_postal,ville,date_embauche,id_personnel_dirige " +
            "FROM Personnel;";
    }

    String^ CL_map_TBSTATISTIQUE::PanierMoyen()
    {
        this->test14->comparercommande("SELECT AVG(Total_TTC) as panierMoyen from Commande", "SELECT AVG(Total_TTC) as panierMoyen from Commande");
        return "SELECT AVG(Total_TTC) as panierMoyen from Commande";
        
    }
    String^ CL_map_TBSTATISTIQUE::CAMois(String^ NomMois)
    {
        return "SELECT SUM(TOTAL_TTC) as Total_Achat FROM " +
            "((SELECT id_commande, date_commande " +
            "FROM  Commande " +
            "LEFT JOIN " +
            "(SELECT * " +
            "FROM date_commande WHERE MONTH(DATE) = '" + NomMois + "') " +
            "AS DateMois " +
            "ON DateMois.id_date = date_Payer.Id_date) " +
            "AS DateMoisCommande " +
            "LEFT JOIN " +
            "(SELECT Id_commande, TOTAL_TTC " +
            "FROM Commande) " +
            "AS Prix " +
            "ON DateMoisCommande.Id_commande = Prix.Id_commande)";


    }
    String^ CL_map_TBSTATISTIQUE::ProduitSousSeuil()
    {
        return "SELECT nom_article FROM Article INNER JOIN Catalogue ON Article.id_article=Catalogue.id_article WHERE seuil_rea>quantite_stock";
    }
    String^ CL_map_TBSTATISTIQUE::Client(String^)
    {
        throw gcnew System::NotImplementedException();
        // TODO: insérer une instruction return ici
    }
    String^ CL_map_TBSTATISTIQUE::PlusVendu()
    {
        return "SELECT TOP 10 nom_article, sum(quantite_article) AS NombreVendu FROM ((SELECT * Commande RIGHT JOIN Contient ON id_commande=id_commande)AS TABLE" +
            "LEFT JOINT Article ON TABLE.id_article=Article.id_article ORDER BY NombreVendu DESC) AS TABLE2";
    }
    String^ CL_map_TBSTATISTIQUE::MoinsVendu()
    {
        throw gcnew System::NotImplementedException();
        // TODO: insérer une instruction return ici
    }
    String^ CL_map_TBSTATISTIQUE::ValeurCommercial()
    {
        return "SELECT SUM((prix_articleht*taux_tva)*quantite_stock) as ValeurCommercial " +
            "FROM Catalogue";
    }
    String^ CL_map_TBSTATISTIQUE::ValeurStock()
    {
        return "SELECT SUM(prix_articleht*quantite_stock) as ValeurStock " +
            "FROM Catalogue";
    }
    String^ CL_map_TBSTATISTIQUE::SimulerVariations(int, float, float, float, float)
    {
        throw gcnew System::NotImplementedException();
        // TODO: insérer une instruction return ici
    }
}/*
    String^ CL_map_TBSTATISTIQUE::ProduitSousSeuil()
    {
        return "SELECT Nom_article, Article.Id_article FROM " +//prend le nom de l'article
            "(SELECT Catalogue.Id_article " +//prend l'article dans catalogue
            "FROM Catalogue " +
            "WHERE Seuil_reapprovision > Quantite_stock) " +
            "AS StockVide " +
            "Left JOIN Article " +
            "ON Article.Id_article = StockVide.Id_article";

        "SELECT nom_article FROM Article INNER JOIN Catalogue ON id_article=id_article WHERE seuil_rea>quantite_stock""



        "
        "  SELECT nom_article FROM ( SELECT id_article,quantite_article FROM Contient LEFT JOINT Commande on id_commande = id_commande)AS TABLE1 INNER JOIN
        "   ( SELECT seuil_rea,id_article FROM (SELECT quantite_stock FROM Catalogue Right join article ON id_article=id_article)AS TABLE2 RIGHT JOIN contient  ON id=id)TABLE3
        "WHERE nombre>nombre2

    }
    String^ CL_map_TBSTATISTIQUE::Client(String^ NomClient)
    {
        return "SELECT Client.Id_client, Client.Nom_client, Client.Prenom_client, SUM(TOTAL_TTC) as TotalPaye FROM Client LEFT JOIN Commande ON Commande.Id_client = Client.Id_client WHERE Client.Nom_client='" + NomClient + "' GROUP BY Client.Id_client,Client.Nom_client, Client.Prenom_client";
    }
    String^ CL_map_TBSTATISTIQUE::PlusVendu()
    {
        return "SELECT TOP 10 Article.Id_article, Article.Nom_article, COUNT(*) as NombreVendu FROM Article_commande LEFT JOIN Article ON Article_commande.Id_article = Article.Id_article GROUP BY Article.Id_article, Article.Nom_article ORDER BY NombreVendu DESC";
    }

        "SELECT TOP 10 nom_article, sum(quantite_article) AS NombreVendu FROM (SELECT * Commande Right Joint Contient ON id_commande=id_commande)AS TABLE
            "LEFT JOINT Article ON id_article=id_article ORDER BY NombreVendu DESC

    String^ CL_map_TBSTATISTIQUE::MoinsVendu()
    {
        return "SELECT TOP 10 Article.Id_article, Article.Nom_article, COUNT(*) as NombreVendu FROM Article_commande LEFT JOIN Article ON Article_commande.Id_article = Article.Id_article GROUP BY Article.Id_article, Article.Nom_article ORDER BY NombreVendu ASC";
    }

        "SELECT TOP 10 nom_article, sum(quantite_article) AS NombreVendu FROM (SELECT * Commande Right Joint Contient ON id_commande=id_commande)AS TABLE
            "LEFT JOINT Article ON id_article=id_article ORDER BY NombreVendu ASC

    String^ CL_map_TBSTATISTIQUE::ValeurCommercial()
    {
        return "SELECT SUM(Prix_HT*Taux_TVA*Quantite_stock) as ValeurCommercial " +
            "FROM Catalogue";
    }
    String^ CL_map_TBSTATISTIQUE::ValeurStock()
    {
        return "SELECT SUM(Prix_HT*Quantite_stock) as ValeurStock " +
            "FROM Catalogue";
    }
    String^ CL_map_TBSTATISTIQUE::SimulerVariations(int NTVA, float TVA, float Marge, float Reduc, float Autre)
    {
        return "SELECT SUM(((Catalogue.Prix_HT*Catalogue.Taux_TVA*" + NTVA + "*Catalogue.Quantite_stock + (Catalogue.Prix_HT*" + TVA + "*Catalogue.Quantite_stock))*" + Marge + "*" + Reduc + "*" + Autre + ")) as Stats FROM Catalogue";
    }*/