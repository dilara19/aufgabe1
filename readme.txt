
===
Vorarbeit
===
Tragen Sie sich bis Mittwoch, 17.10.2018 12:00 Uhr im KVV -> Section Info in eine Gruppe (Lab<X>) ein (siehe VL-Skript). Sie erhalten dann in den darauf folgenden Tagen Zugang zum Git-Repository.

====
Programmieraufgabe 1
====
Abgabe: Mittwoch, 24.10.2018 um 12:00 Uhr per Git.

Implementieren sie ein Programm, das eine Datei im FASTA-Format (https://de.wikipedia.org/wiki/FASTA-Format) einliest und die Sequenz in ihr reverses Komplement umwandelt.
Eine alle Sequenz-Zeilen in der Ausgabedatei sollen genau 80 Zeichen lang sein (ausgenommen die erste Zeile mit der Meta-Information und die letzte Zeile).

Das Komplement einer DNA-Base ist folgendermaßen definiert:

    'A' => 'T'
    'C' => 'G'
    'G' => 'C'
    'T' => 'A'

Ihr Programm muss für Großbuchstaben funktionieren. Es werden nur Eingaben mit Großbuchstaben getestet.
Weiterhin nehmen wir an, dass die FASTA-Datei nur eine einzige (aber beliebig lange) Sequenz (+vorangestellte Metadaten) enthaelt.

Laden Sie sich das Material zu Aufgabe 1 aus dem KVV herunter. 
Aufgabe1_material.zip enhaelt:

 - aufgabe1.hpp
Eine Header-Datei mit dem Interface welches von ihnen implementiert werden soll. Jede Funktion ist kurz beschrieben und ihre Implementierung 
sollte genau diese Funktionalitaet abdecken. Einige Funktionen haengen semantisch von anderen ab.

 - aufgabe1_main.cpp
Eine Source-Datei mit main-Funktion. Grundlage fuer das ausfuerbare Programm, welches Sie mit Testdaten fuettern koennen
Dieses Programm bekommt 2 Parameter beim Aufruf:

    Die Eingabe-FASTA-Datei
    Die Ausgabedatei in der das reverse Komplement der Sequenz gespeichert werden soll (im FASTA-Format)

Sie finden zwei Fasta-Dateien im Unterordner ./data.

    test.fasta
    NC_012743.2.fasta
Die erste ist eine kleine Testdatei und die 2. das komplette Genom von Burkholderia phage BcepIL02.

- aufgabe1_test.cpp
Eine Source-Datei mit main-Funktion, welche ihre Implementierung testet. 


Entpacken Sie alle Dateien in ein Unterverzeichnis 'aufgabe1' Ihres Git-Gruppen-Verzeichnisses.
Falls sie noch keinen Git clone gemacht haben, benutzen Sie irgendein lokales Verzeichnis und kopieren Ihre Arbeit spaeter in das Git-Verzeichnis hinein.

In den Source-Dateien ist der Programmfluss bereits vorgegeben. 
Ihre Aufgabe besteht darin, die vorgegebenen Funktions-Interfaces aus aufgabe1.hpp in einer aufgabe1.cpp zu implementieren (diese Datei existiert noch nicht; legen Sie sie an).

Sie können ihre Programme folgendermaßen kompilieren und ausführen:
aufgabe1_main.cpp:
>$ cd /path/to/local/gitrepo/groupX/aufgabe1 
>$  g++ -std=c++17 -Wall -pedantic -O3 aufgabe1.cpp aufgabe1_main.cpp -o aufgabe1_main
>$ ./aufgabe1_main ./data/test.fasta test_out.fasta

aufgabe1_test.cpp:
>$ cd /path/to/local/gitrepo/groupX/aufgabe1 
>$  g++ -std=c++17 -Wall -pedantic -O3 aufgabe1.cpp aufgabe1_test.cpp -o aufgabe1_test
>$ ./aufgabe1_test

Diese beiden Programme muessen unter Linux auf den Poolrechnern compilieren (wie oben beschrieben) und erfolgreich ausgefuehrt werden koennen, damit Sie die Aufgabe bestehen.
Checken Sie mindestens aufgabe1/aufgabe1.cpp ins Git ein. Alle anderen Dateien sind optional.

Weitere Hinweise:

Hier finden Sie Dokumentation zu den verwendeten C++ Datentypen:

    http://en.cppreference.com/w/cpp/utility/pair
    http://en.cppreference.com/w/cpp/string/basic_string
    http://en.cppreference.com/w/cpp/io/basic_fstream

Einloggen in einen Unix Rechner:

Windows-Nutzer können das Tool putty.exe (www.putty.org) benutzen um sich auf einen  Linux-Pool Rechner einzuloggen.

Linux oder Mac Nutzer können sich einfach per ssh mit einem Linux-Pool Rechner einloggen.

Folgende Polorechner stehen Ihnen zur Verfügung: http://www.mi.fu-berlin.de/w/IT/ServicesStudentPools

Im folgenden Tutorial finden Sie einen Einstieg im Bedienen der Unix-Kommandozeile: https://lifehacker.com/5633909/who-needs-a-mouse-learn-to-use-the-command-line-for-almost-anything.

 

Viel Erfolg!
