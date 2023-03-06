# import kelas course
from Course import Course

# deklarasi kelas prodi
class Prodi:

    # atribut2 privat milik kelas prodi
    __nama_prodi = ""
    __kode = 0
    __course = []  # atribut yang akan berisi list of object dari kelas course

    # constructor
    def __init__(self, nama_prodi="", kode=0, course=None):
        self.__nama_prodi = nama_prodi
        self.__kode = kode
        self.__course = course

    # setter nama prodi
    def setProdi(self, nama_prodi):
        self.__nama_prodi = nama_prodi

    # getter nama prodi
    def getProdi(self):
        return self.__nama_prodi

    # setter kode prodi
    def setKode(self, kode):
        self.__kode = kode

    # getter kode prodi
    def getKode(self):
        return self.__kode

    # setter course (dalam bentuk course adalah list of object course)
    def setCourse(self, course):
        self.__course = course

    # getter course
    def getCourse(self):
        return self.__course

    # add matkul ke dalam atribut course (satu matkul/course)
    def addCourse(self, nama_matkul):
        self.__course.append(Course(nama_matkul))
