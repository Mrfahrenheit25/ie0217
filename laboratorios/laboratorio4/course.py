
'''Se deine la clase curso, que tiene los atributos del nombre y codigo del curso'''
class Course():
    # metodo constructor que inicializa los los atributos de nombre y codigo
    def __init__(self,course_code, course_name):
        self.course_code = course_code
        self.course_name = course_name
        
    # metodo que muestra los datos del curso, con su codigo y nombre 
    def display_info(self):
        print(f"Course code: {self.course_code}\
              \nCourse name: {self.course_name}\n")