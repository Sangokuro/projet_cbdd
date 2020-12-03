#include "CL_svc_gestionpersonnel.h"
#include "CL_CAD.h"


namespace NS_Svc {
    CL_svc_gestionpersonnel1::CL_svc_gestionpersonnel1(void)
    {
        this->cad = gcnew NS_Composants::CL_CAD();
        this->personnel = gcnew NS_Composants::CL_map_TBpersonnel1();
        this->ds = gcnew Data::DataSet();
        this->testePersonnel2 = gcnew TestPersonnel1();

    }


        

        DataSet^ CL_svc_gestionpersonnel1::listePersonnel(String^ dataTableName)
        {
            this->ds = this->cad->getRows(this->personnel->SELECT(), dataTableName);
            
            return ds;
        }

        int CL_svc_gestionpersonnel1::ajouter(String^ nom_personnel, String^ prenom_personnel, String^ nom_superieur, String^ adresse_personnel, int code_postal, String^ ville, DateTime^ date_embauche)
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
          /*this->testePersonnel2->comparerpersonnel1(this->personnel->INSERT(), "INSERT INTO Personnel " +
                "(nom_personnel,prenom_personnel ,nom_superieur, adresse_personnel,code_postal,ville,date_embauche,id_personnel_dirige) " +
                "VALUES('" + this->personnel->getNompersonnel() + "', '" + this->personnel->getPrenompersonnel() + "', '" + this->personnel->getNomsuperieure() + "', '" + this->personnel->getAdressepersonnel() +
                "', '" + this->personnel->getcodepostal() + "', 'paris', '" + this->personnel->getdateembauche() + "', " + "(SELECT id_personnel FROM Personnel WHERE (nom_personnel='" +
                this->personnel->getNomsuperieure() + "')));SELECT @@IDENTITY;");*/

            return id_personnel;
        }

        void CL_svc_gestionpersonnel1::modifier(int id_personnel, String^ nom_personnel, String^ prenom_personnel, String^ nom_superieur, String^ adresse_personnel, int code_postal, String^ ville, DateTime^ date_embauche, int id_personnel_dirige)
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
           /* this->testePersonnel2->comparerpersonnel(this->personnel->UPDATE(), "UPDATE Personnel " +
                "SET nom_personnel = 'matteo', prenom_personnel = '" + this->personnel->getPrenompersonnel() + "', nom_superieur = '" + this->personnel->getNomsuperieure() +
                "', adresse_personnel = '" + this->personnel->getAdressepersonnel() + "', code_postal = '" + this->personnel->getcodepostal() + "',ville = '" + this->personnel->getville() + "',date_embauche = '" + this->personnel->getdateembauche() + "' " +
                "WHERE(id_personnel = " + this->personnel->getIDpersonnel() + ");");*/
            
        }

        void CL_svc_gestionpersonnel1::supprimer(int id_personnel)
        {//NE FAIT RIEN DU TOUT
            this->personnel->setIDpersonnel(id_personnel);

            this->cad->actionRows(this->personnel->DELETE());
           /* this->testePersonnel2->comparerpersonnel2(this->personnel->DELETE(), "DELETE FROM Personnel " +
                "WHERE(id_personnel = " + 5 + ");");*/
        }
    
}