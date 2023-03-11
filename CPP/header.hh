#include <string>
#include <list>

using namespace std;

class Course
{
    // atribut2 private milik class Course
private:
    string nama_matkul;

    // public method milik class Course
public:
    // costructor
    Course();
    Course(string nama_matkul);

    // setter dan getter
    void setNamaMatkul(string nama_matkul);
    string getNamaMatkul();

    // destructor
    ~Course();
};

class Prodi
{
    // atribut2 private milik class Prodi
private:
    string nama_prodi;
    int kode;
    list<Course> courses;

    // public method milik class Prodi
public:
    // constructor
    Prodi();
    Prodi(string nama_prodi, int kode, list<Course> courses);

    // setter dan getter
    void setNamaProdi(string nama_prodi);
    void setKode(int kode);
    void setCourses(list<Course> courses);
    string getNamaProdi();
    int getKode();
    list<Course> getCourses();
    void addCourse(Course course);

    // destructor
    ~Prodi();
};

class Human
{
    // atribut2 private milik class human
private:
    int nik;
    string nama;
    string jenis_kelamin;

    // public method milik class human
public:
    // constructor kosong
    Human();
    // constructor dengan parameter seluruh atribut human
    Human(int nik, string nama, string jenis_kelamin);

    // setter NIK
    void setNik(int nik);

    // setter nama
    void setNama(string nama);
    // setter jenis kelamin
    void setJenisKelamin(string jenis_kelamin);

    // getter NIK
    int getNik();

    // getter nama
    string getNama();

    // getter jenis kelamin
    string getJenisKelamin();

    // destructor
    ~Human();
};

class SivitasAkademik : public Human
{
    // atribut2 private milik kelas Sivitas Akademik
private:
    string asal_universitas;
    string email_edu;
    string fakultas;

    // method2 public milik kelas Sivitas Akademik
public:
    // constructor kosong
    SivitasAkademik();

    // constructor dengan parameter seluruh atribut Sivitas Akademik dan atribut Humahn
    SivitasAkademik(int nik, string nama, string jenis_kelamin, string asal_universitas, string email_edu, string fakultas);
    // Set asal universitas
    void setAsalUniversitas(string asal_universitas);

    // Set email edu
    void setEmailEdu(string email_edu);

    // Set fakultas
    void setFakultas(string fakultas);

    // Get asal universitas
    string getAsalUniversitas();

    // Get email edu
    string getEmailEdu();

    // Get fakultas
    string getFakultas();

    // destructor
    ~SivitasAkademik();
};

class Mahasiswa : public SivitasAkademik
{
    // atribut2 privat milik kelas Mahasiswa
private:
    int nim;
    int prodi;
    // method2 public milik kelas Mahasiswa
public:
    // constructor kosong
    Mahasiswa();

    // constructor dengan parameter seluruh atribut kelas dan super kelas dari Mahasiswa
    Mahasiswa(int nik, string nama, string jenis_kelamin, string asal_universitas, string email_edu, string fakultas, int nim, int prodi);

    // setter nim
    void setNim(int nim);

    // setter prodi
    void setProdi(int prodi);

    // getter nim
    int getNim();

    // getter prodi
    int getProdi();

    // destructor
    ~Mahasiswa();
};

class Dosen : public SivitasAkademik
{
    // atribut2 private milik class dosen
private:
    int nip;
    string pend_terakhir;
    string keahlian;

    // public method milik class dosen
public:
    // constructor kosong
    Dosen();
    // constructor dengan parameter seluruh atribut kelas dan super kelas dari Dosen
    Dosen(int nik, string nama, string jenis_kelamin, string asal_universitas, string email_edu, string fakultas, int nip, string pend_terakhir, string keahlian);

    // setter dan gett er
    void setNip(int nip);

    void setPendTerakhir(string pend_terakhir);

    void setKeahlian(string keahlian);

    int getNip();

    string getPendTerakhir();

    string getKeahlian();

    // destructor
    ~Dosen();
};