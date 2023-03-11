#include "header.hh"

/* Definisi Method Kelas Prodi */

// constructor kosong
Prodi::Prodi()
{
}

// constructor dengan parameter
Prodi::Prodi(string nama_prodi, int kode, list<Course> courses)
{
    this->nama_prodi = nama_prodi;
    this->kode = kode;
    this->courses = courses;
}

// Getter dan Setter untuk tiap atribut //

void Prodi::setNamaProdi(string nama_prodi)
{
    this->nama_prodi = nama_prodi;
}

void Prodi::setKode(int kode)
{
    this->kode = kode;
}

void Prodi::setCourses(list<Course> courses)
{
    this->courses = courses;
}

string Prodi::getNamaProdi()
{
    return this->nama_prodi;
}

int Prodi::getKode()
{
    return this->kode;
}

list<Course> Prodi::getCourses()
{
    return this->courses;
}

// menambah satu mata kuliah pada list course
void Prodi::addCourse(Course course)
{
    this->courses.push_back(course);
}

// destructor
Prodi::~Prodi()
{
}