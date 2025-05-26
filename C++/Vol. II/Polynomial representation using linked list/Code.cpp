//Q. Polynomial representation using linked list.

#include <iostream>
using namespace std;

// Define the structure of a term in the polynomial
struct Term {
    int coeff;    // Coefficient of the term
    int exp;      // Exponent of the term
    Term* next;   // Pointer to the next term

    // Constructor to initialize a term
    Term(int c, int e) {
        coeff = c;
        exp = e;
        next = nullptr;
    }
};

class Polynomial {
private:
    Term* head;  // Head of the linked list

public:
    // Constructor to initialize an empty polynomial
    Polynomial() {
        head = nullptr;
    }


    // Function to insert a term into the polynomial
    void insertTerm(int coeff, int exp) {
        Term* newTerm = new Term(coeff, exp);

        // If the list is empty or the new term has a higher exponent
        if (head == nullptr || head->exp < exp) {
            newTerm->next = head;
            head = newTerm;
        } else {
            Term* temp = head;
            // Traverse to find the correct position for the term
            while (temp->next != nullptr && temp->next->exp > exp) {
                temp = temp->next;
            }
            // If a term with the same exponent exists, add the coefficients
            if (temp->next != nullptr && temp->next->exp == exp) {
                temp->next->coeff += coeff;
                delete newTerm;
            } else {
                newTerm->next = temp->next;
                temp->next = newTerm;
            }
        }
    }

    // Function to display the polynomial
    void display() {
        if (head == nullptr) {
            cout << "Polynomial is empty." << endl;
            return;
        }

        Term* temp = head;
        while (temp != nullptr) {
            if (temp->coeff > 0 && temp != head)
                cout << "+";

            cout << temp->coeff << "x^" << temp->exp << " ";
            temp = temp->next;
        }
        cout << endl;
    }

     // Function to add two polynomials
    Polynomial add(Polynomial& other) {
        Polynomial result;
        Term* t1 = head;
        Term* t2 = other.head;

        // Traverse both polynomials and add terms
        while (t1 != nullptr && t2 != nullptr) {
            if (t1->exp > t2->exp) {
                result.insertTerm(t1->coeff, t1->exp);
                t1 = t1->next;
            } else if (t1->exp < t2->exp) {
                result.insertTerm(t2->coeff, t2->exp);
                t2 = t2->next;
            } else {
                int coeffSum = t1->coeff + t2->coeff;
                if (coeffSum != 0)
                    result.insertTerm(coeffSum, t1->exp);
                t1 = t1->next;
                t2 = t2->next;
            }
        }

     // Insert remaining terms from t1
        while (t1 != nullptr) {
            result.insertTerm(t1->coeff, t1->exp);
            t1 = t1->next;
        }

        // Insert remaining terms from t2
        while (t2 != nullptr) {
            result.insertTerm(t2->coeff, t2->exp);
            t2 = t2->next;
        }

        return result;
    }

    // Destructor to free memory
    Polynomial() {
        Term* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};
