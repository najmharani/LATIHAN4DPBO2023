#include "header.hh"

/* Definisi Method Kelas Mahasiswa */

// constructor kosong
Mahasiswa::Mahasiswa()
    : SivitasAkademik()
{
}

// constructor dengan parameter seluruh atribut kelas dan super kelas dari Mahasiswa
Mahasiswa::Mahasiswa(int nik, string nama, string jenis_kelamin, string asal_universitas, string email_edu, string fakultas, int nim, int prodi)
    // constructor super dari kelas parent Sivitas Akademik
    : SivitasAkademik(nik, nama, jenis_kelamin, asal_universitas, email_edu, fakultas)
{

    this->nim = nim;
    this->prodi = prodi;
}

// setter nim
void Mahasiswa::setNim(int nim)
{
    this->nim = nim;
}

// setter prodi
void Mahasiswa::setProdi(int prodi)
{
    this->prodi = prodi;
}

// getter nim
int Mahasiswa::getNim()
{
    return this->nim;
}

// getter prodi
int Mahasiswa::getProdi()
{
    return this->prodi;
}

// destructor
Mahasiswa::~Mahasiswa()
{
}
