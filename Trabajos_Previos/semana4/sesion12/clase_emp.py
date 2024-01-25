# Definir la clase Employee
class Employee:
    # Inicializar el atributo de clase
    employee_id = 0

# Crear dos objetos de la clase Employee
employee1 = Employee()
employee2 = Employee()

# Acceder a los atributos utilizando employee1
employee1.employee_id = 1001
print(f"Employee ID for employee1: {employee1.employee_id}")

# Acceder a los atributos utilizando employee2
employee2.employee_id = 1002
print(f"Employee ID for employee2: {employee2.employee_id}")
