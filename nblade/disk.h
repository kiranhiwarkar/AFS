class disk {
    private:
        int   size = 1000;
        char  disk[1000];
        char  *vendor;
        char  *fileSystem;
    
    public:
        int getDiskSize();
        int freeDiskSpace();
        int usedDiskSpace();
};
