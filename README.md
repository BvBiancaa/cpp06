# 42 cpp06

<h3> Italiano 🇮🇹</h3>
Il settimo modulo delle piscine in c++.

<h4>Esercizio 00: Conversione di tipi scalari</h4>
L'esercizio richiede di creare la classe ScalarConverter che contiene un metodo "convert"; la funzione converte un valore letterale negli altri più comuni (int, char, float, double).

<h4>Esercizio 01: Serializzazione</h4>
L'esercizio richiede di implementare una classe statica chiamata Serializer che fornisce due metodi: "serialize" e "deserialize".
Il metodo "serialize" prende un puntatore e lo converte in un intero senza segno di tipo uintptr_t, mentre il metodo "deserialize" prende un intero senza segno e lo converte in un puntatore a un oggetto di tipo Data.
L'obiettivo è testare la classe Serializer creando una struttura di dati (Data) e verificando che la deserializzazione produca un puntatore uguale al puntatore originale.

<h4>Esercizio 02: Identificazione del tipo reale</h4>
L'esercizio richiede di implementare diverse classi e funzioni per identificare il tipo reale di un oggetto in base alla sua classe derivata.
Si crea una classe di base (Base) e tre classi derivate (A, B, C).
La funzione "generate" genera in modo casuale un'istanza di A, B o C e restituiscono un puntatore di tipo Base.
La funzione "identify" stampa il tipo effettivo dell'oggetto.

Competenze acquisite:

- Gestione dei tipi di dati scalari in C++
- Conversione tra tipi di dati scalari
- Serializzazione e deserializzazione dei puntatori
- Polimorfismo

-------------------

<h3> English 🇬🇧</h3>
The seventh module of the C++ piscine.

<h4>Exercise 00: Scalar Type Conversion</h4>
The exercise requires creating the class ScalarConverter, which contains a method called "convert". This function converts a literal value into other common types (int, char, float, double).

<h4>Exercise 01: Serialization</h4>
The exercise requires implementing a static class called Serializer that provides two methods: "serialize" and "deserialize". The "serialize" method takes a pointer and converts it into an unsigned integer of type uintptr_t, while the "deserialize" method takes an unsigned integer and converts it into a pointer to a Data object. The goal is to test the Serializer class by creating a data structure (Data) and verifying that deserialization produces a pointer equal to the original pointer.

<h4>Exercise 02: Identifying the Real Type</h4>
The exercise requires implementing different classes and functions to identify the real type of an object based on its derived class. A base class (Base) and three derived classes (A, B, C) are created. The "generate" function randomly instantiates an instance of A, B, or C and returns a Base pointer. The "identify" function prints the actual type of the object.

Skills acquired:

- Handling scalar data types in C++
- Conversion between scalar data types
- Serialization and deserialization of pointers
- Polymorphism
