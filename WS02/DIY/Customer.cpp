#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;
#include "Customer.h"
#include "Tools.h"

namespace sdds {

    // complete

    void read(char* str, int len) {  // Fully provided
        if (cin.peek() == '\n') {
            cin.ignore();
        }
        cin.getline(str, len);
    }

    
    // complete
    void EmptyRecord(Customers &customer){
       customer.user_name[0] = '\0';
        customer.retweets_count = 0;
        customer.likes_count = 0;
        customer.replies_count = 0;
        customer.share_videos = '\0';
    }
    void EmptyRecord(CustomersRecord &records){
        records.ptr_rec = NULL;
        records.noOfRecords = 0;
    }


    bool read(Customers& rec){
        char user[20+1];
        cout << " Enter User name: ";
        read(user, 21);
        if(user[0] == '\0'){
            return false;
        }
        else{
            strCpy(rec.user_name, user);
        }
        cout << " Enter likes_count: ";
        cin >> rec.likes_count;
        cout << " Enter retweets_count: ";
        cin >> rec.retweets_count;
        cout << " Enter replies_count: ";
        cin >> rec.replies_count;
        cout << " Enter share videos (y/n): ";
        cin >> rec.share_videos;
        return true;
    }

    void addCustomer(CustomersRecord& t_rec, const Customers& c_rec) {
        t_rec.noOfRecords++;
        Customers *temp = new Customers[t_rec.noOfRecords];

        for (int i = 0; i < t_rec.noOfRecords - 1; i++) {
            temp[i] = t_rec.ptr_rec[i];
        }

        temp[t_rec.noOfRecords - 1] = c_rec;

        delete [] t_rec.ptr_rec;
        t_rec.ptr_rec = temp;
    }

    void display(const Customers& c_rec) {
        cout << c_rec.user_name << ", ";
        cout << c_rec.likes_count << ", ";
        cout << c_rec.retweets_count << ", ";
        cout << c_rec.replies_count << ", ";
        cout << c_rec.share_videos << endl;
    }

    void display(const CustomersRecord& t_rec) {
        for (int i = 0; i < t_rec.noOfRecords; i++) {
            cout << i + 1 << ". ";
            display(t_rec.ptr_rec[i]);
            cout << endl;
        }
    }

  }

