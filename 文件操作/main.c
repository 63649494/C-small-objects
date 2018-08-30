#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char desktop[]="C:\\Users\\11653\\Desktop\\";
    FILE *w=fopen("123.txt","w+");

    /***************
    打开文件 FILE *fopen( const char *filename, const char *mode );
    文件打开模式：
    r：读取，如果文件不存在，函数调用失败；
    w：为写入操作打开一个空文件。若文件不存在，则创建一个文件；若给定的文件已经存在，那么它的内容将被清空；
    a：为写入操作打开文件。若文件不存在，则首先创建一个文件；若文件存在，那么在该文件结尾添加新数据，在写入数据之前，不会移除已有的EOF标记；
    r+：打开文件用于写入操作和读取操作，文件必须存在；
    w+：写入和读取，其他同w；
    a+：打开文件用于读取和添加操作，其他同a。
    ****************/

    fprintf(w,"%s",desktop);
    fwrite("I love you",1,strlen("I love you"),w);
    /***************
    第一个参数：指向将要被写入文件的数据；
    第二个参数：以字节为单位的项的大小。size_t类型，实际上就是unsigned int型；通常为1
    第三个参数：将要被写入的项的最大数目；
    注：即保证写入数据大小为第二个参数和第三个参数之积即可。
    第四个参数：指向FILE类型的指针，通过fopen获得。
    ****************/

    fflush(w);
    /****************
    刷新缓冲区 fflush( FILE *stream )
    从内存向磁盘文件写入的数据先送到内存中的这个缓冲区，直到缓冲区的数据装满以后，才把数据一起送到磁盘文件上。
    ****************/

    fseek(w,0,SEEK_END);
    /****************
    文件指针定位 fseek( FILE *stream, long offset, int origin);
    在C语言文件操作中，将有一个文件指针，该指针会随时根据我们对文件的操作来移动位置，始终指向下一个将要写人的位置；
    第二个参数：偏移量(和文件指针的位置相比)一般为1
    第三个参数：指定文件指针的起始位置，可以取三个值：
    SEEK_CUR：从文件当前位置处开始；
    SEEK_END：从文件结尾处开始；
    SEEK_SET：从文件开始处开始。
    ****************/

    int len=ftell(w);
    char *ch=(char*)malloc(len+1);
	/****************
    获取文件长度方法 long ftell( FILE *stream )
    函数 ftell 用于得到文件位置指针当前位置相对于文件首的偏移字节数
    先利用fseek函数将文件指针移动到文件的结尾处，然后利用ftell函数就可以得到文件的长度。
    fseek(pFile,0,SEEK_END);
    int len=ftell(pFile);
    len即为文件长度
    ****************/

    fseek(w,0,SEEK_SET);
    fread(ch,1,len,w);
	ch[len]='\0';
	printf("%s\n",ch);
	/****************
    文件的读取 fread( void *buffer, size_t size, size_t count, FILE *stream)
    第一个参数：指向存放数据的缓冲区；
    其他的同fwrite();
    ****************/

    fseek(w,0,SEEK_SET);
    char a[10];
    a[0] = getc(w);//读取一字节数据
    printf("%c\n",a[0]);
    fseek(w,0,SEEK_SET);
    fgets(a,8,w);//读取八个字符
    puts(a);
    int c;
    fseek(w,0,SEEK_SET);
    fscanf(w,"%5d",&c);//读取一个5长度的空间，读取这个空间上的整数
    printf("%d\n",c);
    /**************
    fgetc(FILE* fp);//从文件读取一字节数据以返回值的形式返回出来
    fgets(const char* a,int n,FILE* fp);比写数据多了一个整数，这个整数代表你要读取的字符个数，这个也是我之前说的你必须记住你往里面写入的字符数组的字符个数
    fscanf(FILE* fp,const char* c,….);比scanf()多了一个文件指针的形参，所以说这个函数不从黑色控制台读取的，而是从文件中读取数据
    ***************/
    fclose(w);
    /****************
    文件的关闭 fclose( FILE *stream )
    关闭文件，此时也会将缓冲区内容写入磁盘，但是和fflush相比，接下来若想对文件读写，则必须再次打开文件。
    ****************/
    return 0;
    }
