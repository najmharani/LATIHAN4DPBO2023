# import kelas Sivitas Akademik
from SivitasAkademik import SivitasAkademik

# deklarasi kelas dosen yang merupakan anak dari kelas Sivitas Akademik
class Dosen(SivitasAkademik):

    # atribut2 private milik kelas dosen
    __nip = 0
    __pend_terakhir = ""
    __keahlian = ""

    # constructor
    def __init__(
        self,
        nik=0,
        nama="",
        jenis_kelamin="",
        asal_universitas="",
        email_edu="",
        fakultas="",
        nip=0,
        pend_terakhir="",
        keahlian="",
    ):
        # constructor super untuk kelas Sivitas Akademik
        super().__init__(
            nik, nama, jenis_kelamin, asal_universitas, email_edu, fakultas
        )
        self.__nip = nip
        self.__pend_terakhir = pend_terakhir
        self.__keahlian = keahlian

    # setter nip
    def setNip(self, nip):
        self.__nip = nip

    # getter nip
    def getNip(self):
        return self.__nip

    # setter pendidikan terakhir
    def setPendTerakhir(self, pend_terakhir):
        self.__pend_terakhir = pend_terakhir

    # getter pendidikan terakhir
    def getPendTerakhir(self):
        return self.__pend_terakhir

    # setter keahlian
    def setKeahlian(self, keahlian):
        self.__keahlian = keahlian

    # getter keahlian
    def getKeahlian(self):
        return self.__keahlian
