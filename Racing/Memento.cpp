#include "Memento.h"

/*
 * GRID ORDER
 * GRID ORDER
 * GRID ORDER
 */

GridOrder::GridOrder() {}
GridOrder::~GridOrder() {}

CarStorage* GridOrder::getPositions() { return positions; }

void GridOrder::setPositions(CarStorage* cars) {
    positions = cars;
}

/*
 * GRID ORDER STORE
 * GRID ORDER STORE
 * GRID ORDER STORE
 */

GridOrderStore::GridOrderStore() {}
GridOrderStore::~GridOrderStore() {}
GridOrder* GridOrderStore::getStoredGridOrder() { return gridOrder; }
void GridOrderStore::setStoredGridOrder(GridOrder* storedGridOrder) { gridOrder = storedGridOrder; }
