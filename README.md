# HW-SW

Dette er Andres Bugge og Mathies Schous HW/SW projekt på 3. semester. 

Link til overleaf:
[https://www.overleaf.com/project/6548a409f96dea8d83cae468]



# Arkitektur fremsåledes:
.h-filer (Headerfiler):

Sensors.h: Deklarerer sensor-klasserne eller funktionerne og kan indeholde definitioner for sensorernes interface.
Camera.h: Deklarerer kamera-klassen eller funktionerne, herunder metoder til indsamling af matrixdata.
AlarmSystem.h: Deklarerer AlarmSystem-klassen, som inkluderer tilstande og funktioner til at håndtere alarmstatus.
DataCollection.h: Deklarerer Dataindsamlingsmodulets interface.
StateManagement.h: Deklarerer Tilstandsforvaltningsmodulets interface.
IntrusionDetection.h: Deklarerer Intrusion Detection Modulets interface.
.cpp-filer (Kildekodefiler):

Sensors.cpp: Implementerer funktionaliteten af sensorer beskrevet i Sensors.h.
Camera.cpp: Implementerer kameraets dataindsamlingsmetoder defineret i Camera.h.
AlarmSystem.cpp: Implementerer logikken for at styre alarmtilstandene og interaktionen mellem forskellige komponenter som beskrevet i AlarmSystem.h.
DataCollection.cpp: Implementerer logikken for at indsamle data fra sensorer og kamera, som deklareret i DataCollection.h.
StateManagement.cpp: Implementerer logikken for at styre og overvåge systemets tilstande, som deklareret i StateManagement.h.
IntrusionDetection.cpp: Implementerer algoritmerne til at detektere indtrængninger baseret på data fra sensorer og kamera, som deklareret i IntrusionDetection.h.