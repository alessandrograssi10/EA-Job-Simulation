# EA-Job-Simulation

This repository contains my contributions to the **EA Job Simulation** project. These contributions focus on enhancing the simulation experience through features like character interactions, inventory management, and dynamic events.

## Overview

The project combines elements of gameplay mechanics, item management, and character interactions to simulate scenarios relevant to adventure and survival environments. Key features implemented include:

- **Adventure Camping Simulation**: Classes and functionalities for character interactions, dynamic events, and items in camping scenarios.
- **Inventory Management System**: A robust system for adding, selling, and listing items with real-time updates.

## Features

### 1. Adventure Camping Simulation
Key components include:
- **Sim Class**: Models a character's mood, energy, and abilities to perform actions like storytelling or stargazing.
- **WildAnimal Class**: Handles interactions with animals, including scenarios where animals become aggressive or passive.
- **Hike Class**: Generates random events during hiking activities, such as weather changes or encounters with wildlife.
- **Item Subclasses**:
  - `Telescope`: Allows stargazing.
  - `Campstove`: Enables cooking.
  - `Rockwall`: Facilitates climbing activities.

> Refer to the implementation in `AdventureCamping.h`.

### 2. Inventory Management System
The inventory system supports:
- Adding new items with specified names, quantities, and prices.
- Selling items with real-time updates on inventory and earnings.
- Displaying a detailed list of all items in the inventory.

> Refer to the implementation in `task-4-starter.cpp`.

