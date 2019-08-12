#ifndef ABSTRACTA_H
#define ABSTRACTA_H


class Abstracta
{
    public:
        Abstracta();
        virtual ~Abstracta();

        virtual int Metodo() = 0;  //metodo virtual puro

    protected:

    private:
};

#endif // ABSTRACTA_H
