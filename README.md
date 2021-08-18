# STL_konkurs

Zadanie1: Wykorzystaj (sensownie) jak najwięcej algorytmów, aby wypisać dane z wektora na strumień wyjścia (std::cout).
  Zasady:
	- Każde poprawne rozwiązanie 1 eurogąbek.
	- Każde niepoprawne rozwiązanie -0.5 eurogąbki.
	- std::count_if w którym umieścimy lambdę wypisująca dane do strumienia to złe rozwiązanie.
	- std::generate jest zbyt dużym naciągnięciem, więc również odpada.
	- Nie używamy raw pętli (for, while etc...).
	- Jest 13 poprawnych algorytmów (4 z nich są lekkim nagięciem, ale są sensowne w niekotnych przypadkach).
	- Maksymalna ilość punktów do zdobycia to 10 eurogąbek (zatem wystarczy 10 rozwiązań, nie trzeba zgadywać wszystkich).


Zadanie2: Napisz program, który będzie sprawdzał wynik w kościanego pokera.
  Opis:
    - Dostępne są następujące wyniki (nie jest to zgodne z Wikipedią), w nawiasach podano przykładowy rzut spełniający wymogi:
	HigherNumber, (1, 2, 3, 5, 6)
	OnePair, (1, 1, 2, 3, 4)
	TwoPair, (1, 1, 2, 2, 3)
	Triplet, (1, 1, 1, 2, 3)
	Full, (1, 1, 1, 2, 2)
	Quadruplets, (1, 1, 1, 1, 2)
	SmallStrit, (1, 2, 3, 4, 5)
	BigStrit, (2, 3, 4, 5, 6)
	Poker (1, 1, 1, 1, 1)
  Zasady:
	- Wykorzystajcie programowanie obiektowe.
	- Koda ma być prosty bez zawiłej ifologi i skomplikowanego łączenia wielu predykatów.
	- Maksymalna ilość dopuszczalnych 'if' to 10 (da się o zrobić za pomocą 9 lub pewnie nawet mniej).
	- Każdy 'if' więcej to -2 eurogąbki (nie można zejść poniżej 0 za to zadanie, więc spokojnie).
	- 'else' i 'else if' to też if.
	- :? to także `if - else` więc również jest zaliczany jako `if`.
	- Rozrysuj sobie na kartce, jakie są możliwości i zastanów sie, jaka jest korelacja między wynikami.
	- Za poprawne rozwiązanie zadania 15 eurogąbek
	- Za dodanie testów 5 (GTEST/ CATCH) eurogąbek
	- Finalna liczba punktów: ZDOBYTE_PUNKTY - (ILOŚĆ_IF_POWYŻEJ_10 * 2)
	- Jeżeli wyjdzie Ci nawet 15 ifów to i tak dalej możesz zdobyć 10 punktów! (20 - (5 * 2)) = 10!


Zadanie3: Napisz program, który odczyta pewien plik wejściowy i usunie z niego wszystkie nadmiarowe spacje, oraz znaki nowej linii
  Input:
	"Ala ma kota a kot \n\n nie ma \nali\n\n\n\n !!! \n\n "
  Output:
	"Ala ma kota a kot \n nie ma \nali\n !!! \n "
  Zasady:
  	- W kodzie nie będzie znaków '\n' dodałem je tu tylko aby dane były zwięzłe. Będa jedynie entery.
	- Kod ma być napisany z wykorzystaniem tylko STL!
	- Im bardziej eleganckie rozwiązanie tym więcej punktów!
	- Wczytujemy dane, filtrujemy je i wypisujemy na strumień wyjścia.
	- Maksymalna ilość punktów: 5 eurobąbek
	- Przykładowe dane do testowania zandjują się w pliku: Sumfing.txt


Zadanie4: Napisz program, który Odczyta pewien plik wejściowy oraz wyświetli następujące statystyki.
  Statystki do wypisania:
	- Ilość znaków,
	- Ilość słów,
	- Ilość linii,
	- Najczęściej występujące słowo wraz z liczbą powtórzeń (jeżeli jest ich więcej niż jedno, to wypisz wszystkie),
	- Najrzadziej występujące słowo wraz z liczbą powtórzeń (jeżeli jest ich więcej niż jedno, to wypisz wszystkie),
	- Najdłuższe słowo wraz z liczbą jego liter (jeżeli jest ich więcej niż jedno, to wypisz wszystkie),
	- Najkrótsze słowo wraz z liczbą jego liter (jeżeli jest ich więcej niż jedno, to wypisz wszystkie),
  Zasady:
	- Korzystamy tylko z STL!
	- Za każde poprawne wypisanie jednej ze statystyk 3 eurogąbki.
	- Maksymalna liczba punktów to: 7 * 3 = 21 eurogąbek.
	- Do dołączonego rozwiązania proszę zamieścić także plik, na którym testowaliście zadanie, abym mógł łatwo zweryfikować poprawność :)
	- Przykładowe dane do testowania zandjują się w pliku: Sumfing2.txt
	- Ilość znaków słów i linii można łatwo zweryfikować komendą `wc`, wyniki powinny być identyczne.
