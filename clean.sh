#!/bin/bash

header() {
  printf "Fleming Deployment Management (Ver. 1.1.0)"
  printf "\n"
  printf "(C) 2024 - Leonardo Essam, all rights reserved"
  printf "\n\n"
}

find_and_delete_aout() {
  aout_files=($(find . -type f -name "a.out"))

  if [ ${#aout_files[@]} -eq 0 ]; then
    echo "No build found in current workspace."
    exit 0
  fi

  read -p "Are you sure you want to delete all the existing builds? (y/N): " answer
  case $answer in
    [Yy]* )
      for file in "${aout_files[@]}"; do
        rm -v "$file"
      done
      echo "Operation completed."
      ;;
    [Nn]* )
      echo "Aborting, no files deleted."
      exit 0
      ;;
    "" )
      echo "Operation canceled, no files deleted."
      exit 0
      ;;
    * )
      echo "Invalid input. Please answer y (yes) or n (no)."
      exit 1
      ;;
  esac
}

header
find_and_delete_aout
