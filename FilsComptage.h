//
// Created by thibautgravey on 01/12/2019.
//

#ifndef TD3_FILSCOMPTAGE_H
#define TD3_FILSCOMPTAGE_H

#include <iostream>
#include "Comptage.h"

using namespace std;

class FilsComptage : public Comptage {
    public :


        FilsComptage(const FilsComptage & unFC)
        {
            cout << "const copie fc" << endl;
        }



        FilsComptage()
        {
            cout << "const fc" << endl;
        }

        virtual ~FilsComptage()
        {
            cout << "dest fc" << endl;
        }
};


#endif //TD3_FILSCOMPTAGE_H
