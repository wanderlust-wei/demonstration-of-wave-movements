
#include"draw.h"


// calculat the coodinat of each point
void DrawWave(float Amp1,float Amp2, float omega1,float omega2, float k1,float k2, float time)
{
	int i;
  float x, y1,y2,y,f1,f2;


	setbkcolor(BLACK);
	for (i=0;i<10000;i++)
	{
		x=0.1*i;      // abscissas of points,0.1 makes them more compact
    y1 = 300+20*Amp1 * cos((omega1 *57.296)* time - 0.02*k1* x);			// the 1st wave's ordinate 57.296=180/3.14,0.02 makes 
y2= 300+20*Amp2 * cos(omega2 *57.296* time - 0.02*k2* x); // the 2nd wave's ordinate 

y=300+20*(Amp1+Amp2)*cos(0.5*(omega1+omega2)*time*57.296-0.5*0.02*(k1+k2)*x)*cos(0.5*(omega1-omega2)*time*57.296-0.5*0.02*(k1-k2)*x)
-20*(Amp1-Amp2)*sin(0.5*(omega1+omega2)*time*57.296-0.5*0.02*(k1+k2)*x)*sin(0.5*(omega1-omega2)*time*57.296-0.5*0.02*(k1-k2)*x);
//calculate the composite wave's ordinate

setcolor(WHITE);
line(0, 300, 1000, 300);					//draw the x-axis
    
setcolor(YELLOW);   //draw the 1st wave
circle((int) floor(x), (int) floor(y1), 1);	

setcolor(BLUE);
circle((int) floor(x), (int) floor(y2), 1);  //draw the 2nd wave

setcolor(RED);  //draw the composite wave
circle((int) floor(x), (int) floor(y), 1);	
				
  }
}

