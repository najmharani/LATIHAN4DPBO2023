# import kelas Human
from Human import Human

# deklarasi kelas Sivitas Akademik yang merupakan child dari Human
class SivitasAkademik(Human):

    # privat atribut milik kelas Sivitas Akademik
    __asal_universitas = ""
    __email_edu = ""
    __fakultas = ""

    # method2 public milik kelas Sivitas Akademik

    # constructor
    def __init__(
        self,
        nik=0,
        nama="",
        jenis_kelamin="",
        asal_universitas="",
        email_edu="",
        fakultas="",
    ):
        # constructor super untuk kelas Human
        super().__init__(nik, nama, jenis_kelamin)

        self.__asal_universitas = asal_universitas
        self.__email_edu = email_edu
        self.__fakultas = fakultas

    # setter asal universitas
    def setAsalUniversitas(self, asal_universitas):
        self.__asal_universitas = asal_universitas

    # setter email edu
    def setEmailEdu(self, email_edu):
        self.__email_edu = email_edu

    # setter fakultas
    def setFakultas(self, fakultas):
        self.__fakultas = fakultas

    # getter asal universitas
    def getAsalUniversitas(self):
        return self.__asal_universitas

    # getter email edu
    def getEmailEdu(self):
        return self.__email_edu

    # getter fakultas
    def getFakultas(self):
        return self.__fakultas
