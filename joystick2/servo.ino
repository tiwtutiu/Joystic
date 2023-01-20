void test_sv()//stop
{
  int k;
    k=map (knob(),80,1023,0,180);
//    glcdClear();
    glcd(0,1,"i=%d",k);
    servo(0,k);
    sleep(0.1);
}
void wang()
{
  if(sv1>=130){           //เงื่อนไขก่อนสโลว
    if(sv1<170){
      servo(1,sv1);
      sv1=sv1+2;
      }
    else{
      sv1=170;              //แขนเหยีดสุด
      servo(1,sv1);
      }
    }
    else{
      sv1=130;              //ก่อนสโลว
      servo(1,sv1);
      }
}

void yok()
{
 sv1=90;
 servo(1,sv1);
}
