#pragma once
#include "CL_CAD.h"
#include "CL_map_TBSTATISTIQUE.h"

namespace NS_Svc {

	ref class CL_svc_gestionStatistique
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_map_TBSTATISTIQUE^ statistique;
		DataSet^ ds;

	public:
		CL_svc_gestionStatistique(void);
		DataSet^ listePersonnel(String^);
	};




}