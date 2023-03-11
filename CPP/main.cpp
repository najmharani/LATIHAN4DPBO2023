#include <iostream>
#include "header.hh"

int main()
{
    // list mata kuliah prodi ilkom
    list<Course> listCourseIlkom = {Course("DPBO"), Course("Provis"), Course("Andal"), Course("Metlit")};

    // list mata kuliah prodi arsitektur
    list<Course> listCourseArsi = {Course("SPA"), Course("SKB"), Course("Nirmana")};

    // list prodi
    list<Prodi> listProdi = {Prodi("Ilmu_Komputer", 111, listCourseIlkom), Prodi("Arsitektur", 222, listCourseArsi)};

    // list dosen
    list<Dosen> listDosen = {Dosen(3333, "Faiz", "Laki-Laki", "UPI", "faiz@upi.edu", "FPMIPA", 4321, "S2", "Machine_Learning"),
                             Dosen(4444, "Luthfiah", "Perempuan", "ITB", "luthfiah@itb.edu", "FPTK", 4231, "S2", "Pendidikan")};

    // list mahasiswa
    list<Mahasiswa> listMhs = {Mahasiswa(
                                   1111, "Najma", "Perempuan", "UPI", "najma@upi.edu", "FPMIPA", 2102843, 111),
                               Mahasiswa(2222, "Rifat", "Laki-Laki", "ITB", "rifat@itb.edu", "FPTK", 2155832, 222)};

    // menampilkan list mahasiswa
    cout << "|---------------------------------" << endl;
    cout << "| Data Mahasiswa" << endl;
    cout << "|---------------------------------" << endl;

    int i = 0;
    for (Mahasiswa individu : listMhs)
    {
        // mencari nama prodi dan matakuliah yang sesuai dengan kode prodi pada objek mahasiswa
        string nama_prodi;
        list<Course> one_courses;
        for (Prodi satu : listProdi)
        {
            if (satu.getKode() == individu.getProdi())
            {
                nama_prodi = satu.getNamaProdi();
                one_courses = satu.getCourses();
            }
        }

        // menampilkan data mahasiswa
        cout << "| " << ++i << " |" << endl;
        cout << "| Nama : " << individu.getNama() << endl;
        cout << "| NIK : " << individu.getNik() << endl;
        cout << "| Jenis Kelamin : " << individu.getJenisKelamin() << endl;
        cout << "| Asal Universitas : " << individu.getAsalUniversitas() << endl;
        cout << "| Email Edu : " << individu.getEmailEdu() << endl;
        cout << "| NIM : " << individu.getNim() << endl;
        cout << "| Fakultas : " << individu.getFakultas() << endl;
        cout << "| Prodi : " << nama_prodi << endl;
        cout << "| Mata Kuliah : " << endl;

        // menampilkan mata kuliah sesuai dengan prodi
        for (Course c : one_courses)
        {
            cout << "|     -  " << c.getNamaMatkul() << endl;
        }

        cout << "|---------------------------------" << endl;
    }

    cout << endl
         << endl;

    // menampilkan list dosen
    cout << "|---------------------------------" << endl;
    cout << "| Data Dosen" << endl;
    cout << "|---------------------------------" << endl;
    i = 0;
    for (Dosen individu : listDosen)
    {
        cout << "| " << ++i << " |" << endl;
        cout << "| Nama : " << individu.getNama() << endl;
        cout << "| NIK : " << individu.getNik() << endl;
        cout << "| Jenis Kelamin : " << individu.getJenisKelamin() << endl;
        cout << "| Asal Universitas : " << individu.getAsalUniversitas() << endl;
        cout << "| Email Edu : " << individu.getEmailEdu() << endl;
        cout << "| NIP : " << individu.getNip() << endl;
        cout << "| Fakultas : " << individu.getFakultas() << endl;
        cout << "| Pendidikan Terakhir : " << individu.getPendTerakhir() << endl;
        cout << "| Keahlian : " << individu.getKeahlian() << endl;
        cout << "|---------------------------------" << endl;
    }

    return 0;
}