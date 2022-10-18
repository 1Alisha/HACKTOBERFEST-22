import java.util.HashSet;
import java.util.Set;
import java.util.stream.Collectors;
import java.util.stream.Stream;

//Depth First Search
class Main
{
//    static final int M = 4;
//    static final int N = 4;
    // cell moves (top, right, bottom, left)
    public static int[] row = { -1, 0, 1, 0 };
    public static int[] col = { 0, 1, 0, -1 };


    // Function to check if it is safe to go to cell (x, y) from the current cell.
    // The function returns false if (x, y) is not valid
    // (x, y) is already processed.
    public static boolean checkCell(int x, int y, boolean[][] processed) {
        return (x >= 0 && x < processed.length) && (y >= 0 && y < processed[0].length)
                && !processed[x][y];
    }

    // A recursive function to generate words
    public static void findWord(char[][] board, Set<String> words,
                                Set<String> result, boolean[][] cellVisited,
                                int i, int j, String path)
    {
        // mark the current node as cellVisited
        cellVisited[i][j] = true;

        // update the path with the current character and insert it into the set
        path += board[i][j];

        // check whether the path is present in the input set
        if (words.contains(path)) {
            result.add(path);
        }

        // check for all eight possible movements from the current cell
        for (int k = 0; k < row.length; k++)
        {
            // if cell is not valid or already visited skip it
            if (checkCell(i + row[k], j + col[k], cellVisited)) {
                findWord(board, words, result, cellVisited, i + row[k],
                        j + col[k], path);
            }
        }

        // backtrack: mark the current cell as not visited
        cellVisited[i][j] = false;
    }

    // Function to search for a given words
    public static Set<String> findWord(char[][] board, Set<String> words)
    {
        // store valid words from Boggle
        Set<String> result = new HashSet<>();

        // base case
        if (board.length == 0) {
            return result;
        }

        // `M × N` board

        int M = board.length;
        int N = board[0].length;

        // construct a boolean matrix to check if cell is checkedCell or not
        boolean[][] checkedCell = new boolean[M][N];

        // generating words
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++) {
                // each character starting point and run DFS
                findWord(board, words, result, checkedCell, i, j, "");
            }
        }

        return result;
    }

    public static void main(String[] args)
    {
        char[][] board = {
                {'Q','Q','D','C'},
                {'Q','Q','R','T'},
                {'Q','C','A','Q'},
                {'Q','C','A','Q'},
        };

        var words = Stream.of("CART","A","ART","CARD","CAR").collect(Collectors.toSet());
        System.out.println("Words:");
        Set<String> validWords = findWord(board,words);
        var wordlist = validWords.stream().sorted().toList();
        for(int i = 0; i < wordlist.size(); i++) {
            System.out.println( i+1 + ". " + wordlist.get(i));
        }
        //validWords.stream().forEach(System.out::println);

        //var words = findWords(board);
        //words.asMap().forEach((num index, String word) => print("  ${index + 1}. $word"));
        // words.forEach(System.out::println);


    }
}