
#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    printf( " Install RPI with lite zip file (unzip -p file.zip | dd of=/dev/mmcblk0 \n" );
    system( " apt-get update; apt-get install -y blackbox xinit xterm minetest "  );
    printf( " Bring rpi to OpenGL driver (Full) \n" );
    system( " raspi-config" );
    return 0;
}

