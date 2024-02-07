PYTHON = python3
TARGET1 = ./src/tarea5.py
TARGET2 = ./src/tarea5_p2.py
DATOS_CSV = ./src/datos.csv

all: run

run: run1 run2
run1: $(DATOS_CSV)
	$(PYTHON) $(TARGET1)
	
run2:
	$(PYTHON) $(TARGET2)

$(DATOS_CSV):
	cp datos.csv $(DATOS_CSV)