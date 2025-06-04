// class Solution {
//     public String convert(String s, int numRows) {
//         if(s.length()<=numRows || numRows==1)   
//             return s;
//         int col = s.length();
//         char temp[] = s.toCharArray();
//         StringBuilder res = new StringBuilder();
//         int idx = 0;
//         char c[][] = new char[numRows][col];
//         for (int i = 0; i < numRows; i++) 
//             for (int j = 0; j < col; j++) 
//                 c[i][j]='#';
//         int i = 0;
//         int j = 0;
//         for (int k = 0; k < s.length();) {
//             if (i < numRows) {
//                 c[i][j] = temp[k++];
//                 i++;
//             } 
//             else {
//                 for (i = i - 2; i >= 0 && k < s.length(); i--) {
//                     j++;
//                     c[i][j] = temp[k++];
//                 }
//                 i+=2;
//             }
//         }
       
//         for (i = 0; i < numRows; i++) {
//             for (j = 0; j < col; j++) {
//                 if(c[i][j] == '#'){
//                     continue;
//                 }
//                 res.append(c[i][j]);
//             }
//         }
//     return res.toString();
//     }
// }
class Solution {
    public String convert(String s, int numRows) {
        if (numRows == 1 || s.length() <= numRows)
            return s;

        StringBuilder[] rows = new StringBuilder[numRows];
        for (int i = 0; i < numRows; i++)
            rows[i] = new StringBuilder();

        int currentRow = 0;
        boolean goingDown = false;

        for (char c : s.toCharArray()) {
            rows[currentRow].append(c);

            if (currentRow == 0 || currentRow == numRows - 1)
                goingDown = !goingDown;

            currentRow += goingDown ? 1 : -1;
        }

        StringBuilder result = new StringBuilder();
        for (StringBuilder row : rows)
            result.append(row);

        return result.toString();
    }
}
