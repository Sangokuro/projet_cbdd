#pragma once
#include "CL_CAD.h"
#include "CL_map_TBFACTURE.h"

namespace NS_Svc {

	ref class CL_svc_gestionFacture
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_map_TBFACTURE^ facture;
		DataSet^ ds;
	public:
		CL_svc_gestionFacture(void);
		DataSet^ listeFacture(String^);
		int ajouter(String^, String^, int, String^, float, int);
		void modifier(int, String^, String^, int, String^, float, int);
		void supprimer(int);
	};

}