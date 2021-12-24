
#include <stdio.h> //подключение заголовочного файла
#include <stdint.h> //для перехода на русский язык

//Задание - упорядочить одномерный массив в порядке убывания

//Инициализируем массивы с числами
	int8_t mas[] = {5,3,2,15,5,4,8,9};
	int8_t mas2[] = {4,6,1,10,12,13,23,5,7,11};
	int8_t mas3[] = {12,3,32,4};

	int8_t rezult[sizeof(mas)/sizeof(int8_t)];
	int8_t rezult2[sizeof(mas2)/sizeof(int8_t)];
	int8_t rezult3[sizeof(mas3)/sizeof(int8_t)];

//b-размер массива,а-входной массив	
	size_t b;
	int8_t a,j,c,d,i;
	
	//Объявляем прототипы функции, которые будут выполнять "копирование" и "сортировку" соответственно	
void copy_proc (int8_t* mas_in,size_t b, int8_t* rezult_out);
void sort_proc (int8_t* rezult_out, size_t b);
    
int main(void)	
	{		
					b=sizeof(mas)/sizeof(int8_t);
					copy_proc(mas, b, rezult);		
					sort_proc(rezult, b);
		
					b=sizeof(mas2)/sizeof(int8_t);
					copy_proc(mas2,b, rezult2);
					sort_proc(rezult2, b);
		
					b=sizeof(mas3)/sizeof(int8_t);
					copy_proc(mas3, b, rezult3);		
					sort_proc(rezult3, b);
		
			return 0;
		}			
void copy_proc (int8_t* mas_in,size_t b, int8_t* rezult_out)

{ int i=0;
			for(i=0; i<b; i++)
				{rezult_out[i]=mas_in[i];
}		
}				

void sort_proc (int8_t* rezult_out, size_t b)
	
{do
			{a=0;
				for(i=0; i<(b-1); i++)
				{j=i+1;
					c=rezult_out[i];
					d=rezult_out[j];
//сравнимаем первый и второй элемент массива
//если c>=d замена местами не нужна				
			if(c>=d)
				{rezult_out[i]=c;
					rezult_out[j]=d;
				}
//если c<=d, то меняем местами элементы массива			
			else
				{rezult_out[j]=c;
					rezult_out[i]=d;
						a++;}
}
		}		while (a>0);
					
			
}
