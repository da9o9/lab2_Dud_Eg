
#include <iostream>
#include <math.h>





using namespace std;

 int perv_a()
 {
 int x, y ,z, ch = 0;
 cin >> x >> y >> z;
 if((x % 2 != 0) and (y % 2 != 0))
 {
 ch = 1;
 }
 return ch;
 }
 
 int perv_b()
 {
 int x, y ,z, ch = 0;
 cin >> x >> y >> z;
 if((x < 20) or (y < 20))
 {
 ch = 1;
 }
 return ch;
 
 }
 int perv_c()
 {
 int x, y ,z, ch = 0;
 cin >> x >> y >> z;
 if((x == 0) or (y == 0) or ((x == 0) and (y == 0)))
 {
 ch = 1;
 }
 return ch;
 
 }
 int perv_d()
 {
 int x, y ,z, ch = 0;
 cin >> x >> y >> z;
 if((x < 0) and (y < 0) and (z < 0))
 {
 ch = 1;
 }
 return ch;
 
 }
 int perv_e()
 {
 int x, y ,z, ch = 0;
 cin >> x >> y >> z;
 if(((x % 5 == 0) and (y % 5 != 0) and (z % 5 != 0)) or ((y % 5 == 0) and (x % 5 != 0) and (z % 5 != 0)) or ((z % 5 == 0) and (x % 5 != 0) and (y % 5 != 0)))
 {
 ch = 1;
 }
 return ch;
 }
 int perv_f()
 {
 int x, y ,z, ch = 0;
 cin >> x >> y >> z;
 if((x > 100) or (y > 100) or (z > 100) or ((x > 100) and (y > 100)) or ((x > 100) and (z > 100)) or ((y > 100) and (z > 100)) or ((x > 100) and (y > 100) and z > 100))
 {
 ch = 1;
 }
 return ch;
 
 }
 int vtor_a()
 {
 int x1, y1, x2, y2, ch = 0, n;
 cin >> x1 >> y1 >> x2 >> y2;
 int Pl1[2], Pl2[2];
 Pl1[0] = x1;
 Pl1[1] = y1;
 Pl2[0] = x2;
 Pl2[1] = y2;
 if((Pl1[0] ==  Pl2[0]) or (Pl1[1] == Pl2[1]))
 {
 ch = 1;
 }
 return ch;
 }
 int vtor_b()
 {
 int x1, y1, x2, y2, ch = 0, n;
 cin >> x1 >> y1 >> x2 >> y2;
 int Pl1[2], Pl2[2];
 Pl1[0] = x1;
 Pl1[1] = y1;
 Pl2[0] = x2;
 Pl2[1] = y2;
 if(abs(Pl1[0] - Pl2[0]) == abs(Pl1[1] - Pl2[1]))
 {
 ch = 1;
 }
 return ch;
 }
 int vtor_c()
 {
 int x1, y1, x2, y2, ch = 0, n;
 cin >> x1 >> y1 >> x2 >> y2;
 int Pl1[2], Pl2[2];
 Pl1[0] = x1;
 Pl1[1] = y1;
 Pl2[0] = x2;
 Pl2[1] = y2;
 if((abs(Pl1[0] - Pl2[0]) == 1) or (abs(Pl1[1] - Pl2[1]) == 1) or ((abs(Pl1[0] - Pl2[0]) == 1) and (abs(Pl1[1] - Pl2[1]) == 1)))
 {
 ch = 1;
 }
 return ch;
 }
 int vtor_d()
 {
 int x1, y1, x2, y2, ch = 0, n;
 cin >> x1 >> y1 >> x2 >> y2;
 int Pl1[2], Pl2[2];
 Pl1[0] = x1;
 Pl1[1] = y1;
 Pl2[0] = x2;
 Pl2[1] = y2;
 if((Pl1[0] ==  Pl2[0]) or (Pl1[1] == Pl2[1]) or (abs(Pl1[0] - Pl2[0]) == abs(Pl1[1] - Pl2[1])))
 {
 ch = 1;
 }
 return ch;
 }
 int vtor_e()
 {
 int x1, y1, x2, y2, ch = 0, n;
 cin >> x1 >> y1 >> x2 >> y2;
 int Pl1[2], Pl2[2];
 Pl1[0] = x1;
 Pl1[1] = y1;
 Pl2[0] = x2;
 Pl2[1] = y2;
 if((abs(Pl1[0] - Pl2[0]) == 1) and (Pl2[1] - Pl1[1] == 1))
 {
 ch = 1;
 }
 return ch;
 }
 int tret_a()
 {
 for(int i = 1; i < 10; i++)
 {
 cout << i * 7 << endl;
 }
 return 0;
 }
 
 int main()
 {
 int z;
 cout << "Vedite nomer zadachi:" << endl;
 cin >> z;
 if(z <= 11)
 {
     cout << "Vedite znachenie:" << endl;
     if(z == 1)
     {
         if(perv_a())
         {
             cout << "condition is true" << endl;
         }
         else
         {
             cout << "condition is false" << endl;
         }
         return 0;
     }
     if(z == 2)
     {
         if(perv_b())
         {
             cout << "condition is true" << endl;
         }
         else
         {
             cout << "condition is false" << endl;
         }
         return 0;
     }
     if(z == 3)
     {
         if(perv_c())
         {
             cout << "condition is true" << endl;
         }
         else
         {
             cout << "condition is false" << endl;
         }
         return 0;
     }
     if(z == 4)
     {
         if(perv_d())
         {
             cout << "condition is true" << endl;
         }
         else
         {
             cout << "condition is false" << endl;
         }
         return 0;
     }
     if(z == 5)
     {
         if(perv_e())
         {
             cout << "condition is true" << endl;
         }
         else
         {
             cout << "condition is false" << endl;
         }
         return 0;
     }
     if(z == 6)
     {
         if(perv_f())
         {
             cout << "condition is true" << endl;
         }
         else
         {
             cout << "condition is false" << endl;
         }
         return 0;
     }
     if(z == 7)
     {
         if(vtor_a())
         {
             cout << "condition is true" << endl;
         }
         else
         {
             cout << "condition is false" << endl;
         }
         return 0;
     }
     if(z == 8)
     {
         if(vtor_b())
         {
             cout << "condition is true" << endl;
         }
         else
         {
             cout << "condition is false" << endl;
         }
         return 0;
     }
     if(z == 9)
     {
         if(vtor_c())
         {
             cout << "condition is true" << endl;
         }
         else
         {
             cout << "condition is false" << endl;
         }
         return 0;
     }
     if(z == 10)
     {
         if(vtor_d())
         {
             cout << "condition is true" << endl;
         }
         else
         {
             cout << "condition is false" << endl;
         }
         return 0;
     }
     if(z == 11)
     {
         if(vtor_e())
         {
             cout << "condition is true" << endl;
         }
         else
         {
             cout << "condition is false" << endl;
         }
         return 0;
     }
 }
else
     {
         if(z == 12)
         {
             for(int i = 1; i < 10; i++)
             {
                 cout << i * 7 << endl;
             }
             return 0;
         }
         if(z == 13)
         {
             int N;
             cout << "Vedite znachenie:" << endl;
             cin >> N;
             for(int i = 1; i < 10; i++)
             {
             cout << N * i << endl;
             }
             return 0;
         }
         if(z == 14)
         {
             int a = 8;
             for(int i = 9; i <= 15; ++i)
             {
                 a *= i;
             }
             cout << a << endl;
             return 0;
         }
         if(z == 15)
         {
             long long a;
             cout << "Vedite znachenie:" << endl;
             cin >> a;
             for(long long i = a + 1; i <= 20; ++i)
             {
                 a *= i;
             }
             cout << a << endl;
             return 0;
         }
         if(z == 16)
         {
             long long a = 1;
             int b;
             cout << "Vedite znachenie:" << endl;
             cin >> b;
             for(int i = 2; i <= b; ++i)
             {
                 a *= i;
             }
             cout << a << endl;
             return 0;
         }
         if(z == 17)
         {
             int b;
             long long a;
             cout << "Vedite znachenie:" << endl;
             cin >> a >> b;
             for(long long i = a + 1; i <= b; ++i)
             {
                 a *= i;
             }
             cout << a << endl;
             return 0;
         }
         
     }
 
 }

