#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int answer;

void draw_rect(int length, int width)
{
   for(int i=0;i<length;i++)
   {
       for(int j=0;j<width;j++)
       {
           cout<<"#";
       }
       cout<<endl;
   }
}

void draw_tria_a(string *out, int hei, int wid, bool ornament=false)
{
    for (int i=0; i<hei; i++)
   {
      for (int j=(wid-1); j>=(hei-i-1); j--)
         {
         out[i][j] = '#';

         // Add ornament
         if (ornament) {
         if (i % 4 == 0) {
             if (j%2 == 0) {
               out[i][j] = '$';
             }
         } else if (i%4 == 2)
         {
             if (j%4 == 0) {
               out[i][j] = '$';
             }
         }
         }


         }
   }
}

void draw_tria_b(string *out, int hei, int wid, bool ornament=false)
{
    for (int i=0; i<hei; i++)
    {
        for (int j=0; j<=i; j++)
        {
            out[i][j] = '#';

            // Add Ornament
            if (ornament) {
         if (i % 4 == 0) {
             if (j%5 == 0) {
               out[i][j] = '*';
             }
         } else if (i%4 == 2)
         {
             if (j%3 == 0) {
               out[i][j] = '%';
             }
         }
         }

        }
    }
}

void draw_tria_c(string *out, int hei, int wid)
{
   for (int i=0; i<hei; i++)
    {
        for (int j=i;j<wid; j++)
        {
            out[i][j] = '#';
        }
    }

}

void draw_tria_d(string *out, int hei, int wid)
{
   for (int i=0; i<hei; i++)
   {
      for (int j=0; j<(wid-i); j++)
         {
         out[i][j] = '#';
         }
   }
}


int exec()
{
   cout<<"What do you want to make?"<<endl;
   cout<<"1-rectangle"<<endl;
   cout<<"2-upright right angle triangle facing left"<<endl;
   cout<<"3-upright right angle triangle facing right"<<endl;
   cout<<"4-upside down right angle triangle facing left"<<endl;
   cout<<"5-upside down right angle triangle facing right"<<endl;
   cout<<"6-isosceles triangle"<<endl;
   cout<<"7-diamond"<<endl;
   cout<<"8-christmas tree"<<endl;
   cout<<"9-christmas tree w/ ornaments"<<endl;
   cout<<"10-exit."<<endl;
   cin>>answer;
    switch (answer) {
     case 1:
         {
       int length=21;
       int width=21;
       while (length>20)
       {
           cout<<"What do you want the length of your rectangle to be?"<<endl;
           cout<<"Please enter a number less than or equal to 20."<<endl;
           cin>>length;
       }
       while (width>20)
       {
           cout<<"What do you want the width of your rectangle to be?"<<endl;
           cout<<"Please enter a number less than or equal to 20."<<endl;
           cin>>width;
       }
       draw_rect(length, width);
         }
   break;

     case 2:
     case 3:
     case 4:
     case 5:
{
    int size=21;
    while (size>20)
    {
      cout<<"What do you want the base and height of your right angle triangle to be?"<<endl;
      cout<<"Please enter a number less than or equal to 20, and more than 1."<<endl;
      cin>>size;
    }
    int wid = size;
    int hei = size;
    string out[hei];
    for (int i=0; i < hei; i++) {
          out[i] = string(wid, ' ');
    }
    if (answer ==2)
        {draw_tria_a(out, hei, wid);
        }
    if (answer ==3)
        {draw_tria_b(out, hei, wid);
        }
    if (answer ==4)
        {draw_tria_c(out, hei, wid);
        }
    if (answer ==5)
        {draw_tria_d(out, hei, wid);
        }
        for (int i=0; i < hei; i++) {
                  cout<< out[i]<<endl;
        }
}
    break;

     case 6:
     {
    int hei=21;
    while (hei>20)
    {
      cout<<"What do you want the height of your iscoceles triangle to be?"<<endl;
      cout<<"Please enter a number less than or equal to 20, and more than 1."<<endl;
      cin>>hei;
    }
    hei--;
    int wid=hei;
    string outL[hei], outR[hei];
    for (int i=0; i < hei; i++) {
          outL[i] = string(wid, ' ');
          outR[i] = string(wid, ' ');
    }
    draw_tria_a(outL, hei, wid);
    draw_tria_b(outR, hei, wid);
    string line(wid, ' ');
    cout<<line<< "#"<<endl;
    for (int i=0; i < hei; i++) {
                  cout << outL[i]<< "#"<< outR[i]<<endl;
        }

        break;
     }

     case 7:
        {
    int hei=22;
    while (hei>20 || ((hei%2)==0))
    {
      cout<<"What do you want the height of your diamond to be?"<<endl;
      cout<<"Please enter an odd number less than or equal to 20, and more than 1."<<endl;
      cin>>hei;
    }
    hei = (hei+1)/2;
    hei--;
    int wid=hei;
    string outTL[hei], outTR[hei], outBL[hei], outBR[hei];
    for (int i=0; i < hei; i++) {
          outTL[i] = string(wid, ' ');
          outTR[i] = string(wid, ' ');
          outBL[i] = string(wid, ' ');
          outBR[i] = string(wid, ' ');
    }
    draw_tria_a(outTL, hei, wid);
    draw_tria_b(outTR, hei, wid);
    draw_tria_c(outBL, hei, wid);
    draw_tria_d(outBR, hei, wid);
    string line(wid, ' ');
    cout<<line<< "#"<<endl;
    for (int i=0; i < hei; i++) {
                  cout << outTL[i]<< "#"<< outTR[i]<<endl;
    }
    for (int i=1; i < hei; i++) {
                  cout << outBL[i]<< "#"<< outBR[i]<<endl;
        }
    cout<<line<< "#"<<endl;
        break;
        }

     case 8:
     case 9:
        {
    int hei=21;
    int heightOfTrunk=0;
    int widthOfTrunk=0;
    int maxWidth;
    while (hei>20)
    {
      cout<<"What do you want the height of your christmas to be?"<<endl;
      cout<<"Please enter a number less than or equal to 20, and more than 1."<<endl;
      cin>>hei;
      cout<<"What do you want the height of the trunk to be?"<<endl;
      cin>>heightOfTrunk;
    }
    maxWidth=(hei*2)-2;
    while ((widthOfTrunk==0) || (widthOfTrunk> maxWidth || (widthOfTrunk%2==0)))
    {
      cout<<"What do you want the width of the trunk to be?"<<endl;
      cout<<"Please enter an odd number less than "<<maxWidth<<"."<<endl;
      cin>>widthOfTrunk;
    }
    hei--;
    int wid=hei;
    string outL[hei], outR[hei];
    for (int i=0; i < hei; i++) {
          outL[i] = string(wid, ' ');
          outR[i] = string(wid, ' ');
    }
    draw_tria_a(outL, hei, wid, (answer==9));
    draw_tria_b(outR, hei, wid, (answer==9));
    string line(wid, ' ');
    cout<<line<< "#"<<endl;
    for (int i=0; i < hei; i++) {
                  cout << outL[i]<< "#"<< outR[i]<<endl;
        }
        string lineL(wid, ' ');
        string lineR(wid, ' ');
        int v=(widthOfTrunk-1)/2;
        for (int i=wid-v; i < wid; i++) {
            lineL[i] = '#';
        }
        for (int i=0; i < v; i++) {
            lineR[i] = '#';
        }

        for (int i=0; i<heightOfTrunk; i++)
        {cout<<lineL<< "#"<<lineR<<endl;
        }


        break;
     }

     case 10:
        return 0;
     default:
        cout<<"Not a valid answer."<<endl;
        break;
   }

   return 1;
}

int main() {
    int ret = 0;
    do {
      ret = exec();
      cout << endl;
    }
    while (ret>0);
    return 0;
}
