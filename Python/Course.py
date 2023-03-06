# deklarasi kelas course
class Course:

    # atribut private milik kelas course
    __nama_matkul = ""

    # constructor
    def __init__(self, nama_matkul=""):
        self.__nama_matkul = nama_matkul

    # setter nama matkul
    def setNamaMatkul(self, nama_matkul):
        self.__nama_matkul = nama_matkul

    # getter nama matkul
    def getNamaMatkul(self):
        return self.__nama_matkul
