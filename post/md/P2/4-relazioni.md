
## Relazioni tra classi

tipi di relazioni tra classi:
* dipendenza --> usa un
* associazione --> ha un
    * aggregazione --> possiede un
    * composizione --> fa parte di
* generalizzazione --> è un

data una classe A e una classe B

**dipendenza**

A utilizza un tipo B come parametro, tipo di ritorno o oggetto in un metodo

**associazione**

A ha un puntatore alla classe B nei suoi campi dati

**aggregazione**

A possiede un tipo B, se muore A non è detto muoia B

**composizione**

A è composto da B, se muore A muore B

**generalizzazione**

A è B, ma B non è detto sia A

**esempio classe telefonata**

```c++
class Telefonata{
    private:
        orario inizio;
        orario fine;
        int numero;
    public:
        Telefonata(orario,orario,int);
        Telefonata();         
        orario Inizio() const;
        orario Fine() const;
        bool operator==(const telefonata&) const;

}
```

