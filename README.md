# Tetris Game using C++ and raylib

### Steps to create this game....

1. Setup the Game Loop
2. Creating the Grid
3. Create the Blocks
4. Move the Blocks
5. Rotate the Blocks
6. Checking for collisions
7. Check for completed rows
8. Game over
9. Create User Interface
10. Add Score
11. Add Next Block
12. Add Sounds

## How to draw things using Raylib.

There are few function using which we can draw pattern in raylib. e.g.

- void DrawRectangle(int posX,int psoY,int width,int height, Color color)
- void DrawCircle(int centerX,int centerY,float radius, Color color)
- void DrawLine(int startPosX,int startPosY,int endPosX,int endPosY, Color color)
- void DrawPoly(Vector2 center,int sides,float radius, float rotation,Color color)
- ETC

## There are 7 shapes in tetris

- L - Block
- J - Block
- I - Block
- O - Block
- S - Block
- T - Block
- Z - Block

That mean there are 7 classes derived from the block-Class.

## Game Class

- It will be a container for all the elements of out game.
- Code will be easier to understand, maintain, expand.
- Code will be easier to read. Bugs can't easily hide.
