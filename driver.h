template<typename E> class List {
private:
    void operator =(const List&) {}  // Protect assignment
    List(const List&) {}    // Protect copy constructor
public:
    List() {}  // Default constructor
    virtual  ~List() {} // Base destructor

    // Clear contents from the list, freeing memory
    virtual void clear() = 0;

    // Insert an element at the beginning of the list.
    virtual void prepend(const E& item) = 0;

    // Append an element at the end of the list.
    virtual void append(const E& item) = 0;

    // Extra credit: Insert an element at the current location, if possible;
    // return true if successful, false if there is no current element
    virtual bool insert(const E& item) = 0;

    // Extra credit: Remove and assign to item the current element, if possible;
    // return true if successful, false if there is no current element
    virtual bool remove(E& item) = 0;

    // Set the current position to the first element of the list, if possible;
    // return true if successful, false if list was empty
    virtual bool moveToStart() = 0;

    // Set the current position to the last element of the list, if possible;
    // return true if successful, false if list was empty
    virtual bool moveToEnd() = 0;

    // Move the current position one step right, if possible;
    // return true if successful, false if already at the end
    virtual bool next() = 0;

    // Move the current position one step left, if possible;
    // return true if successful, false if already at the beginning
    virtual bool prev() = 0;

    // Return a pointer to the current element (or NULL if none)
    virtual const E* getValue() const = 0;

    // Return total number of active nodes
    virtual int numActive() = 0;

    // Return total number of free nodes
    virtual int numFree() = 0;
};


// Factory function
template<typename E> List<E> *createList();
