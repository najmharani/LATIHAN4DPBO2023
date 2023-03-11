#include "header.hh"

// constructor kosong
Human::Human()
{
}

// constructor dengan parameter seluruh atribut human
Human::Human(int nik, string nama, string jenis_kelamin)
{
    this->nik = nik;
    this->nama = nama;
    this->jenis_kelamin = jenis_kelamin;
}

// setter NIK
void Human::setNik(int nik)
{
    this->nik = nik;
}

// setter nama
void Human::setNama(string nama)
{
    this->nama = nama;
}

// setter jenis kelamin
void Human::setJenisKelamin(string jenis_kelamin)
{
    this->jenis_kelamin = jenis_kelamin;
}

// getter NIK
int Human::getNik()
{
    return this->nik;
}

// getter nama
string Human::getNama()
{
    return this->nama;
}

// getter jenis kelamin
string Human::getJenisKelamin()
{
    return this->jenis_kelamin;
}

// destructor
Human::~Human()
{
}
