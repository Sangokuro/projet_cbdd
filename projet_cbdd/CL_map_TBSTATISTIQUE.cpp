#include "CL_map_TBSTATISTIQUE.h"

namespace NS_Composants {
    CL_map_TBSTATISTIQUE::CL_map_TBSTATISTIQUE()
    {
       
    }

    String^ CL_map_TBSTATISTIQUE::PanierMoyen()
    {
        
        return "SELECT ROUND(AVG([montant_total_ttc]), 2) as panierMoyen from Commande";
      
    }
    String^ CL_map_TBSTATISTIQUE::CAMois()
    {
        return  "SELECT MONTH(date_commande) AS Mois, SUM ((montant_total_ttc)) AS montant_total_ttc FROM Commande WHERE(Commande.date_commande BETWEEN '01/01/2020' AND '30/01/2020')GROUP BY MONTH(date_commande)" +
            " UNION SELECT MONTH(date_commande) AS Mois, SUM ((montant_total_ttc)) AS montant_total_ttc FROM Commande WHERE(Commande.date_commande BETWEEN '01/02/2020' AND '28/02/2020')GROUP BY MONTH(date_commande)" +
            "UNION SELECT MONTH(date_commande) AS Mois, SUM ((montant_total_ttc)) AS montant_total_ttc FROM Commande WHERE(Commande.date_commande BETWEEN '01/03/2020' AND '30/03/2020')GROUP BY MONTH(date_commande)" +
            "UNION SELECT MONTH(date_commande) AS Mois, SUM ((montant_total_ttc)) AS montant_total_ttc FROM Commande WHERE(Commande.date_commande BETWEEN '01/04/2020' AND '30/04/2020')GROUP BY MONTH(date_commande)" +
            "UNION SELECT MONTH(date_commande) AS Mois, SUM ((montant_total_ttc)) AS montant_total_ttc FROM Commande WHERE(Commande.date_commande BETWEEN '01/05/2020' AND '30/05/2020')GROUP BY MONTH(date_commande)" +
            "UNION SELECT MONTH(date_commande) AS Mois, SUM ((montant_total_ttc)) AS montant_total_ttc FROM Commande WHERE(Commande.date_commande BETWEEN '01/06/2020' AND '30/06/2020')GROUP BY MONTH(date_commande)" +
            "UNION SELECT MONTH(date_commande) AS Mois, SUM ((montant_total_ttc)) AS montant_total_ttc FROM Commande WHERE(Commande.date_commande BETWEEN '01/07/2020' AND '30/07/2020')GROUP BY MONTH(date_commande)" +
            "UNION SELECT MONTH(date_commande) AS Mois, SUM ((montant_total_ttc)) AS montant_total_ttc FROM Commande WHERE(Commande.date_commande BETWEEN '01/08/2020' AND '30/08/2020')GROUP BY MONTH(date_commande)" +
            "UNION SELECT MONTH(date_commande) AS Mois, SUM ((montant_total_ttc)) AS montant_total_ttc FROM Commande WHERE(Commande.date_commande BETWEEN '01/09/2020' AND '30/09/2020')GROUP BY MONTH(date_commande)" +
            "UNION SELECT MONTH(date_commande) AS Mois, SUM ((montant_total_ttc)) AS montant_total_ttc FROM Commande WHERE(Commande.date_commande BETWEEN '01/10/2020' AND '30/10/2020')GROUP BY MONTH(date_commande)" +
            "UNION SELECT MONTH(date_commande) AS Mois, SUM ((montant_total_ttc)) AS montant_total_ttc FROM Commande WHERE(Commande.date_commande BETWEEN '01/11/2020' AND '30/11/2020')GROUP BY MONTH(date_commande)" +
            "UNION SELECT MONTH(date_commande) AS Mois, SUM ((montant_total_ttc)) AS montant_total_ttc FROM Commande WHERE(Commande.date_commande BETWEEN '01/12/2020' AND '30/12/2020')GROUP BY MONTH(date_commande)";

    }
    String^ CL_map_TBSTATISTIQUE::ProduitSousSeuil()
    {
        return "SELECT nom_article FROM Article INNER JOIN Catalogue ON Article.id_article=Catalogue.id_article WHERE seuil_rea>quantite_stock";
    }
    String^ CL_map_TBSTATISTIQUE::Client()//calculer le montant total par personne
    {
        return /*"SELECT Client.Id_client, Client.Nom_client, Client.Prenom_client, SUM(TOTAL_TTC) as TotalPaye FROM Client LEFT JOIN Commande " +
            "ON Commande.Id_client = Client.Id_client WHERE Client.Nom_client=' ' GROUP BY Client.Id_client,Client.Nom_client, Client.Prenom_client";*/

        "SELECT nom_client,prenom_client, SUM(montant_total_ttc) as Total FROM Commande LEFT JOIN Client ON Commande.id_client=Client.id_client GROUP BY nom_client,prenom_client";

        
    }
    String^ CL_map_TBSTATISTIQUE::PlusVendu()
    {
        return "SELECT TOP 10 Article.id_article,Article.nom_article, COUNT(*) as NombreVendu FROM contient LEFT JOIN Article ON contient.id_article = Article.id_article " + 
            "GROUP BY Article.id_article, Article.nom_article ORDER BY NombreVendu DESC";
            
    }
    String^ CL_map_TBSTATISTIQUE::MoinsVendu()
    {
        return "SELECT TOP 10 Article.id_article,Article.nom_article, COUNT(*) as NombreVendu FROM contient LEFT JOIN Article ON contient.id_article = Article.id_article " +
            "GROUP BY Article.id_article, Article.nom_article ORDER BY NombreVendu ASC";
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