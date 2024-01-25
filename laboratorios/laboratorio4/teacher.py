from person import Person

''' Se crea la clase maestro, heredando de la clase persona el nombre y la edad,
 y agregando un id de empleado'''
class Teacher(Person):
    # Metodo constructor que inicializa los atributos, y tambien crea la lista vacia de cursos ensenados
    def __init__(self, name, age, employee_id):
        super().__init__(name, age)
        self.employee_id = employee_id
        self.courses_taught = []

    # metodo para asignarle los cursos al profesor, de igual fomra usa cursos para su funcionamiento
    def assign_course(self, course):
        self.courses_taught.append(course)

    '''Un método que muestra la información del profesor,
    incluido su nombre, edad, ID de empleado 
    y los cursos que enseña.
    '''
    def display_info(self):
        super().display_info()
        print(f"Employee ID: {self.employee_id} \
              \nCourses taught: {', '.join(self.courses_taught) }\n")