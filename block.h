#ifndef BLOCK_H
#define BLOCK_H

#include <allegro.h>
#include <string>
#include <time.h>

using namespace std;

class Block{

public:
  Block();
  ~Block();
  
  void SetImages( char image1[], char image2[]);
  
  int GetY();     
  int GetX();
  
  int GetType();
  
  bool GetSelected();
  bool GetFlaged();
  
  bool GetDead();
  
  BITMAP* GetImage();
  
  void draw(BITMAP* tempBitmap);
  void DrawNewSprite( BITMAP* tempBitmap, BITMAP* spriteToDraw);  
  
  void SetX( int newValue);
  void SetY( int newValue);
  
  void SetType(int newType); 
  void SetValue(int newValue);  
  
  void SetSelected(bool newSelected);
  void SetFlaged(bool newFlag);
  
  void Change();
        
private:
  
  int x;
  int y;
  
  int frame;
  int type;
  int value;
  
  bool selected;
  
  bool flaged;
  
  BITMAP *images[2][2]; 
 
  BITMAP *flag;
};

#endif

