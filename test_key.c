
#include <io.h>

main()
{
	char ch;
    ch = _getch();
    printf("%d\n",ch);
    if (ch==224 || ch==0) {
      ch=_getch();
      printf("%d\n",ch);
    }
}
