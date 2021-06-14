class contobancario
{
    private:
        double saldo;
    public:
        contobancario(double s = 0.0) : saldo(s) {}

        double deposita(double x) {
            return saldo+=x;
        }
        
        double preleva(double x) {
            return saldo-=x;
        }

        double Saldo() {
            return saldo;
        }
};

class contocorrente : public contobancario
{
    private:
        static double spesa_fissa;
    public:
        double deposita(double x) {
            return contobancario::deposita(x - spesa_fissa);
        }
        
        double preleva(double x) {
            return contobancario::preleva(x + spesa_fissa);
        }
};

class contorisparmio : public contobancario
{
    private:
    public:
        contorisparmio(double s = 0.0) : contobancario(s) {}

        double deposita(double x) {
            return contobancario::deposita(x);
        }
        
        double preleva(double x) {
            return (x <= Saldo()) ? contobancario::preleva(x): Saldo();
        }
};

class contoarancio : contorisparmio
{
    private:
        contocorrente& appoggio;
    public:
        contoarancio(contocorrente& cc, double s = 0.0) :
        contorisparmio(s),
        appoggio(cc)
        {}

        double deposita(double x) {
            if(x >= 0)
            {
                appoggio.preleva(x);
                contorisparmio::deposita(x);
            }
            return Saldo();

        }
        
        double preleva(double x) {
            if(x <= Saldo() && x >= 0)
            {
                appoggio.deposita(x);
                return contorisparmio::preleva(x);
            }
            return Saldo();
        }
};
