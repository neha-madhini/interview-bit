/**
 * @input A : Read only ( DON'T MODIFY ) array of strings termination by '\0'
 * @input n1 : number of strings in array A
 * 
 * @Output Integer
 */

int isValidSudoku(const char** A, int n1) 
{
      	  int rows[9][9]={0}; 
    	  int cols[9][9]={0}; 
    	  int blocks[3][3][9]={0};
    	  int r,c; 
    	  for( r=0;r<9;r++)    
          for( c=0;c<9;c++)
          if(A[r][c]!='.')
	   {   
             int number=A[r][c]-'1'; 
             if(rows[r][number]++) 
               return 0; 
             if(cols[c][number]++)  
               return 0;
             if(blocks[r/3][c/3][number]++) 
               return 0;
           }
    return 1;
}