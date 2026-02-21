# wxCalc
Un semplice esempio di programma in C++ con uso di wxWidgets (somma di due numeri)

---

# Istruzioni

---


### 0️⃣Scarica ed installa MSYS2


### 1️⃣ Apri (MSYS2) la shell giusta

Dal menu Start apri **“MSYS2 UCRT64”**
⚠️ **Non** usare `MSYS` o `MINGW64`.

---

### 2️⃣ Aggiorna il sistema

```bash
pacman -Syu
```

---
### 3️⃣ Installa wxWidgets 3.3 (UCRT)

```bash
pacman -S mingw-w64-ucrt-x86_64-wxwidgets3.3
```

### 4️⃣Installare il compilatore:

```bash
pacman -S mingw-w64-ucrt-x86_64-toolchain
```

---

### 5️⃣ Verifica l’installazione

```bash
wx-config --version
```

Dovresti vedere qualcosa tipo:

```
3.3.x
```

---

### 6️⃣Installare  make

```
pacman -S make
```

### 7️⃣Installare git
```
pacman -S git
```

---

### 8️⃣Clona da git il progetto
```
git clone https://github.com/Marco-prog/wxCalc.git
```

### 9️⃣Compilazione 
```
cd wxCalc
make
./main.exe
```
