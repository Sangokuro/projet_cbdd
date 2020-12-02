#include "CL_svc_gestionpersonnel.h"


namespace NS_Svc {
    NS_Svc::CL_svc_gestionpersonnel1::CL_svc_gestionpersonnel1(void)
    {
        this->cad = gcnew NS_Composants::CL_CAD();
        this->personnel = gcnew NS_Composants::CL_map_TBpersonnel1();
        this->ds = gcnew Data::DataSet();

    }


        

        DataSet^ NS_Svc::CL_svc_gestionpersonnel1::listePersonnel(String^ dataTableName)
        {
            this->ds = this->cad->getRows(this->personnel->SELECT(), dataTableName);
            return ds;
        }

        int NS_Svc::CL_svc_gestionpersonnel1::ajouter(String^ nom_personnel, String^ prenom_personnel, String^ nom_superieur, String^ adresse_personnel, String^ code_postal, String^ ville, DateTime^ date_embauche)
        {
            int id_personnel;
            //référence null
            this->personnel->setNompersonnel(nom_personnel);
            this->personnel->setPrenompersonnel(prenom_personnel);
            this->personnel->setNomsuperieure(nom_superieur);
            this->personnel->setAdressepersonnel(adresse_personnel);
            this->personnel->setcodepostal(code_postal);
            this->personnel->setville(ville);
            this->personnel->setdateembauche(date_embauche);


            id_personnel = this->cad->actionRowsID(this->personnel->INSERT());//manque id superieure

            /*this->teste->comparerstring2(this->personne->INSERT(), "INSERT INTO Client " +
                "(nom_client, prenom_client, date_naissance, date_premier_achat) " +
                "VALUES('Benzema', '" + this->personne->getPrenom() + "', '" + this->personne->getDateNaissance() + "', '" + this->personne->getDatePremierAchat() + "');SELECT @@IDENTITY;");*/

            return id_personnel;
        }

        void NS_Svc::CL_svc_gestionpersonnel1::modifier(int id_personnel, String^ nom_personnel, String^ prenom_personnel, String^ nom_superieur, String^ adresse_personnel, String^ code_postal, String^ ville, DateTime^ date_embauche, int id_personnel_dirige)
        {
            this->personnel->setIDpersonnel(id_personnel);
            this->personnel->setNompersonnel(nom_personnel);
            this->personnel->setPrenompersonnel(prenom_personnel);
            this->personnel->setNomsuperieure(nom_superieur);
            this->personnel->setAdressepersonnel(adresse_personnel);
            this->personnel->setcodepostal(code_postal);
            this->personnel->setville(ville);
            this->personnel->setdateembauche(date_embauche);
            this->personnel->setIDpersonnelsuperieure(id_personnel_dirige);

            this->cad->actionRows(this->personnel->UPDATE());
        }

        void NS_Svc::CL_svc_gestionpersonnel1::supprimer(int id_personnel, int id_personnel_dirige)
        {
            this->personnel->setIDpersonnel(id_personnel);
            this->personnel->setIDpersonnelsuperieure(id_personnel_dirige);

            this->cad->actionRows(this->personnel->DELETE());
        }
    
}