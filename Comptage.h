
//
// Created by thibautgravey on 01/12/2019.
//

#ifndef TD3_COMPTAGE_H
#define TD3_COMPTAGE_H

#include <iostream>;
using namespace std;

class Comptage {
    public :


        Comptage(const Comptage & unC)
        {
            cout << "const copie c" << endl;
            nbR++;
            numInstance=nbCreate;
            nbCreate++;
        }



        Comptage()
        {
            cout << "const c" << endl;
            nbR++;
            numInstance=nbCreate;
            nbCreate++;
        }

        virtual ~Comptage()
        {
            cout << "dest c" << endl;
            nbR--;
        }


        static int nbR;
        static int nbCreate;
        int numInstance;
};


#endif //TD3_COMPTAGE_H
