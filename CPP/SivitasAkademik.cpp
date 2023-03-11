#include "header.hh"

/* Definisi Method Kelas Sivitas Akademik */

// constructor kosong
SivitasAkademik::SivitasAkademik()
    : Human()
{
}

// constructor dengan parameter seluruh atribut Sivitas Akademik dan atribut Humahn
SivitasAkademik::SivitasAkademik(int nik, string nama, string jenis_kelamin, string asal_universitas, string email_edu, string fakultas)
    : Human(nik, nama, jenis_kelamin)
{
    this->asal_universitas = asal_universitas;
    this->email_edu = email_edu;
    this->fakultas = fakultas;
}

// Set asal universitas
void SivitasAkademik::setAsalUniversitas(string asal_universitas)
{
    this->asal_universitas = asal_universitas;
}

// Set email edu
void SivitasAkademik::setEmailEdu(string email_edu)
{
    this->email_edu = email_edu;
}

// Set fakultas
void SivitasAkademik::setFakultas(string fakultas)
{
    this->fakultas = fakultas;
}

// Get asal universitas
string SivitasAkademik::getAsalUniversitas()
{
    return this->asal_universitas;
}

// Get email edu
string SivitasAkademik::getEmailEdu()
{
    return this->email_edu;
}

// Get fakultas
string SivitasAkademik::getFakultas()
{
    return this->fakultas;
}

// destructor
SivitasAkademik::~SivitasAkademik()
{
}
