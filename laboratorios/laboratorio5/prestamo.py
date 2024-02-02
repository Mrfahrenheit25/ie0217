import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

class Prestamo:
    """
    Se inicializa un objeto de préstamo con el monto del préstamo,
    la tasa de interés anual y la cantidad de cuotas.
    """
    def __init__(self, monto_prestamo, tasa_interes_anual, cuotas):
        self.monto_prestamo = monto_prestamo
        self.tasa_interes_anual = tasa_interes_anual
        self.cuotas = cuotas
        self.amortizacion = self.calcular_amortizacion()

    def calcular_amortizacion(self):
        """
        Se calcula la amortización del préstamo y devuelve una lista de 
        diccionarios con los detalles de cada cuota.
        """
        try:
            tasa_interes_mensual = self.tasa_interes_anual / 12 / 100
            cuota_mensual = (tasa_interes_mensual * self.monto_prestamo)/ (1 - (1 + tasa_interes_mensual)**-self.cuotas)

            saldo_restante = self.monto_prestamo
            amortizacion = []
            for cuota in range(1, self.cuotas + 1):
                interes_pendiente = saldo_restante * tasa_interes_mensual
                amortizacion_prinicipal = cuota_mensual - interes_pendiente

                saldo_restante -= amortizacion_prinicipal
                amortizacion.append({'Cuota': cuota, 'interes': interes_pendiente, 'amortizacion': amortizacion_prinicipal,'saldo restante':saldo_restante})
            return amortizacion
        except ZeroDivisionError:
            print("Error : la cantidad de cuotas no puede ser 0")
            return []
        
    def generar_reporte(self, archivo_salida):
        """
        Genera un archivo CSV con los detalles de amortización del préstamo.
        """
        try:
            df = pd.DataFrame(self.amortizacion)
            df.to_csv(archivo_salida, index = False)
            print(f'reporte generado con exito: {archivo_salida}')
        except Exception as e:
            print(f'ocurrio un error al generar el reporte: {str(e)}')

    def graficar_amortizacion(self):
        """
        Genera un gráfico de barras que muestra la amortización e intereses por cuota.
        """
        df = pd.DataFrame(self.amortizacion)

        data = np.array([df['interes'],df['amortizacion']])
        plt.bar(df['Cuota'],data[0], label='interes')
        plt.bar(df['Cuota'],data[1], bottom=data[0], label='amortizacion')
        plt.xlabel('Numero de cuota')
        plt.ylabel('Monto (S)')
        plt.title('Amortizacion e interes por cuota')
        plt.legend()
        plt.show()

def main():
    # pedir monto al usuario
    # pedir la tasa de interes
    try:
        monto_prestamo = float(input("Ingrese el monto del préstamo: "))
        if monto_prestamo <= 0:
            raise ValueError("El monto del prestamo no tiene sentido, debe de ser positivo")
        tasa_interes_anual = float(input("Ingrese la tasa de interés anual (%): "))
        if tasa_interes_anual <= 0:
            raise ValueError("Se vale soñar, no hay tasas de interes negativas")
        cuotas = int(input("Ingrese la cantidad de cuotas: "))
        if cuotas <= 0:
            raise ValueError("NO hay viaje en el tiempo, las cuotas deben de ser positivas")
        # instanciar el prestamo
        prestamo = Prestamo(monto_prestamo, tasa_interes_anual, cuotas)
        # generar el reporte
        archivo_rep = "reporte_pres.csv"
        prestamo.generar_reporte(archivo_rep)
        # graficar la amortizacion
        prestamo.graficar_amortizacion()
        # manejo de excepciones, value error y generico
    except ValueError as E:
        print(f'Error: {E}')
    except Exception as e:
        print(f'Error inesperado: {str(e)}')

if __name__ == "__main__":
    main()
    60000000
    9
    360