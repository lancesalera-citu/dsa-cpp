class List {
    public:
        virtual ~List() = default;
        virtual void add(int num) = 0;
        virtual void addFirst(int num) = 0;
        virtual void addLast(int num) = 0;
        virtual int remove(int num) = 0;
        virtual int removeFirst() = 0;
        virtual int removeLast() = 0;
        virtual int get(int pos) = 0;
        virtual void print() = 0;
};