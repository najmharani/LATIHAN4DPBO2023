#include "header.hh"

/* Definisi Method Kelas Dosen */

// constructor kosong
Dosen::Dosen()
    : SivitasAkademik()
{
}

// constructor dengan parameter seluruh atribut Dosen dan parentnya
Dosen::Dosen(int nik, string nama, string jenis_kelamin, string asal_universitas, string email_edu, string fakultas, int nip, string pend_terakhir, string keahlian)
    // constructor super dari kelas parent Sivitas Akademik
    : SivitasAkademik(nik, nama, jenis_kelamin, asal_universitas, email_edu, fakultas)
{
    this->nip = nip;
    this->pend_terakhir = pend_terakhir;
    this->keahlian = keahlian;
}

// Setter dan Getter seluruh atribut Dosen //

void Dosen::setNip(int nip)
{
    this->nip = nip;
}

void Dosen::setPendTerakhir(string pend_terakhir)
{
    this->pend_terakhir = pend_terakhir;
}

void Dosen::setKeahlian(string keahlian)
{
    this->keahlian = keahlian;
}

int Dosen::getNip()
{
    return this->nip;
}

string Dosen::getPendTerakhir()
{
    return this->pend_terakhir;
}

string Dosen::getKeahlian()
{
    return this->keahlian;
}

// destructor
Dosen::~Dosen()
{
}