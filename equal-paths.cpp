#include "equal-paths.h"
#include <cmath>
using namespace std;
#include <iostream>

// You may add any prototypes of helper functions here

//need to check the size of the path
//if the depth is the same for the left and the right side-> then return true
//else return false
//need to recurse both the left and the right paths for this to work
//it also needs to be recursive

int CalculatingTheDepth(Node * root){
    
		int depth=0; //initializing depth to 0.
    if(root == NULL){return depth;} //base case (based on recursion lecture slides)
		depth+=1;
		//need to traverse both the left and right subtrees. I determined to focus on travesing just the left subtree and keeping the right subtree as an edge case (where a left node has a right subtree)
		if(root->right!=NULL){
			return depth+CalculatingTheDepth(root->right);
		}
		return depth + CalculatingTheDepth(root->left);
		//code that actually worked for me the first time (except for one of the edge cases)
		/*
		when depth = 0;
		depth +=1;
		return depth + CalculatingTheDepth(root->left);
		*/
		
		// CalculatingTheDepth(root->left);
		// CalculatingTheDepth(root->right);
		// return depth;
		// if(root->left!=NULL){
		// 	return depth + CalculatingTheDepth(root->left);
		// }else{
		// 	return depth + CalculatingTheDepth(root->right);
		// }
		
    
}

bool equalPaths(Node * root)
{
    // Add your code below
		//created three variables
		//one for the rootDepth (set to 1 as root depth is always 1), and the other two for the left adn right Depths
		int rootDepth =1;
    int leftDepth=0;
    int rightDepth=0;
		//two if statements that check if the root node has and left or right childs
		//if so, each designated variables (leftDepth or rightDepth) calls the Calculating Depth function
		if(root->left!=NULL){
    	leftDepth = rootDepth + CalculatingTheDepth(root->left);
			//cout<<"leftDepth: " << leftDepth<<endl;
			//used the cout statements to check the calculations of the depths
		}
		if(root->right!=NULL){
    	rightDepth = rootDepth + CalculatingTheDepth(root->right);
			//cout<<"rightDepth: " << rightDepth<<endl;
		}
		//checking if the two variables are the same depth
		//reason I set left and right Depth variables to 0 is because of the Test1 in equal-paths-test.cpp file
    if(leftDepth == rightDepth){
        return true;
    }else{
        return false;
    }
		//return false;

}

