//
// BINARY HEAP class by Jakob Gruber
//

#pragma once

class BHeap
{
private:
	unsigned int	*openList,
					*Fcost;		//heap sorted by this
	int	*openX,
		*openY,
		squaresChecked,
		nrofitems;
public:
	BHeap(int width, int height);
	~BHeap(void);
	
	void add(int x , int y, int f); 
	void remove();
	
	int getF() {return Fcost[ openList[1] ]; }
	int getX() {return openX[ openList[1] ]; }
	int getY() {return openY[ openList[1] ]; }
	
	void reset();
	
	bool isEmpty();
	
	bool changeF(int, unsigned int);	//only works for newF < oldF; returns 0 on success, 1 on failure
	
	int find(int, int);	//returns position in openlist, if not found : 0
};
