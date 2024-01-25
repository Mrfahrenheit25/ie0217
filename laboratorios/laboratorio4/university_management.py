# importo las clases de los archivos respectivos
from student import Student
from teacher import Teacher
from course import Course

# Se crean las instancias de estudiantes, profesores y cursos
student1 = Student("Esteban", 43, "B30754")
student2 = Student("Maria", 26, "B67823")

teacher1 = Teacher("Jorge Romero", 65, "123123")
teacher2 = Teacher("Luis Diego Marin", 61, "987456")

course1 = Course("IE0257","DSA")
course2 = Course("IE0323","CD1")

# inscripcion de los estudiantes en los cursos
student1.enroll_course(course1.course_code)
student1.enroll_course(course2.course_code)

# asignacion de cursos para los profesores
teacher1.assign_course(course1.course_code)
teacher2.assign_course(course2.course_code)

# mostrar la informacion del estudiante 1, del maestro y del curso.
student1.display_info()

teacher1.display_info()

course1.display_info()
