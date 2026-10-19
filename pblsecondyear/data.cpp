#include "data.h"

vector<Location> initializeLocations()
{
    vector<Location> locations;

    locations.push_back({1, "Rajpur Road"});
    locations.push_back({2, "Subah Nagar"});
    locations.push_back({3, "Clock Tower"});
    locations.push_back({4, "Sahastradhara"});
    locations.push_back({5, "Prem Nagar"});

    return locations;
}

Location getLocationById(const vector<Location>& locations, int id)
{
    for (const Location& location : locations)
    {
        if (location.id == id)
        {
            return location;
        }
    }

    return {-1, "Unknown"};
}


vector<Restaurant> initializeRestaurants()
{
    vector<Restaurant> restaurants;

    restaurants.push_back({1, "Food Paradise", 2, 4.5, 20});
    restaurants.push_back({2, "The Food Juction", 1, 4.3, 15});
    restaurants.push_back({3, "Urban Bites", 5, 4.6, 25});
    restaurants.push_back({4, "Royal Kitchen", 4, 4.2, 18});
    restaurants.push_back({5, "Flavour Town", 3, 4.4, 22});

    return restaurants;
}

Restaurant getRestaurantById(const vector<Restaurant>& restaurants, int id)
{
    for (const Restaurant& restaurant : restaurants)
    {
        if (restaurant.id == id)
        {
            return restaurant;
        }
    }

    return {-1, "Unknown", -1, 0.0, 0};
}

vector<Cuisine> initializeCuisines()
{
    vector<Cuisine> cuisines;

    cuisines.push_back({1, "Indian"});
    cuisines.push_back({2, "Italian"});
    cuisines.push_back({3, "Mexican"});
    cuisines.push_back({4, "Chinese"});
    cuisines.push_back({5, "Fast Food"});
    cuisines.push_back({6, "South Indian"});

    return cuisines;
}


Cuisine getCuisineById(const vector<Cuisine>& cuisines, int id)
{
    for (const Cuisine& cuisine : cuisines)
    {
        if (cuisine.id == id)
        {
            return cuisine;
        }
    }

    return {-1, "Unknown"};
}


vector<Dish> initializeDishes()
{
    vector<Dish> dishes;

    // Indian
    dishes.push_back({1, "Dal Makhani", 1, 250, false});
    dishes.push_back({2, "Paneer Tikka", 1, 180, true});
    dishes.push_back({3, "Rajma Chawal", 1, 160, true});
    dishes.push_back({4, "Biryani", 1, 220, false});

    //Italian
    dishes.push_back({5, "Pasta Alfredo", 2, 150, true});
    dishes.push_back({6, "Margherita Pizza", 2, 160, true});
    dishes.push_back({7, "Manchurian", 2, 170, true});
    dishes.push_back({8, "Garlic Bread", 2, 140, true});

    // Mexican
    dishes.push_back({9, "Nachos", 3, 220, true});
    dishes.push_back({10, "Burrito", 3, 200, true});
    dishes.push_back({11, "Quesadilla", 3, 120, true});
    dishes.push_back({12, "Veg Taco", 3, 250, true});

    // Chinese
    dishes.push_back({13, "Spring Rolls", 4, 160, true});
    dishes.push_back({14, "Fried Rice", 4, 180, true});
    dishes.push_back({15, "Chilli Paneer", 4, 140, true});
    dishes.push_back({16, "Momos", 4, 170, true});

    // Fast Food
    dishes.push_back({17, "Burger", 5, 120, true});
    dishes.push_back({18, "Momos", 5, 100, true});
    dishes.push_back({19, "Sandwich", 5, 90, true});
    dishes.push_back({20, "French Fries", 5, 110, true});

    // South Indian
    dishes.push_back({21, "Idli", 6, 150, false});
    dishes.push_back({22, "Masala Dosa", 6, 100, true});
    dishes.push_back({23, "Paneer Dosa", 6, 130, true});
    dishes.push_back({24, "Rava Dosa", 6, 120, true});

    return dishes;
}


Dish getDishById(const vector<Dish>& dishes, int id)
{
    for (const Dish& dish : dishes)
    {
        if (dish.id == id)
        {
            return dish;
        }
    }

    return {-1, "Unknown", -1, 0.0, false};
}



vector<Menu> initializeMenus()
{
    vector<Menu> menus;

    // Food Paradise
    menus.push_back({1, 1});  
    menus.push_back({1, 2});  
    menus.push_back({1, 3});  
    menus.push_back({1, 5});  
    menus.push_back({1, 7});  
    menus.push_back({1, 17}); 

    // The Food Juction
    menus.push_back({2, 1});  
    menus.push_back({2, 2});  
    menus.push_back({2, 4});  
    menus.push_back({2, 6});  
    menus.push_back({2, 8});  

    // Urban Bites
    menus.push_back({3, 9});  
    menus.push_back({3, 10}); 
    menus.push_back({3, 11}); 
    menus.push_back({3, 12}); 
    menus.push_back({3, 21}); 
    menus.push_back({3, 22}); 

    // Royal Kitchen
    menus.push_back({4, 2});  
    menus.push_back({4, 3}); 
    menus.push_back({4, 6});  
    menus.push_back({4, 8}); 
    menus.push_back({4, 13}); 
    menus.push_back({4, 15}); 

    // Flavour Town
    menus.push_back({5, 17}); 
    menus.push_back({5, 18}); 
    menus.push_back({5, 20}); 
    menus.push_back({5, 21}); 
    menus.push_back({5, 23}); 
    menus.push_back({5, 24}); 

    return menus;
}

vector<Dish> getRestaurantMenu(const vector<Menu>& menus,
                               const vector<Dish>& dishes,
                               int restaurantId)
{
    vector<Dish> restaurantMenu;

    for (const Menu& menu : menus)
    {
        if (menu.restaurantId == restaurantId)
        {
            Dish dish = getDishById(dishes, menu.dishId);

            if (dish.id != -1)
            {
                restaurantMenu.push_back(dish);
            }
        }
    }

    return restaurantMenu;
}


vector<Road> initializeRoads()
{
    vector<Road> roads;

    roads.push_back({1, 2, 3}); // Clock Tower → Rajpur Road
    roads.push_back({1, 3, 5}); // Clock Tower → ISBT
    roads.push_back({2, 5, 7}); // Rajpur Road → Sahastradhara
    roads.push_back({3, 4, 6}); // ISBT → Prem Nagar
    roads.push_back({4, 1, 4}); // Prem Nagar → Clock Tower

    return roads;
}

void addRoad(vector<Road>& roads,
             int fromLocationId,
             int toLocationId,
             double distance)
{
    roads.push_back({fromLocationId, toLocationId, distance});
}

const vector<Road>& getRoads(const vector<Road>& roads)
{
    return roads;
}


vector<Restaurant> findRestaurantsByCuisine(
    const vector<Restaurant>& restaurants,
    const vector<Menu>& menus,
    const vector<Dish>& dishes,
    int cuisineId)
{
    vector<Restaurant> result;

    for (const Restaurant& restaurant : restaurants)
    {
        for (const Menu& menu : menus)
        {
            if (menu.restaurantId == restaurant.id)
            {
                Dish dish = getDishById(dishes, menu.dishId);

                if (dish.cuisineId == cuisineId)
                {
                    result.push_back(restaurant);
                    break;
                }
            }
        }
    }

    return result;
}

vector<Restaurant> findRestaurantsByRating(
    const vector<Restaurant>& restaurants,
    double minimumRating)
{
    vector<Restaurant> result;

    for (const Restaurant& restaurant : restaurants)
    {
        if (restaurant.rating >= minimumRating)
        {
            result.push_back(restaurant);
        }
    }

    return result;
}


vector<Restaurant> findRestaurantsByLocation(
    const vector<Restaurant>& restaurants,
    int locationId)
{
    vector<Restaurant> result;

    for (const Restaurant& restaurant : restaurants)
    {
        if (restaurant.locationId == locationId)
        {
            result.push_back(restaurant);
        }
    }

    return result;
}


