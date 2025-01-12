#include <iostream>
using namespace std;

// Function to display the maze
void displayMaze(int maze[10][10], int playerX, int playerY)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == playerX && j == playerY)
                cout << "R "; // Player's current position
            else if (maze[i][j] == 1)
                cout << ". "; // Path
            else
                cout << "# "; // Wall
        }
        cout << endl;
    }
}

int main()
{
    // Define a 10x10 maze: 0 = Wall, 1 = Path
    int maze[10][10] = {
        {1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 1, 1, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 1, 1, 1},
        {0, 0, 1, 1, 1, 1, 0, 1, 0, 0},
        {0, 0, 0, 0, 0, 1, 0, 1, 0, 0},
        {0, 0, 1, 1, 1, 1, 0, 1, 1, 1},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {0, 1, 1, 1, 1, 1, 1, 1, 0, 1},
        {0, 0, 0, 0, 0, 0, 0, 1, 0, 1},
        {0, 0, 0, 0, 0, 0, 0, 1, 1, 1}};

    int playerX = 0, playerY = 0; // Starting position at (0, 0)

    while (true)
    {
        // Display the maze
        displayMaze(maze, playerX, playerY);

        // Check if the player has reached the goal
        if (playerX == 9 && playerY == 9)
        {
            cout << "Congratulations! You reached the goal!\n";
            break;
        }

        // Take input for movement
        cout << "Move (W/A/S/D): ";
        char move;
        cin >> move;

        // Calculate new position based on input
        int newX = playerX, newY = playerY;
        if (move == 'W' || move == 'w')
            newX--;
        else if (move == 'A' || move == 'a')
            newY--;
        else if (move == 'S' || move == 's')
            newX++;
        else if (move == 'D' || move == 'd')
            newY++;

        // Check if the new position is within bounds and a valid path
        if (newX >= 0 && newX < 10 && newY >= 0 && newY < 10 && maze[newX][newY] == 1)
        {
            playerX = newX;
            playerY = newY;
        }
        else
        {
            cout << "Can not go there! Look around smarty.\n";
        }

        cout << "\n";
    }

    return 0;
}