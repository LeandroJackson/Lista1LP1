#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

class Data{
public:
	Data();
	Data(int dia, int mes, int ano);

	void setData(int dia, int mes, int ano);
	int getDia();
	int getMes();
	int getAno();



private:

    void setDia(int dia);
	void setMes(int mes);
	void setAno(int ano);

	int dia;
	int mes;
	int ano;

};




#endif // DATA_H_INCLUDED
