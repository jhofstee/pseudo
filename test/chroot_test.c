#include <unistd.h>
int main(int argc, char *argv[]) {
        if (argc != 2)
          return 2;
        return (chroot(argv[1]) == -1);
}
