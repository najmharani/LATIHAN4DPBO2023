# deklarasi kelas Human
class Human:

    # atribut privat milik kelas Human
    __nik = 0
    __nama = ""
    __jenis_kelamin = ""

    # constructor
    def __init__(self, nik=0, nama="", jenis_kelamin=""):
        self.__nik = nik
        self.__nama = nama
        self.__jenis_kelamin = jenis_kelamin

    # setter NIK
    def setNik(self, nik):
        self.__nik = nik

    # setter nama
    def setNama(self, nama):
        self.__nama = nama

    # setter jenis kelamin
    def setJenisKelamin(self, jenis_kelamin):
        self.__jenis_kelamin = jenis_kelamin

    # getter nik
    def getNik(self):
        return self.__nik

    # getter nama
    def getNama(self):
        return self.__nama

    # getter jenis kelamin
    def getJenisKelamin(self):
        return self.__jenis_kelamin
