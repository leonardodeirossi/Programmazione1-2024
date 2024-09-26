#!/bin/bash

header() {
  printf "Fleming Deployment Management (Ver. 1.0.0)"
  printf "\n"
  printf "(C) 2024 - Leonardo Essam, all rights reserved"
  printf "\n\n"
}

ask_override() {
  read -p "A previous build already exists. Do you want to overwrite it? (Y/n): " answer
  case $answer in
    [Yy]* | "" ) return 0 ;;
    [Nn]* ) echo "Aborting."; exit 1 ;;
    * ) echo "Please answer y (yes) or n (no)."; ask_override ;; 
  esac
}

if [[ "$1" != "--number" || -z "$2" ]]; then
  echo "Usage: $0 --number <number> [--force]"
  exit 1
fi

header

number=$2
output_file="esercizio_$number/a.out"

force=0
if [[ "$3" == "--force" ]]; then
  force=1
fi

if [[ -f "$output_file" && $force -eq 0 ]]; then
  ask_override
fi

if [ -f "esercizio_"$number"/main.cpp" ]; then
  g++ esercizio_"$number"/main.cpp -o "$output_file"

  if [ $? -eq 0 ]; then
    printf "Compilation successful!"
    printf "\n\n"
    printf "Run with: ./exec.sh --number $number"
    printf "\n"
  fi
else
  echo "Unable to open esercizio_"$number"/main.cpp, no such file or directory."
fi
