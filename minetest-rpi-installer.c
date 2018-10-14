
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
      // once done, install, and run minetest from xterm and then go to settings and remove filter, antialiasing, remove the texture, remove ticks and it runs fast on 800x600
      // x11 xserver utils and run xrandr -s 800x600 into your .xinitrc 
    return 0;
}

