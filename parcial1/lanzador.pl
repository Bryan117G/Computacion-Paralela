#!/usr/bin/perl

#######################################################################################
# Fecha: 17 de febrero de 2022
# Autor: Bryan Syeven Garavito Gonzzalez 
# Materia: Parallel Computing
# Tema: Diseño de Experimentos, Automatización de ejecucción (Promedio y desviación)
#######################################################################################

$PATH = `pwd`;
chomp($PATH);

# Variable que representa la cantidad de repeticiones
$N = 30;

# Se crea un vector de Ejecutables
@Ejecutables = ("Bench01", "benchReference", "MMc01");

# Se crea un vector de Dimensiones NxN
@Dimension = ("1000", "2000");

foreach $exe (@Ejecutables){
    foreach $size (@Dimension){
        $File = "$PATH/"."Soluciones/"."$exe"."-$size".".txt";
        # print("$File\n");
        for($i = 0; $i < $N; $i++){
            # print("'$PATH/$exe' $size \n");
            system("'$PATH/$exe' $size >> '$File'");
        } 
        close($File);
    }
}
exit(0);
