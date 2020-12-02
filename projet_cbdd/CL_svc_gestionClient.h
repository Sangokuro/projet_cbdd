#pragma once
#include "CL_CAD.h"
#include "CL_map_TBCLIENT.h"

namespace NS_Svc {

	ref class CL_svc_gestionClient
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_map_TBCLIENT^ personne;
		DataSet^ ds;
	public:
		CL_svc_gestionClient(void);
		DataSet^ listePersonnel(String^);
		int ajouter(String^, String^, String^, String^);
		void modifier(int, String^, String^, String^, String^);
		void supprimer(int);
	};

}