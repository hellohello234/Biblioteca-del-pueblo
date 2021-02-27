#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> x(5);
    vector <int> s(5);

    //  Para inicar el vector en 0
    // x.clear();

    //for(int i=0;i<5;i++){
      //  cout<<x[i]<<"\n";
    //}

    // insert

    /* ------------------------------------------------------------------- */
    // ESO FOR SON LA PARTE PRINCIPAL DEL PROGRAMA ESO SIRVE PA' TO'
    for(int i=0;i<5;i++){
        x[i]=i+1;
    }

    for(int i=0;i<5;i++){
        s[i]=(i+1)*-1;
    }
    /* ---------------------------------------------------------------------- */

    //x.insert(x. begin () , 2, 159);

    //for(int i=0;i<x.size();i++){
      //  cout<<x[i]<<" ";
    // }

    // Erase

    //x. erase (x. begin ()+3,x.begin()+5);

    // for(int i=0;i<x.size();i++){
       // cout<<x[i]<<" ";
    //}

    // .push_back(valor)
        //x.push_back(10);

//    for(int i=0;i<x.size();i++){
  //      cout<<x[i]<<" ";
    //}

    // .pop_back()

//    x.pop_back();
//
 //    for(int i=0;i<x.size();i++){
   //     cout<<x[i]<<" ";
   // }

   // .resize()
    // Opcion A
   //x. resize (4);

     // for(int i=0;i<x.size();i++){
       // cout<<x[i]<<" ";
    //}

    // .resize()
       /// Opcion B

      //x. resize (7);

     // for(int i=0;i<x.size();i++){
       // cout<<x[i]<<" ";
    //}

    //.swap(vec)

    x. swap (s);

    for(int i=0;i<x.size();i++){
        cout<<x[i]<<" "<<s[i]<<"\n";
    }



}
