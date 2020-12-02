#pragma once
#include "CL_CAD.h"
#include "CL_map_TBCLIENT.h"
#include "test.h"
namespace NS_Svc {

	ref class CL_svc_gestionClient
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_map_TBCLIENT^ personne;
		DataSet^ ds;
		test1^ teste;
	public:
		CL_svc_gestionClient(void);
		DataSet^ listePersonnel(String^);
		int ajouter(String^, String^, DateTime^, DateTime^);
		void modifier(int, String^, String^, DateTime^, DateTime^);
		void supprimer(int);
	};

}