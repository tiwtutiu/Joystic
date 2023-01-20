int m1 = 80;
int m2 = 80;
int m1sl = 10;
int m2sl = 10;
  //motor 1=ขวา
  //motor 2=:ซ้าย

void ff()//forward
{
  motor(1,m1);
  motor(2,m2);
  //sleep(0.1);
}
void fdslow()//forward
{
  motor(1,m1sl);
  motor(2,m2sl);
  //sleep(0.1);
}
void bbslow()//forward
{
  motor(1,-m1sl);
  motor(2,-m2sl);
  //sleep(0.1);
}
void trslow()//turnleft
{
  motor(1,20); //มอเตอร์ขวา
  motor(2,-20);//มอเตอร์ซ้าย
 // sleep(0.1);
}
void tlslow()//turnleft
{
  motor(1,-20);
  motor(2,20);
 // sleep(0.1);
}
void bb()//backward
{
  motor(1,-m1);
  motor(2,-m2);
 // sleep(0.1);
}
void ttl()//turnleft
{
  motor(1,-50);
  motor(2,50);
 // sleep(0.1);
}
void ttr()//turnright
{
  motor(1,50);
  motor(2,-50);
 // sleep(0.1);
}
void ss()//stop
{
  motor(1,0);
  motor(2,0);
 // sleep(0.1);
}
