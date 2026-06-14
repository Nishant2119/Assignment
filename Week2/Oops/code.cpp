#include<iostream>
using namespace std;
class Playable
{
    public:
       virtual void play()=0;
};
class Veena:public Playable
{
   public:
   void play();
};
class Saxophone:public Playable
{
    public:
    void play();
};

int main()
{
   //Creating an instance of Veena class;
   cout<<"Instance of Veena class"<<endl;
   Veena myveena ;
   myveena.play();
   //Creating an instance of Saxophone class;
   cout<<"Instance of Saxophone class"<<endl;
   Saxophone myphone;
   myphone.play();
   //Creating an instance of Veena class through Playable class pointer.
   cout<<"Instance of Veena class through playable class pointer."<<endl;
   Playable* instrument = new Veena();
   instrument->play();
   //Creating an instance of Saxophone class through Playable class pointer.
  cout<<"Instance of  class through playable class pointer."<<endl;
  instrument = new Saxophone();
  instrument -> play();
}
void Veena:: play()
{
    cout<<"Veena is playing."<<endl;
}
void Saxophone::play()
{
    cout<<"Saxophone is playing"<<endl;
}