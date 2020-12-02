#include "CL_svc_gestionCommande.h"
#include "CL_svc_gestionFacture.h"
#include"Facture.h"

namespace NS_Svc {
	CL_svc_gestionCommande::CL_svc_gestionCommande(void)
	{
		this->cad = gcnew NS_Composants::CL_CAD();
		this->commande = gcnew NS_Composants::CL_map_TBCOMMANDE();
		this->ds = gcnew Data::DataSet();
	}

	DataSet^ CL_svc_gestionCommande::listeCommande(String^ dataTableName)
	{
		//this->ds->Clear();
		this->ds = this->cad->getRows(this->commande->SELECT(), dataTableName);
		return ds;
	}

	int CL_svc_gestionCommande::ajouter(String^ date1, String^ date2, String^ date3, String^ paiement, String^ reference, int idclient, int idfacture)
	{
		int id_commande;
		//r�f�rence null
		this->commande->setdateCommande(date1);
		this->commande->setdateLivraison(date2);
		this->commande->setdatePaiement(date3);
		this->commande->setmoyenPaiement(paiement);
		this->commande->setreferenceCommande(reference);
		this->commande->setidClient(idclient);
		this->commande->setidFacture(idfacture);
		id_commande = this->cad->actionRowsID(this->commande->INSERT());

		//NS_Svc::CL_svc_gestionFacture^ processusFacture;
		//processusFacture->ajouter("aaa", "eee", "e", "e", "e", id_commande, 8);
		

		projet_cbdd::Facture^ f2 = gcnew projet_cbdd::Facture(id_commande);
		f2->ShowDialog();


		return id_commande;
		
	}

	void CL_svc_gestionCommande::modifier(int id_personne, String^ date1, String^ date2, String^ date3, String^ paiement, String^ reference, int idclient, int idfacture)
	{
		this->commande->setID(id_personne);
		this->commande->setdateCommande(date1);
		this->commande->setdateLivraison(date2);
		this->commande->setdatePaiement(date3);
		this->commande->setmoyenPaiement(paiement);
		this->commande->setreferenceCommande(reference);
		this->commande->setidClient(idclient);
		this->commande->setidFacture(idfacture);

		this->cad->actionRows(this->commande->UPDATE());
	}

	void CL_svc_gestionCommande::supprimer(int id_commande)
	{
		this->commande->setID(id_commande);
		this->cad->actionRows(this->commande->DELETE());
	}
}