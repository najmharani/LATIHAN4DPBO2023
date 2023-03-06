# import kelas yang dibutuhkan
from Mahasiswa import Mahasiswa
from Dosen import Dosen
from Prodi import Prodi
from Course import Course


# deklarasi list beberapa course
listCourseIlkom = [Course("DPBO"), Course("Provis"), Course("Andal"), Course("Metlit")]
listCourseArsi = [Course("SPA"), Course("SKB"), Course("Nirmana")]

# deklarasi list beberapa prodi
listProdi = []
listProdi.append(Prodi("Ilmu_Komputer", 111, listCourseIlkom))
listProdi.append(Prodi("Arsitektur", 222, listCourseArsi))

# deklarasi list mahasiswa
listMhs = [
    Mahasiswa(
        1111, "Najma", "Perempuan", "UPI", "najma@upi.edu", "FPMIPA", 2102843, 111
    ),
    Mahasiswa(2222, "Rifat", "Laki-Laki", "ITB", "rifat@itb.edu", "FPTK", 2155832, 222),
]

# deklarasi list dosen
listDosen = [
    Dosen(
        3333,
        "Faiz",
        "Laki-Laki",
        "UPI",
        "faiz@upi.edu",
        "FPMIPA",
        4321,
        "S2",
        "Machine_Learning",
    ),
    Dosen(
        4444,
        "Luthfiah",
        "Perempuan",
        "ITB",
        "luthfiah@itb.edu",
        "FPTK",
        4231,
        "S2",
        "Pendidikan",
    ),
]

# menampilkan list data mahasiswa
print("|---------------------------------")
print("| DATA MAHASISWA")
print("|---------------------------------")
i = 1
for mhs in listMhs:

    # mencari nama prodi dan course pada list prodi yang kodenya sesuai dengan kode prodi pada mhs
    nama_prodi = ""
    for prodi in listProdi:
        if prodi.getKode() == mhs.getKodeProdi():
            nama_prodi = prodi.getProdi()
            course = prodi.getCourse()

    print("| ", i, " |")
    print("| Nama : ", mhs.getNama())
    print("| NIK : ", mhs.getNik())
    print("| Jenis Kelamin : ", mhs.getJenisKelamin())
    print("| Asal Universitas : ", mhs.getAsalUniversitas())
    print("| Email Edu : ", mhs.getEmailEdu())
    print("| Fakultas : ", mhs.getFakultas())
    print("| NIM : ", mhs.getNim())
    print("| Prodi : ", nama_prodi)
    print("| Course : ")
    for one in course:
        print("|    - ", one.getNamaMatkul())
    print("|---------------------------------")
    i += 1

# menampilkan list data dosen
print()
print("|---------------------------------")
print("| DATA DOSEN")
print("|---------------------------------")
i = 1
for dosen in listDosen:
    nama_prodi = ""

    print("| ", i, " |")
    print("| Nama : ", dosen.getNama())
    print("| NIK : ", dosen.getNik())
    print("| Jenis Kelamin : ", dosen.getJenisKelamin())
    print("| Asal Universitas : ", dosen.getAsalUniversitas())
    print("| Email Edu : ", dosen.getEmailEdu())
    print("| Fakultas : ", dosen.getFakultas())
    print("| NIP : ", dosen.getNip())
    print("| Pendidikan Terakhir : ", dosen.getPendTerakhir())
    print("| Keahlian : ", dosen.getKeahlian())
    print("|---------------------------------")
    i += 1
