# shell.nix
{ pkgs ? import <nixpkgs> {} }:

pkgs.mkShell rec {
  name = "my-dev-env";  # Имя окружения
  buildInputs = [
    pkgs.python39      # Установка Python 3.9
    pkgs.git           # Установка Git
    pkgs.nodejs        # Установка Node.js
    pkgs.vim           # Установка Vim
  ];

  shellHook = ''
    echo "Welcome to the dev environment!"
  '';  
