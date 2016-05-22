#ifndef ITEM_H
#define ITEM_H

class Item {
public:

Item * createItem(void); // incapsulate constructor
void * deleteItem(Item *); // same to destructor

private:
Item(){}
virtual ~Item(){}   // in a doubt about it
Item * defaultItem;
};

class Chest : public Item {
};

class ItemAFactory {    // генерация объектов типа Item
};

class ChestAFactory : public ItemAFactory { // генерация объектов типа Chest
};

#endif 
