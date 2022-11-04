#include <iostream>
#include <cstdlib>
#include "equal-paths.h"
//#include "equal-paths.h"
using namespace std;


Node* a;
Node* b;
Node* c;
Node* d;
Node* e;
Node* f;
Node* g;

void setNode(Node* n, int key, Node* left=NULL, Node* right=NULL)
{
  n->key = key;
  n->left = left;
  n->right = right;
}

void test1(const char* msg)
{
  setNode(a,1,NULL, NULL);
  cout << msg << ": " <<   equalPaths(a) << endl;
}

void test2(const char* msg)
{
  setNode(a,1,b,NULL);
  setNode(b,2,NULL,NULL);
  cout << msg << ": " <<   equalPaths(a) << endl;
}

void test3(const char* msg)
{
  setNode(a,1,b,c);
  setNode(b,2,NULL,NULL);
  setNode(c,3,NULL,NULL);
  cout << msg << ": " <<   equalPaths(a) << endl;
}

void test4(const char* msg)
{
  setNode(a,1,NULL,c);
  setNode(c,3,NULL,NULL);
  cout << msg << ": " <<   equalPaths(a) << endl;
}

void test5(const char* msg)
{
  setNode(a,1,b,c);
  setNode(b,2,NULL,d);
  setNode(c,3,NULL,NULL);
  setNode(d,4,NULL,NULL);
  cout << msg << ": " <<   equalPaths(a) << endl;
}
/*
//Node* n, int key, Node* left=NULL, Node* right=NULL
void test6(const char* msg)
{
  setNode(a,5,b,c);
  setNode(b,1,d,e);
  setNode(c,8,NULL,NULL);
  setNode(d,0,NULL,NULL);
	setNode(e,4,NULL,NULL);
  cout << msg << ": " <<   equalPaths(a) << endl;
}//needs to return false ==> 0

void test7(const char* msg)
{
  setNode(a,5,b,c);
  setNode(b,1,d,e);
  setNode(c,8,f,NULL);
  setNode(d,0,NULL,NULL);
	setNode(e,4,NULL,NULL);
	setNode(f,7,NULL,NULL);
  cout << msg << ": " <<   equalPaths(a) << endl;
}//needs to retrurn true --> 1

void test8(const char* msg)
{
  setNode(a,5,b,c);
  setNode(b,1,d,e);
  setNode(c,8,f,NULL);
  setNode(d,0,NULL,NULL);
	setNode(e,4,f,NULL);
	setNode(f,7,NULL,NULL);
	setNode(g, 2,NULL,NULL);
  cout << msg << ": " <<   equalPaths(a) << endl;
}//needs to retrurn false --> 0

void test9(const char* msg){
	setNode(a,5,b,c);
  setNode(b,1,d,NULL);
  setNode(c,8,e,NULL);
  setNode(d,0,NULL,NULL);
	setNode(e,7, NULL,NULL);
	cout << msg << ": " <<   equalPaths(a) << endl;
}//needs to return true-->1
*/
//Tests 6-9 were based on the examples provided in problem 2. I tested this for my own understanding and to check that my code.
int main()
{
  a = new Node(1);
  b = new Node(2);
  c = new Node(3);
  d = new Node(4);
	//Nodes for tests 6-9
	// a = new Node(5);
  // b = new Node(1);
  // c = new Node(8);
  // d = new Node(0);
	// e = new Node(4);
	// f = new Node (7);
	// g= new Node (2);

  test1("Test1");
  test2("Test2");
  test3("Test3");
  test4("Test4");
  test5("Test5");
	// test6("Test6");
	// test7("Test7");
	// test8("Test8");
	// test9("Test9");
 
  delete a;
  delete b;
  delete c;
  delete d;
	// delete e;
	// delete f;
	// delete g;
}

