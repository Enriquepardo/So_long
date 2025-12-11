🎮 so_long 🎮
This project is a small 2D game. It is designed to make you work with textures and sprites, as well as some other basic gameplay elements.

📌 Description
so_long is a small 2D game developed in C as a project at 42. The goal is to work with textures, sprites, map parsing, and basic gameplay elements. Players collect items on the map and reach the exit while avoiding obstacles. The project uses MiniLibX for rendering and event handling.

📋 Objectives
- Learn to work with 2D maps and sprites in C.
- Handle player movement and collision detection.
- Parse and validate game maps from `.ber` files.
- Manage game state and events using MiniLibX.
- Respect the 42 coding norms, including memory management and code style.

🚀 Usage

📥 Compilation
To compile the project, use the provided Makefile:

```bash
make
```
This will generate the executable:

```bash
./so_long
```

📂 Running the Game
Run the game with a valid .ber map:

```bash
./so_long maps/map.ber
```

Controls:

W or ↑ : Move up

S or ↓ : Move down

A or ← : Move left

D or → : Move right

ESC : Exit the game

🗺 Map Requirements

Must be rectangular and surrounded by walls (1).

Must include at least:

One player (P)

One exit (E)

One collectible (C)

🎯 Bonus Features (Optional)

Animated sprites

Enemy movement

Diagonal movement

Move counter display
