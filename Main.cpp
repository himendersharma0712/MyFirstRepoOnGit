#include <iostream>
#include <vector>
#include <cstring>
#include<string>
#include<cctype>
#include <iomanip>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;


class pen
{
   bool IsRefillable{false};
   float price{};
   int colors_available{};
   string Name{};

public:

void Set_attrib(bool,float,int,string);

void Display_attrib(void);

};

class pen* Pen;  // created a class pointer which can store address of an object of that class type


vector<int> list;
char choice{};

void Quit();

void Display_Scr();
void Main_algorithm();

void Random_numbers(){

int random_num{};
size_t count {10};
int min {1};
int max{10};

cout<< "Rand max is : " <<RAND_MAX;

srand(time(nullptr));

for(size_t i{1}; i<= count; ++i)
{
  random_num = rand() % max + min;
  cout << random_num << endl;
}

}

void Encryptor_Decryptor()
{

std::string Alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
std::string Code     {"poiuytrewqasdfghjklmnbvcxz<>?;/ABCEFG+IJK-_MNO*QRSTU"};
std::string encrypted_msg;
std::string decrypted_msg;
std::string Message{};

// Encryption
cout << "Enter message to be encrypted: ";
getline(cin,Message);

for(char c: Message)
{
  size_t position = Alphabet.find(c);
  if(position!= std::string::npos)
  {
    char new_char{Code.at(position)};
    encrypted_msg += new_char;
  }
  else{
    encrypted_msg += c;
  }
}

cout << "Encrypted text is : " << encrypted_msg<<endl<<endl;


// Decryption
cout<< "Enter text to decrypt: ";
std::string encrypted_msg_entered;
getline(cin,encrypted_msg_entered);

for(char c: encrypted_msg_entered)
{
  size_t position = Code.find(c);
  if(position != std::string::npos)
  {
    char new_char{Alphabet.at(position)};
    decrypted_msg += new_char;
  }
  else{
    decrypted_msg +=c;
  }
}

cout<< decrypted_msg;


}

void vector_based_number_storage(){


std::vector<int> list;

char choice{};

do{
cout<< "\nP - Print numbers" <<endl;
cout<< "A - Add a number " <<endl;
cout<< "M - Display mean of the numbers" <<endl;
cout<< "S - Display the smallest number" <<endl;
cout<< "L - Display the largest number" <<endl;
cout<< "Q - Quit" <<endl <<endl;

cout << "Enter choice: ";
cin >> choice;

if(choice != 'P' && choice != 'A' && choice != 'M' && choice != 'S' && choice != 'L' && choice != 'Q' && 
choice != 'p' && choice != 'a' && choice != 'm' && choice != 's' && choice != 'l' && choice != 'q')
{
  cout<< "Invalid choice, try again!"<< endl << endl ;
}



if( choice == 'a' || choice == 'A')
{
  int Num_added{};
  int No_of_numbers_to_be_added{};
  cout << "How many numbers do you wanna add to the database (must be atleast 2 for finding mean) ?  ";
  cin >> No_of_numbers_to_be_added;
  for(int i = 0; i < No_of_numbers_to_be_added; i++)
  {
  cout << "Enter no : ";
  cin >> Num_added;
  list.push_back(Num_added);
  }
}



if( choice == 'p' || choice == 'P')
{
if(list.size() != 0){
  cout<< "\nThe Numbers that were added are : ";

  for(auto element : list )
       cout << element << " ";
  
  cout << endl <<endl <<endl;
}

else{
  cout << "No numbers to display , try adding some numbers first!" << endl <<endl;
}

}

else if( choice == 'm' || choice == 'M')
{

  if(list.size() != 0){
   double Sum_of_num{0};
   for (int i  {0}; i < list.size(); i++)
   {
      Sum_of_num += list.at(i);
   }

   double AM = Sum_of_num / list.size() ;
   cout << "Mean of the numbers is " << AM << endl <<endl <<endl;
  }

  else{
    cout << "Have some sense to add some numbers before trying to find their mean !" << endl <<endl ;
      }

}


else if (choice == 's' || choice == 'S')
{
  if(list.size()==0)
  {
    cout << " List is empty, try adding numbers first..." << endl;
  }
  
  else{
    int smallest = list.at(0);
    for(auto num : list)
    {
      if(num <smallest)
      {
        smallest = num;
      }
    }
      cout << "The smallest number is " << smallest <<endl;
    
  }
}


else if (choice == 'l' || choice == 'L')
{
  if(list.size()==0)
  {
    cout << " List is empty, try adding numbers first..." << endl;
  }
  
  else{
    int largest = list.at(0);
    for(auto num : list)
    {
      if(num > largest)
      {
        largest = num;
      }
    }
      cout << "The largest number is " << largest <<endl;
    
  }
}
}while(choice != 'q' && choice != 'Q');

}

void swap(int* a , int* b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}



enum Fruit {
 Apple,
 Banana,
 Orange,
 Mango,
 Strawberry,
 Peach
};


void Set_my_string_vector_elements_to_NULL(std::vector <std::string> &names) // can add const keyword before vector to avoid changes
{
  for (size_t i{0}; i < names.size(); i++)
  {
    names[i] = " ";
  }
}
void print_array(int arr[],size_t size);
void set_array(int arr[],size_t size, int value);
void pass_by_ref(int &num)
{
  num = 200;
}


unsigned long long factorial_function_recursion_example(unsigned long long n)
{
 if(n != 0)
 {
  return n * factorial_function_recursion_example(n-1); // notice how we called the function within itself!!
 }
 else{
  return 1;
 }
}

int sum_of_digits(int n) {    // recursion to find sum of digits
    // Write your code below this line
    
    if(n==0)
       return 0;
    return(n%10 + sum_of_digits(n/10));
    
    
    // Write your code above this line
}


void double_the_value(int* ptr_int);

int main()
{

// vector_based_number_storage();

cout<< std::boolalpha;    // for displaying true and false 

/*int my_scores[] {100,98,90,89,80};

print_array(my_scores,5); // my_scores is an address name for an address in memory and when we pass
                          // an array to a function we pass this address hence changes to original array are made

set_array(my_scores,5,100);

print_array(my_scores,5);
*/

int Number{100};
int Number2{200};
int Number3{200};

//cout << "This number is " << Number << " right now " << endl;

//pass_by_ref(Number);  // address of Number is taken and used for assignment inside the function

// cout << "This number is " << Number << " now.. ";


// Imma try this with a vector 

/*std::vector <std::string> Names {"Steven","Franklin","Max"};

for(auto c: Names )
{
  cout << c << endl;
}

Set_my_string_vector_elements_to_NULL(Names);

for(auto c: Names )
{
  cout << c << endl;
}
*/





/************************************************NEW CODE**************************************************/


// Display_Scr();
// Main_algorithm();



/***** POINTERS*******
 * 
 *
 * 
 * 
 * 
int num{10};
int* ptr_to_num{&num};
cout << ptr_to_num << endl;

ptr_to_num = nullptr;

cout<< ptr_to_num << endl;

cout << sizeof(ptr_to_num) << endl;

std::vector <int>* vector_ptr {&list};

cout << vector_ptr;             *******/






/* ********** practice*****makes*****Purrrfect!!**

int showme{999};
int* ptr_showme{&showme};

cout << *ptr_showme << endl ;

*ptr_showme = 1000;

cout << *ptr_showme << endl;

cout << ptr_showme;

******************************/
/*****************************
vector <string> Names {"Max","Martha","Bill"};

vector <string>* Names_ptr{&Names};

for(int c{0}; c < 3; c++)
{
cout << "Name: " << (*Names_ptr).at(c) << endl;

}
******************************/
/*Dynamic Memory Allocation ********************


int* age_ptr{nullptr};

age_ptr = new int; // storage is allocated for this int on the heap


cout << age_ptr << endl;

cout << *age_ptr <<endl;

*age_ptr = 18;

cout << *age_ptr;

delete age_ptr; // to deallocate the memory allocated to age_ptr */

//---------------------------------------------
/* Array Pointers ----Dynamic Allocation Example
double* temp_ptr{nullptr};
size_t size;
cout << "How many temps? ";
cin >> size;

temp_ptr = new double[size];

cout << temp_ptr;

temp_ptr = nullptr;

delete [] temp_ptr;
*****************************************/
/*
int scores[] {100,99,98};  // name of the array is the address of the first element
cout << scores << endl;   // displays address of the first element in array
cout << *scores << endl;  // displays the val of the first element in array

int* score_ptr{scores};
cout << score_ptr[0] << endl;
cout << score_ptr[1] << endl;

cout << *score_ptr << endl;
cout << *(score_ptr + 1) << endl;
cout << *(score_ptr + 2) << endl;
cout << *(score_ptr + 1) << endl;

***********************************************/

/**************************Pointer Arithmetic
 
int marks[]{100,99,80,90,0};
int *marks_ptr{marks};

while(*marks_ptr != 0)
  {
  cout << *marks_ptr << endl;
  marks_ptr++;
  }



marks_ptr = marks;
while(*marks_ptr != 0)
  {
  cout << *marks_ptr++ << endl; // another way to do the above task
  }


*********************************************/
/*************************************************** 
int high_value{100};
int low_value{10};

const int* score_ptr{&high_value}; // pointer to const int so the value at the address cannot be changed
// *score_ptr = 90; // gives an error
score_ptr = &low_value; // No problem here

int* const score_ptr_constant{&high_value};   // A constant pointer 
                                              // cannot assign another address to it
// score_ptr_constant = &low_value;  // GIVES AN ERROR


// constant pointer to a constant data type
const int * const score_ptr_const_const{&high_value};


*****************************************************/

/**************************************
int value{10};
int* int_ptr{nullptr};

double_the_value(&value);
cout << value << endl;

cout << "------------------------" << endl <<  endl;

int_ptr = &value;
double_the_value(int_ptr);  // 20 * 2
double_the_value(int_ptr);  // 40 * 2
double_the_value(int_ptr);  // 80 * 2
cout << value << endl;

****** */
/********************************** 
int num1{100};
int num2{200};

cout << num1 << "  " << num2 << endl;


swap(&num1,&num2);

cout << num1 << "  " << num2 << endl;
************************************/

pen Trimax; // created an object of class pen

Pen = &Trimax; // assigned the address of the object Trimax to the class pointer of the same class 

Pen->Set_attrib(true,50.0,3,"Trimax"); // accessed function of the class pen to set attributes for Trimax

Pen->Display_attrib(); // accessed function of the class pen to display attributes for Trimax















}

void print_array(int arr[], size_t size)
{
  for(size_t i{0};i < size; ++i)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void set_array(int arr[], size_t size, int value)
{
  for(size_t i{0};i < size; ++i)
  {
    arr[i] = value;
  }
}

void double_the_value(int* ptr_int)
{
  *ptr_int *= 2;
}




void Display_Scr(){
cout<< "\nP - Print numbers" <<endl;
cout<< "A - Add a number " <<endl;
cout<< "M - Display mean of the numbers" <<endl;
cout<< "S - Display the smallest number" <<endl;
cout<< "L - Display the largest number" <<endl;
cout<< "Q - Quit" <<endl <<endl;



cout << "Enter choice: ";

cin >> choice;

choice = toupper(choice);

Main_algorithm();

}
void Main_algorithm(){
  
if(choice != 'P' && choice != 'A' && choice != 'M' && choice != 'S' && choice != 'L' && choice != 'Q')
{
  cout<< "Invalid choice, try again!"<< endl << endl ;
}



if(choice == 'A')
{
  int Num_added{};
  int No_of_numbers_to_be_added{};
  cout << "How many numbers do you wanna add to the database (must be atleast 2 for finding mean) ?  ";
  cin >> No_of_numbers_to_be_added;
  for(int i = 0; i < No_of_numbers_to_be_added; i++)
  {
  cout << "Enter no : ";
  cin >> Num_added;
  list.push_back(Num_added);
  }
}



if( choice == 'P')
{
if(list.size() != 0){
  cout<< "\nThe Numbers that were added are : ";

  for(auto element : list )
       cout << element << " ";
  
  cout << endl <<endl <<endl;
}

else{
  cout << "No numbers to display , try adding some numbers first!" << endl <<endl;
}

}

else if( choice == 'M')
{

  if(list.size() != 0){
   double Sum_of_num{0};
   for (int i  {0}; i < list.size(); i++)
   {
      Sum_of_num += list.at(i);
   }

   double AM = Sum_of_num / list.size() ;
   cout << "Mean of the numbers is " << AM << endl <<endl <<endl;
  }

  else{
    cout << "Have some sense to add some numbers before trying to find their mean !" << endl <<endl ;
      }

}


else if (choice == 'S')
{
  if(list.size()==0)
  {
    cout << " List is empty, try adding numbers first..." << endl;
  }
  
  else{
    int smallest = list.at(0);
    for(auto num : list)
    {
      if(num <smallest)
      {
        smallest = num;
      }
    }
      cout << "The smallest number is " << smallest <<endl;
    
  }
}


else if (choice == 'L')
{
  if(list.size()==0)
  {
    cout << " List is empty, try adding numbers first..." << endl;
  }
  
  else{
    int largest = list.at(0);
    for(auto num : list)
    {
      if(num > largest)
      {
        largest = num;
      }
    }
      cout << "The largest number is " << largest <<endl;
    
  }
}


if(choice == 'Q')
{
    exit(0);
}



Display_Scr();





}


void pen::Set_attrib(bool refillable, float price_of_pen, int colors , string Name_pen)
{
  IsRefillable = refillable;
  price = price_of_pen;
  colors_available = colors;
  Name = Name_pen;

}

void pen::Display_attrib()
{
   cout << "Name: " << Name << endl;
   cout << "Price: " << price << endl;
   cout << "Colors available: " <<colors_available << endl;
   if(IsRefillable)
   {
    cout << "This pen is refillable.";
   }
   else{
    cout << "This pen is not refillable.";
   }
}
