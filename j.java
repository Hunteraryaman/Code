public public class j {
       public static void main(String[] args) {
           int n = 8; // You can change this to the desired board size
           solveNQueens(n);
       }
   
       private static void solveNQueens(int n) {
           int[][] board = new int[n][n];
   
           if (solveNQueensUtil(board, 0, n)) {
               printSolution(board);
           } else {
               System.out.println("Solution does not exist.");
           }
       }
   
       private static boolean solveNQueensUtil(int[][] board, int col, int n) {
           if (col >= n) {
               return true;
           }
   
           for (int i = 0; i < n; i++) {
               if (isSafe(board, i, col, n)) {
                   board[i][col] = 1;
                   if (solveNQueensUtil(board, col + 1, n)) {
                       return true;
                   }
                   board[i][col] = 0; // Backtrack if placing a queen at board[i][col] doesn't lead to a solution
               }
           }
   
           return false; // If no placement is found in this column
       }
   
       private static boolean isSafe(int[][] board, int row, int col, int n) {
           for (int i = 0; i < col; i++) {
               if (board[row][i] == 1) {
                   return false; // Check if there is a queen in the same row
               }
               if (row - i >= 0 && board[row - i][col - i] == 1) {
                   return false; // Check upper diagonal on left side
               }
               if (row + i < n && board[row + i][col - i] == 1) {
                   return false; // Check lower diagonal on left side
               }
           }
           return true;
       }
   
       private static void printSolution(int[][] board) {
           for (int i = 0; i < board.length; i++) {
               for (int j = 0; j < board[i].length; j++) {
                   System.out.print(board[i][j] + " ");
               }
               System.out.println();
           }
       }
   }

