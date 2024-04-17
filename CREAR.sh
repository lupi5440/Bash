#!/bin/bash

# Compilando cada uno de los programas
gcc Bash.c -o bash
gcc PrintGroup.c -o printGroup
gcc PrintPid.c -o printPid
gcc PrintPpid.c -o printPpid
gcc PrintSerieFibonacci.c -o printSerieFibonacci
gcc PrintSesion.c -o printSesion
gcc PrintUser.c -o printUser

# Cambiando los permisos para hacer los programas ejecutables
chmod +x bash printGroup printPid printPpid printSerieFibonacci printSesion printUser

echo "Compilación y cambio de permisos completados."
