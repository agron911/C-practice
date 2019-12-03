//少考慮其他任意點
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    int a, ks, qs, qe;
    
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};
    string s;
    // cin.tie(0); 
    
    while (cin >> ks >> qs >> qe)
    {
        int Kmap[8][8] = {};
        int Qmap[8][8] = {};
        if (ks == qs)
        {
            printf("Illegal state");
        } 
        else
        {
            for (int i = 0; i < 4; i++)
            {
                int qx = qs % 8;
                int qy = qs / 8;
                int kx = ks % 8 + dx[i];
                int ky = ks / 8 + dy[i];
                if(kx>=8||kx<0||ky>=8||ky<0){
                }
                else{
                    Kmap[kx][ky]++;
                }
                
                // for (int q = 0; q < 4; q++)
                // {
                    for (int j = 0; j < 8; j++)
                    {
                        qx += dx[i];
                        qy += dy[i];
                        if((qx==(ks%8) && qy==(ks/8) )||qx>=8||qx<0||qy>=8||qy<0){
                            // map[qx][qy]=0;
                            break;
                        }
                        Qmap[qx][qy]++;

                    }
                // }
            }
            int qx = qs % 8;
            int qy = qs / 8;
            int kx = ks % 8;
            int ky = ks / 8;

            // if (qx == kx)
            // {
            //     if (qy > ky)
            //     {
            //         for (int i = ky; i >= 0; i--)
            //         {
            //             map[kx][i] = 0;
            //         }
            //     }
            //     else
            //     {
            //         for (int i = ky; i < 8; i++)
            //         {
            //             map[kx][i] = 0;
            //         }
            //     }
            // }
            // else if (qy == ky)
            // {
            //     if (qx > kx)
            //     {
            //         for (int i = kx; i >= 0; i--)
            //         {
            //             map[i][ky] = 0;
            //         }
            //     }
            //     else if (qx < kx)
            //     {
            //         for (int i = ky; i < 8; i++)
            //         {
            //             map[i][ky] = 0;
            //         }
            //     }
            // }
            int qex = qe % 8;
            int qey = qe / 8;
            if ((qe==9&&ks==0)||(qe==14&&ks==7)||(qe==49&&ks==56)||(qe==54&&ks==63))
            {
                printf("Stop\n");
            }
            else
            {
                if (Qmap[qex][qey] == 0)
                    printf("Illegal move\n");
                else if (Qmap[qex][qey]==1&&Kmap[qex][qey]==1)
                    printf("Move not allowed\n");
                else 
                {
                    printf("continue\n");
                }
            }
        }
    }
}