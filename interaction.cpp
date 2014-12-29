
#include"draw.h"

void main()
{
	float Amp1,Amp2,omega1,omega2,k1,k2;
	
	//ask for the parameters:Amplitude,angular velocity,wave vector
printf("\nWhen two waves with different parameters come into together,what will the their shape look like?");
printf("\nNow you can see the composite wave.\n");
printf("Please tell me the parameters you like.\n");
printf("Enter 2 Amplitudes（1<Amplitude<10）:\n");
scanf("%f %f",&Amp1,&Amp2);

if (Amp1<1 || Amp1>10 || Amp2 <1 || Amp2>10)

printf("Sorry,the amplitude is too large to show.\n"); 

else 
printf("Enter 2 angular velocities:\n");
scanf("%f %f",&omega1,&omega2);

printf("Enter 2 wave vectors:\n");
scanf("%f %f",&k1,&k2);
			
	float t_step = 0.01;	// set the time step
	
	
		int i, j;
	

		initgraph(800, 600); // gives the size of the screen
   
		float time; //give the value to time
		
		for(i = 0; i < 1000; i++) 
		{
            time = i * t_step;
			DrawWave(Amp1,Amp2, omega1,omega2, k1,k2, time);
			Sleep(1);
			cleardevice();
		}


}
