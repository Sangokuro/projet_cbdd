#include "CL_svc_gestionStatistique.h"
#include "CL_CAD.h"

namespace NS_Svc{

    CL_svc_gestionStatistique::CL_svc_gestionStatistique(void)
    {
        this->cad = gcnew NS_Composants::CL_CAD();
        this->statistique = gcnew NS_Composants::CL_map_TBSTATISTIQUE();
        this->ds = gcnew Data::DataSet();
    }

    DataSet^ CL_svc_gestionStatistique::listePersonnel(String^ dataTableName)
    {
        this->ds = this->cad->getRows(this->statistique->SELECT(), dataTableName);

        return ds;
    }

    


}