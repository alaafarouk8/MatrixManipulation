// Course:  CS213 - Programming II  - 2018
// Title:   Assignment I - Task 1 - Problem 0
// Program: CS213-2018-A1-T1-P0
// Purpose: Skeleton code for the student to start working
// Author:  Dr. Mohammad El-Ramly
// Date:    10 August 2018
// Version: 1.0

#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

// A structure to store a matrix
struct matrix
{
    int** data;       // Pointer to 2-D array that will simulate matrix
    int row, col;
};

// Already implemented
void createMatrix (int row, int col, int num[], matrix& mat);

// Student #1 with the smallest ID (e.g., 20170080)
// All these operations return a new matrix with the calculation result
matrix operator+  (matrix mat1, matrix mat2)
{
    if(mat1.row==mat2.row&&mat1.col==mat2.col)
    {
        matrix mat3;
        int data4[]= {};
        createMatrix(mat1.row,mat1.col,data4,mat3);
        for(int i=0; i<mat1.row; i++)
            for(int y=0; y<mat1.col; y++)
                mat3.data[i][y]=mat1.data[i][y]+mat2.data[i][y];
        return mat3;
    }
    else
        cout<<"false";
}
// Add if same dimensions
matrix operator-  (matrix mat1, matrix mat2)
{
    if(mat1.row==mat2.row&&mat1.col==mat2.col)
    {
        matrix mat3;
        int data4[]= {};
        createMatrix(mat1.row,mat1.col,data4,mat3);
        for(int i=0; i<mat1.row; i++)
            for(int y=0; y<mat1.col; y++)
                mat3.data[i][y]=mat1.data[i][y]-mat2.data[i][y];
        return mat3;
    }
    else
        cout<<"false";
} // Sub if same dimensions
matrix operator*  (matrix mat1, matrix mat2)
{
    if(mat1.row==mat2.row&&mat1.col==mat2.col)
    {
        matrix mat3;
        int data4[]= {};
        createMatrix(mat1.row,mat1.col,data4,mat3);
        for(int i=0; i<mat1.row; i++)
            for(int y=0; y<mat1.col; y++)
                for(int j=0; j<mat1.col; y++)
                    mat3.data[i][y]=mat1.data[i][j]+mat2.data[j][y];
        return mat3;
    }
    else
        cout<<"false";
} // Multi if col1 == row2
matrix operator+  (matrix mat1, int scalar)
{
    matrix mat3;
    int data4[]= {};
    createMatrix(mat1.row,mat1.col,data4,mat3);
    for(int i=0; i<mat1.row; i++)
        for(int y=0; y<mat1.col; y++)
            mat3.data[i][y]=mat1.data[i][y]+scalar;
    return mat3;
}  // Add a scalar
matrix operator-  (matrix mat1, int scalar)
{
    matrix mat3;
    int data4[]= {};
    createMatrix(mat1.row,mat1.col,data4,mat3);
    for(int i=0; i<mat1.row; i++)
        for(int y=0; y<mat1.col; y++)
            mat3.data[i][y]=mat1.data[i][y]-scalar;
    return mat3;
} // Subtract a scalar
matrix operator*  (matrix mat1, int scalar)
{
    matrix mat3;
    int data4[]= {};
    createMatrix(mat1.row,mat1.col,data4,mat3);
    for(int i=0; i<mat1.row; i++)
        for(int y=0; y<mat1.col; y++)
            mat3.data[i][y]=mat1.data[i][y]*scalar;
    return mat3;
}

// Student #2 with the middle ID (e.g., 20170082)
// The last operator >> takes an istream and a matrix and return the
// the same istream so it is possible to cascade input like
// cin >> matrix1 >> matrix2 << endl;
matrix operator+= (matrix& mat1, matrix mat2)
{

    for(int i=0; i<mat1.row; i++)
    {
        for(int j=0; j<mat1.col; j++)
        {
            mat1.data[i][j]=mat1.data[i][j]+mat2.data[i][j];

        }
    }
    return mat1;
}

matrix operator -=(matrix& mat1, matrix mat2)
{
    for(int i=0; i<mat1.row; i++)
    {
        for(int j=0; j<mat1.col; j++)
        {
            mat1.data[i][j]=mat1.data[i][j]-mat2.data[i][j];
        }
    }
    return mat1;
}
matrix operator+  (matrix& mat, int scalar)
{
    for (int i = 0 ; i < mat.row ; i++ )
    {
        for (int j = 0 ; j < mat.col ; j++ )
            mat.data[i][j] = mat.data[i][j] + scalar ;
    }

    return mat ;
}
matrix operator-  (matrix& mat, int scalar)
{
    {
        for (int i = 0 ; i < mat.row ; i++ )
        {
            for (int j = 0 ; j < mat.col ; j++ )
                mat.data[i][j] = mat.data[i][j] - scalar ;
        }

        return mat ;
    }

}
void operator++ (matrix& mat)
{
    for(int i=0; i<mat.row; i++)
    {
        for(int j=0; j<mat.col; j++)
        {
            mat.data[i][j]=mat.data[i][j]+1;
        }
    }

}
void operator-- (matrix& mat)
{
    for(int i=0; i<mat.row; i++)
    {
        for(int j=0; j<mat.col; j++)
        {
            mat.data[i][j]=mat.data[i][j]-1;
        }
    }
}

istream& operator>> (istream& in, matrix& mat)
{
    for (int i = 0 ; i < mat.row ; i++ )
    {
        for (int j = 0 ; j < mat.col ; j++ )
            in >> mat.data[i][j] ;
    }
    return in ;


}

//Student #3 with the biggest ID (e.g., 20170089)
// Print matrix  as follows (2 x 3) 4	 6 	  8
// and return ostream to cascade printing	9	12  	123
ostream& operator<< (ostream& out, matrix mat)
{
    cout << "the matrix is : " << endl ;

    for (int i = 0 ; i < mat.row ; i++)
    {
        for (int j = 0 ; j < mat.col ; j ++ )
        {
            out << setw(5) << mat.data[i][j] << setw(2) ;
        }
        cout << endl ;
    }
    return out ;
}
// True if identical
// all elements of two matrices must be equal
bool operator == (matrix mat1, matrix mat2)
{
    for (int i = 0 ; i < mat1.row ; i ++ )
    {
        for (int j = 0 ; j < mat1.col ; j ++ )
            if (mat1.data[i][j] == mat2.data[i][j])
            {
                return true ;
            }
            else

            {
                return false ;
            }
    }
}
// True if not same
// all elements of two matrices must be not equal
bool   operator != (matrix mat1, matrix mat2)
{
    for (int i = 0 ; i < mat1.row ; i ++ )
    {
        for (int j = 0 ; j < mat1.col ; j ++ )
            if (mat1.data[i][j] != mat2.data[i][j])
            {
                return true ;
            }
            else
            {
                return false ;
            }
    }
}
// True if square matrix
// htb2a true if numbers of col equal numbers of row
bool isSquare (matrix mat)
{
    for (int i = 0 ; i < mat.row ; i ++ )
    {
        for (int j = 0 ; j < mat.col ; j ++ )
            if (mat.row == mat.col)
            {
                return true ;
            }
            else
            {
                return false ;
            }
    }
}
bool   isSymetric (matrix mat)
{
    for (int i = 0 ; i < mat.row ; i ++ )
    {
        for (int j =0 ; j < mat.col ; j ++ )

            if (mat.data[i][j] = mat.data[j][i]&& i == j )
            {
                return true ;
            }
            else
            {
                return false  ;
            }
    }
}
// True if square and identity  //A square matrix in which all the main diagonal elements are 1’s
//  and all the remaining elements are 0’s is called an Identity Matrix
bool   isIdentity (matrix mat)
{
    for (int i = 0 ; i < mat.row ; i ++ )
    {
        for (int j = 0 ; j < mat.col ; j ++ )
        {
            if (i==j && mat.data[i][j] != 1 )
            {
                return false ;
            }
            else if (i != j && mat.data[i][j] != 0 )
            {
                return false ;
            }

        }
    }
    return true ;
}
matrix transpose(matrix mat)    // Return new matrix with the transpose
{
    matrix transposedmat ;
    int mat5 [] = {0, 0, 0, 0, 0,0,0} ;
    createMatrix( mat.col, mat.row, mat5,transposedmat) ;
    cout << "the transpose of matrix is:" << endl ;
    for (int i = 0 ; i < mat.row ; i++ )
    {
        for (int j = 0 ; j < mat.col ; j++)

        {
            transposedmat.data[j][i] = mat.data[i][j] ;
        }
    }
    return transposedmat ;
}


//__________________________________________

int main()
{
    int data1 [] = {1,2,3,4,5,6,7,8};
    int data2 [] = {13,233,3,4,5,6};
    int data3 [] = {10,100,10,100,10,100,10,100};

    matrix mat1, mat2, mat3;
    createMatrix (4, 2, data1, mat1);
    createMatrix (2, 3, data2, mat2);
    createMatrix (4, 2, data3, mat3);
      /*int scalar ;
      cout << "enter your scalar" << endl ;
      cin >> scalar ;
      cout<<"1-matrix operator+ (matrix mat1, matrix mat2)"<<endl;
      cout<<"2-matrix operator-(matrixmat1, matrix mat2)"<<endl;
      cout<<"3-matrix operator* (matrixmat1, matrix mat2)"<<endl;
      cout<<"4-matrix operator+ (matrix mat1, int scalar)"<<endl;
      cout<<"5-matrix operator-(matrix mat1, int scalar)"<<endl;
      cout<<"6-matrix operator* (matrix mat1, int scalar)"<<endl;
      cout<<"7-matrix operator+= (matrix& mat1, matrix mat2)" << endl ;
      cout<<"8-matrix operator -=(matrix& mat1, matrix mat2)" << endl ;
      cout<<"9-matrix operator+  (matrix& mat, int scalar)" << endl ;
      cout<<"10-matrix operator-  (matrix& mat, int scalar)" << endl ;
      cout<<"11-void operator++ (matrix& mat)" << endl ;
      cout<<"12-void operator-- (matrix& mat)" << endl ;
      int x;
      cin>>x;
      if(x==1){
      //cout << mat2 << endl;
      //cout << mat3 << endl;

      //cout << (mat1 + mat3) << endl << endl;
      //cout << (mat3 + mat3) << endl << endl
      }
      if(x==2){
      //cout << mat2 << endl;
      //cout << mat3 << endl;

      //cout << (mat1 - mat3) << endl << endl;
      //cout << (mat3 - mat3) << endl << endl
      }
    if(x==3){
       //cout << mat2 << endl;
      //cout << mat3 << endl;

      //cout << (mat1 * mat3) << endl << endl;
      //cout << (mat3 * mat3) << endl << endl
    }
    if(x==4){
      //cout << mat2 << endl;
      int scalar;
      cin>>scalar;
      //cout << (mat1 + scalar) << endl << endl;
      //cout << (mat2 + scalar) << endl << endl;
       //cout << (mat3 + scalar) << endl << endl;
    }
    if(x==5){
        //cout << mat2 << endl;
      int scalar;
      cin>>scalar;
      //cout << (mat1 - scalar) << endl << endl;
      //cout << (mat2 - scalar) << endl << endl;
       //cout << (mat3 - scalar) << endl << endl;
    }
    if(x==6){
        //cout << mat2 << endl;
      int scalar;
      cin>>scalar;
      //cout << (mat1 * scalar) << endl << endl;
      //cout << (mat2 * scalar) << endl << endl;
       //cout << (mat3 * scalar) << endl << endl;
    cout << (mat1+scalar) << endl <<endl ;
    cout << (mat2+scalar) << endl << endl;
    cout << (mat3+scalar) << endl << endl;
    cout << (mat1-scalar) << endl << endl;
    cout << (mat2-scalar) << endl << endl;
    cout << (mat3-scalar) << endl << endl;
    cout << (mat1*scalar) << endl << endl;
    cout << (mat2*scalar) << endl << endl;
    cout << (mat3*scalar) << endl << endl; */
    cout << mat1 << endl;
    cout << mat2 << endl;
    cout << mat3 << endl;

    cout << (mat1 + mat3) << endl << endl;
    cout << (mat3 + mat3) << endl << endl;

    ++mat1;
    cout << mat1 << endl;

    mat1+= mat3 += mat3;
    cout << mat1 << endl;
    cout << mat2 << endl;
    cout << mat3 << endl;
    if (mat1 == mat2 )
    {
        cout << "Matrices (Mat1 , Mat2) are identical" << endl ;
    }
    else
    {
        cout << "Matrices (Mat1 , Mat2) are not identical" << endl;
    }
    if (mat1 == mat3 )
    {
        cout << "Matrices (Mat1 , Mat3) are identical" << endl ;
    }
    else
    {
        cout << "Matrices (Mat1 , Mat3) are not identical" << endl;
    }
    if (mat1 != mat2 )
    {
        cout << "Matrices (Mat1 , Mat2) are not identical" << endl ;
    }
    else
    {
        cout << "Matrices (Mat1 , Mat2) are identical" << endl ;
    }
    {
        if (isSquare ( mat1 ))

            cout << "the matrix (Mat1) is square" << endl ;

        else

            cout << "the matrix (Mat1) is not square " << endl ;
    }

    if (isSymetric(mat1))
    {
        cout << "the matrix (Mat1) is not symmetric" << endl ;
    }
    else
    {
        cout << "the matrix (Mat1) is symmetric" << endl ;
    }
    {
        if (isIdentity(mat1))
        {
            cout << "the matrix (Mat1) is identity" << endl ;

        }
        else
        {
            cout << "the matrix (Mat1) is not identity" << endl ;
        }
    }
    cout << mat1 << endl ;
    cout << transpose(mat1) ;
    cout << mat2 << endl ;
    cout << transpose(mat2) ;
    cout << mat3 << endl ;
    cout << transpose(mat3) ;
    return 0;
}

//__________________________________________
// Takes an array of data and stores in matrix according
// to rows and columns
void createMatrix (int row, int col, int num[], matrix& mat)
{
    mat.row = row;
    mat.col = col;
    mat.data = new int* [row];

    for (int i = 0; i < row; i++)
        mat.data[i] = new int [col];

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            mat.data[i][j] = num[i * col + j];
}
