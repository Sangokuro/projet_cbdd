#include "CL_map_TBFACTURE.h"

NS_Composants::CL_map_TBFACTURE::CL_map_TBFACTURE(void)
{
    this->id_facture = -1;
    this->nom_societe = "01/01/1999";
    this->adresse_societe = "01/01/1999";
    this->code_postal = "01/01/1999";
    this->ville = "01/01/1999";
    this->numero_service_client = "Vide";
    this->id_commande = -1;
    this->id_client = -1;
}

String^ NS_Composants::CL_map_TBFACTURE::SELECT(void)
{
    return "SELECT id_facture,nom_societe,adresse_societe,code_postal,ville,numero_service_client,id_commande,id_client " +
        "FROM Facture;";
}

String^ NS_Composants::CL_map_TBFACTURE::INSERT(void)
{
    return "INSERT INTO Facture " +
        "(nom_societe,adresse_societe,code_postal,ville,numero_service_client,id_commande,id_client) " +
        "VALUES('" + this->getnomsociete() + "', '" + this->getadressesociete() + "', '" + this->getcodepostal() + "', '" + this->getville() + "', '" + this->getnumeroserviceclient()
        + "', '" + this->getidcommande() + "', '" + getidclient() + "');SELECT @@IDENTITY;";
}

String^ NS_Composants::CL_map_TBFACTURE::UPDATE(void)
{
    return "UPDATE Client " +
        "SET nom_societe = '" + this->getnomsociete() + "', adresse_societe = '" + this->getadressesociete() + "', code_postal = '" + this->getcodepostal() + "', ville = '" + this->getville() +
        "', numero_service_client = '" + this->getnumeroserviceclient() + "', id_commande = '" + this->getidcommande() + "', id_client = '" + this->getidclient() + "' " +
        "WHERE(id_facture = " + this->getId() + ");";
}

String^ NS_Composants::CL_map_TBFACTURE::DELETE(void)
{
    return "DELETE FROM Facture " +
        "WHERE(id_facture=" + this->getId() + ");";
}

void NS_Composants::CL_map_TBFACTURE::setID(int id_facture)
{
    if (id_facture > 0) {
        this->id_facture = id_facture;
    }
}

void NS_Composants::CL_map_TBFACTURE::setnomsociete(String^ facture)
{
    if (facture != "") {
        this->nom_societe = facture;
    }
}

void NS_Composants::CL_map_TBFACTURE::setadressesociete(String^ facture)
{
    if (facture != "") {
        this->adresse_societe = facture;
    }
}

void NS_Composants::CL_map_TBFACTURE::setcodepostal(String^ facture)
{
    if (facture != "") {
        this->code_postal = facture;
    }
}

void NS_Composants::CL_map_TBFACTURE::setville(String^ facture)
{
    if (facture != "") {
        this->ville = facture;
    }
}

void NS_Composants::CL_map_TBFACTURE::setnumeroserviceclient(String^ facture)
{
    if (facture != "") {
        this->numero_service_client = facture;
    }
}

void NS_Composants::CL_map_TBFACTURE::setidcommande(int id_commande)
{
    if (id_commande > 0) {
        this->id_commande = id_commande;
    }
}

void NS_Composants::CL_map_TBFACTURE::setidclient(int id_client)
{
    if (id_client > 0) {
        this->id_client = id_client;
    }
}

int NS_Composants::CL_map_TBFACTURE::getId(void)
{
    return this->id_facture;
}

String^ NS_Composants::CL_map_TBFACTURE::getnomsociete(void)
{
    return this->nom_societe;
}

String^ NS_Composants::CL_map_TBFACTURE::getadressesociete(void)
{
    return this->adresse_societe;
}

String^ NS_Composants::CL_map_TBFACTURE::getcodepostal(void)
{
    return this->code_postal;
}

String^ NS_Composants::CL_map_TBFACTURE::getville(void)
{
    return this->ville;
}

String^ NS_Composants::CL_map_TBFACTURE::getnumeroserviceclient(void)
{
    return this->numero_service_client;
}

int NS_Composants::CL_map_TBFACTURE::getidcommande(void)
{
    return this->id_commande;
}

int NS_Composants::CL_map_TBFACTURE::getidclient(void)
{
    return this->id_client;
}
