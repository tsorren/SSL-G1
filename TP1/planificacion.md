##### Funciones:
	Main:
	1. Recibir en main 3 parametros
		Inicio		Nudos
		Fin 		Nudos
		Incremento
	2. Llamar Tabla

	Tabla:
	1. Recibir 3 params
	2. Calcular cant filas
	3. Llamar a conversion por cada fila
	4. Mostrar con formato

	Conversion
	1. Recibir Nudos
	2. Devolver Km/h

##### CODIGO:
	Conversion:
		float convertirNudosKmH(float);

	Tabla:
		ASSERT(inicio,fin,incremento); (todo pos, fin > inicio+incremento)
		void mostrarTabla(float, float, float);
		void mostrarInicio(float, float, float);
		void mostrarConFormato(float, float);
		int cantidadFilas(float, float, float);

	Main:
		mostrarTabla(param1, param2, param3);

##### Formatting:
	func camelCase
	struct PascalCase
	const MAYUS
	vars snake_case

##### Tareas:
	Conversion, Conversion.i, cantidadFilas -> Lucas Arias
	Tabla:
		mostrarInicio y mostrarConFormato -> Tadeo Sorrentino
		mostrarTabla -> Agustin Herzkovich
	Main -> Julián Estévez
	Archivo Resultados -> Santiago Torres, Maximo Punta