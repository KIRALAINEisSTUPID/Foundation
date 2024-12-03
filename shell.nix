# shell.nix
{ pkgs ? import <nixpkgs> {} }:

pkgs.mkShell rec {
  name = "Foundation";  # Имя окружения
  buildInputs = [
    pkgs.fastfetch
  ];

  shellHook = ''
    echo "Welcome to the dev environment!"
  '';  
}