#pragma once
#include "CL_CAD.h"
#include "CL_map_TBSTATISTIQUE.h"
#include "testeStatistique.h"
namespace NS_Svc {

	ref class CL_svc_gestionStatistique
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_map_TBSTATISTIQUE^ statistique;
		DataSet^ ds;
		testeStatistique1^ test14;

	public:
		CL_svc_gestionStatistique(void);
		DataSet^ listeSousSeuil(String^);
		DataSet^ valeurduStock(String^);
		DataSet^ valeurduCommerce(String^);
		DataSet^ topdesventes(String^);
		DataSet^ topdesinvendus(String^);
		DataSet^ depensedesclients(String^);
	};




}