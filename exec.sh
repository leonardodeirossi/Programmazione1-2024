#!/bin/bash

header() {
  printf "Fleming Deployment Management (Ver. 1.0.0)"
  printf "\n"
  printf "(C) 2024 - Leonardo Essam, all rights reserved"
  printf "\n\n"
}

if [[ "$1" != "--number" || -z "$2" ]]; then
  echo "Usage: $0 --number <number> [--force]"
  exit 1
fi

number=$2
output_file="esercizio_$number/a.out"

if [ -f $output_file ]; then
   "./$output_file"
else
   header

   printf "No build for exercise $number has been found."
   printf "\n"
   printf "Please compile it first by using: ./build.sh --number $number"
   printf "\n"
fi