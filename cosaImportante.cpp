#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
  int  a(123456789);
  const  int NUM(4);

  cout << "\n Test the stream, the clear() and ignore()\n";
  cout << "Enter " << NUM << " integers:  ";
  for (int i=1; i<=NUM; i++)
  {
    while (!(cin >> a))   // While we have an error reading...
    {
      cin.clear();  // Remove the error state in stream
      cin.ignore(); // Read but ignore the next character
    }
    cout << "\t integer(" << i << ") was:  " << a << endl;
  }
  return 0;
}
