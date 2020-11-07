#include <practica2.h>

void main()
{
    int8 ringCounter = LSB;
    int1 ban = 0;
    set_tris_a(0b00000000);
	while(TRUE)
	{
		output_a(ringCounter);
            delay_ms(DELAY);
            if(ringCounter == MSB)
                ban=1;
            else if(ringCounter == LSB)
                ban=0;
            
                if(ban == 1)
                    rotate_right(&ringCounter,1);
                else
                    rotate_left(&ringCounter,1);
            
            //rotate_left(&ringCounter,1); sin inicializar la variable dentro del ciclo
            /*if(ringCounter==MSB) Inicializando la variable varias vecs 
            {
                ringCounter=LSB;
            }
            else
            {
                ringCounter *= 2;
            }*/
	}
}
