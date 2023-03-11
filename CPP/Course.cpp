#include "header.hh"

/* Definisi Method Kelas Course */

// constructor kosong
Course::Course()
{
}

// constructor dengan parameter
Course::Course(string nama_matkul)
{
    this->nama_matkul = nama_matkul;
}

// Setter dan Getter atribut kelas Course //

void Course::setNamaMatkul(string nama_matkul)
{
    this->nama_matkul = nama_matkul;
}

string Course::getNamaMatkul()
{
    return this->nama_matkul;
}

// destructor
Course::~Course()
{
}