# 🧩 Sudoku

Sudoku w języku C, z obsługą różnych rozmiarów planszy i poziomów trudności.

![image](https://github.com/user-attachments/assets/393dd4da-9cd7-49e1-8f47-1bc91b5b14bb)

## 🎮 Zasady gry

- Plansza ma rozmiar **N × N**.
- Plansza podzielona jest na **N** małych kwadratów o wymiarach **M × M**.
- Twoim zadaniem jest wypełnić wszystkie komórki planszy cyframi od **1** do **N**.
- W każdym wierszu, kolumnie i każdym małym kwadracie **każda liczba może wystąpić tylko raz**.

## 🆕 Nowa gra

- Plansza jest generowana automatycznie zgodnie z wybranym rozmiarem oraz poziomem trudności.

## 📂 Wczytaj grę

- Możesz wczytać planszę z pliku.

## ⚙️ Rozmiar planszy

- W menu **Wybor rozmiaru planszy** możesz wybrać jeden z trzech rozmiarów: **4 × 4**, **9 × 9** lub **16 × 16**.

## 🎯 Poziom trudności

- Poziom trudności Sudoku określany jest na podstawie liczby możliwych wartości w komórce początkowej poprawnej sekwencji rozwiązania.
Dla poziomu trudności równego 1 (łatwy), istnieje poprawna ścieżka rozwiązywania Sudoku, która rozpoczyna się od komórki mającej co najwyżej jedną możliwą wartość do wpisania.
- Dostępne poziomy: **1**, **2** lub **3**.

## 🚀 Jak uruchomić

1. Przejdź do katalogu `release/`
2. Uruchom plik `Sudoku.exe`

## 🛠️ Środowisko kompilacji

Projekt rozwijany w następującym środowisku:
- IDE: **CLion 2024.3.4**
- Toolchain: **Bundled MinGW w64 (wersja 11.0)**
- CMake: **Bundled version 3.30.5**
- Kompilator C: **GCC 13.1.0**
- Debugger: **Bundled GDB 15.2**
- Standard języka C: **C23**

## 🖥️ Przegląd programu
<video src="https://github.com/user-attachments/assets/302fa33d-e96c-437d-9684-cc9b871c7068"></video>

## 🎮 Przebieg gry – rozwiązywanie Sudoku
<video src="https://github.com/user-attachments/assets/12d6c927-52dd-4511-bc6a-698256e29e0c"></video>


