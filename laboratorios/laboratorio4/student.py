from person import Person

'''creo la clase estudiante, que hereda aspectos de la clase persona,
 y tambien tiene aspectos propios como el id del estudiante
'''
class Student(Person):
    # Metodo constructor que inicializa los atributos e inicia una lista vacia de cursos
    def __init__(self, name, age,student_id):
        super().__init__(name, age)
        self.student_id = student_id
        self.courses = []
    # Metodo para inscribir un curso, utiliza para cursos para su funcionamiento, y se agregan a la lista
    def enroll_course(self, course):
        self.courses.append(course)

    '''Metodo que muestra la informacion del estudiante, 
    con su nombre, edad, ID de estudiante y los cursos 
    en los que está inscrito.
    '''
    def display_info(self):
        super().display_info()
        print(f"Student ID :{self.student_id} \
              \nCourse: {', '.join(self.courses)}\n")
        