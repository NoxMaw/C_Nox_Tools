
# Nox tools

Some random 'tools' written in C.
Mostly for fun and practice.


## Nox_Random

#### Nox_RSG

Nox Random String Generator

Generates a string of 51 characters (from A to Z and a to z). using the Factorial 52 principle for randomness.

Example output:

OMrfguUnixzcemBkHGhdEPYbtARFDVXjTpqlvZLJQSWoICywsKN

#### Nox_RTD

Nox Roll The Dice

Rolls a dice of X faces. Built atop Nox_RSG for randomness.

#### Nox_Speak

Built atop Nox_RSG for randomness.

Prints a random string of X characters to stdout, not particularly fast. Woks best for words of 3 to 4 characters.

## Nox_Default
Implementation of some of the standard library functions built from scratch for practice, and some custom functions.

Custom Functions:
- Str_Get_Random - Gets a random char from a string
- Divide_Str -  Divides a str in smaller sections of X size

Standard Library Functions:
- Printf
- StrStr
- Strchr
