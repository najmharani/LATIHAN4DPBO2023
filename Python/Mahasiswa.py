# import kelas Sivitas Akademik
from SivitasAkademik import SivitasAkademik

# deklarasi kelas Mahasiswa yang merupakan child dari kelas Sivitas Akademik
class Mahasiswa(SivitasAkademik):

    # atribut2 privat milik kelas Mahasiswa
    __nim = 0
    __kode_prodi = 0

    # constructor
    def __init__(
        self,
        nik=0,
        nama="",
        jenis_kelamin="",
        asal_universitas="",
        email_edu="",
        fakultas="",
        nim=0,
        kode_prodi=0,
    ):
        # constructor super untuk kelas Sivitas Akademik
        super().__init__(
            nik, nama, jenis_kelamin, asal_universitas, email_edu, fakultas
        )
        self.__nim = nim
        self.__kode_prodi = kode_prodi

    # setter nim
    def setNim(self, nim):
        self.__nim = nim

    # setter kode prodi
    def setKodeProdi(self, kode_prodi):
        self.__kode_prodi = kode_prodi

    # getter nim
    def getNim(self):
        return self.__nim

    # getter kode prodi
    def getKodeProdi(self):
        return self.__kode_prodi
