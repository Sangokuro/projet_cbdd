#include "CL_map_TBpersonnel.h"

namespace NS_Composants {

    CL_map_TBpersonnel1::CL_map_TBpersonnel1(void)
    {
        this->id_personnel = -1;
        this->id_personnel_dirige = -1;
        this->nom_personnel = "RIEN";
        this->prenom_personnel= "RIEN";
        this->nom_superieur = "RIEN";

    }

    String^ NS_Composants::CL_map_TBpersonnel1::SELECT(void)
    {
        return "SELECT id_personnel, nom_personnel,prenom_personnel,nom_superieur,adresse_personnel,code_postal,ville,date_embauche,id_personnel_dirige " +
            "FROM Personnel;";
    }

    String^ NS_Composants::CL_map_TBpersonnel1::INSERT(void)
    {
        return "INSERT INTO Personnel " +
            "(nom_personnel,prenom_personnel ,nom_superieur, adresse_personnel,code_postal,ville,date_embauche) " +
            "VALUES('" + this->getNompersonnel() + "', '" + this->getPrenompersonnel() + "', '" + this->getNomsuperieure() + "', '" + this->getAdressepersonnel() +
            "', '" + this->getcodepostal() + "', '" + this->getville() + "', '" + this->getdateembauche() + "');SELECT @@IDENTITY;";
    }

    String^ NS_Composants::CL_map_TBpersonnel1::UPDATE(void)
    {
        return "UPDATE Personnel " +
            "SET nom_personnel = '" + this->getNompersonnel() + "', prenom_personnel = '" + this->getPrenompersonnel() + "', nom_superieur = '" + this->getNomsuperieure() + "', adresse_personnel = '" + this->getAdressepersonnel() + "', code_postal = '" + this->getcodepostal() + "',ville = '" + this->getville() + "',date_embauche = '" +this->getdateembauche() + "' " +
            "WHERE(id_personnel = " + this->getIDpersonnel() + "', id_personnel_dirige = " + this->getIDpersonnelsuperieure() + ");";
    }

    String^ NS_Composants::CL_map_TBpersonnel1::DELETE(void)
    {
        return "DELETE FROM Personnel " +
            "WHERE(id_personnel = " + this->getIDpersonnel() + "', id_personnel_dirige = " + this->getIDpersonnelsuperieure() + ");";
    }

    void NS_Composants::CL_map_TBpersonnel1::setIDpersonnel(int)
    {
        if (id_personnel > 0) {
            this->id_personnel = id_personnel;
        }
    }

    void NS_Composants::CL_map_TBpersonnel1::setNompersonnel(String^)
    {
        if (nom_personnel != "") {
            this->nom_personnel = nom_personnel;
        }
    }

    void  NS_Composants::CL_map_TBpersonnel1::setPrenompersonnel(String^)
      {
        if (prenom_personnel != "") {
            this->prenom_personnel = prenom_personnel;
        }
       }
    void NS_Composants::CL_map_TBpersonnel1::setNomsuperieure(String^)
    {
        if (nom_superieur != "") {
            this->nom_superieur = nom_superieur;
        }
    }

    void NS_Composants::CL_map_TBpersonnel1::setAdressepersonnel(String^)
    {
        if (adresse_personnel != "") {
            this->adresse_personnel = adresse_personnel;
        }
    }

    void NS_Composants::CL_map_TBpersonnel1::setcodepostal(String^)
    {
        if (code_postal != "") {
            this->code_postal = code_postal;
        }
    }

    void NS_Composants::CL_map_TBpersonnel1::setville(String^)
    {
        if (ville != "") {
            this->ville = ville;
        }
    }

    void NS_Composants::CL_map_TBpersonnel1::setdateembauche(DateTime^)
    {
        this->date_embauche = date_embauche;
    }



    void NS_Composants::CL_map_TBpersonnel1::setIDpersonnelsuperieure(int)
    {
        if (id_personnel_dirige > 0) {
            this->id_personnel_dirige = id_personnel_dirige;
        }
    }

    int NS_Composants::CL_map_TBpersonnel1::getIDpersonnel(void)
    {
        return this->id_personnel;
    }

    String^ NS_Composants::CL_map_TBpersonnel1::getNompersonnel(void)
    {
        return this->nom_personnel;
    }

    String^ NS_Composants::CL_map_TBpersonnel1::getPrenompersonnel(void)
    {
        return this->prenom_personnel;
    }

    String^ NS_Composants::CL_map_TBpersonnel1::getNomsuperieure(void)
    {
        return this->nom_superieur;
    }

    String^ NS_Composants::CL_map_TBpersonnel1::getAdressepersonnel(void)
    {
        return this->adresse_personnel;
    }

    String^ NS_Composants::CL_map_TBpersonnel1::getcodepostal(void)
    {
        return this->code_postal;
    }

    String^ NS_Composants::CL_map_TBpersonnel1::getville(void)
    {
        return this->ville;
    }

    DateTime^ NS_Composants::CL_map_TBpersonnel1::getdateembauche(void)
    {
        return this->date_embauche;
    }

    int NS_Composants::CL_map_TBpersonnel1::getIDpersonnelsuperieure(void)
    {
        return this->id_personnel_dirige;
    }
}