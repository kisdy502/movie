#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <cstring>
#include <io.h>
#include <fcntl.h>

#include <sys/stat.h>
#include <cmath>

using namespace std;

int t4() {
    FILE *stream;
    char ch;
    char string[] = "this is a string";
    stream = fopen("test2.txt", "w+");
    size_t t = fwrite(string, strlen(string), 1, stream);
    std::cout << "write:" << t << std::endl;
    fseek(stream, 0, SEEK_SET);
    do {
        ch = fgetc(stream);
        cout << ch << endl;
    } while (ch != EOF);
    fclose(stream);
    return 0;
}


//取得文件句柄
int t5() {
    FILE *stream;
    char string[] = "direnji_liyuanfang_ruyan";
    fpos_t filepos;
    stream = fopen("test2.txt", "w+");
    int len = strlen(string);
    std::cout << "len:" << len << endl;
    int writed = fwrite(string, strlen(string), 1, stream);
    std::cout << (0 ? "write failed" : "write successed") << endl;
    fseek(stream, len - 2, SEEK_SET);
    fgetpos(stream, &filepos);
    printf("The file pointer is at byte%ld\n", filepos);
    fclose(stream);
    return 0;
}

int t6() {

    FILE *stream;
    char string[] = "This is a test";
    char msg[20];

    /* open a file for update */
    stream = fopen("test2.txt", "w+");

    /* write a string into the file */
    fwrite(string, strlen(string), 1, stream);

    /* seek to the start of the file */
    fseek(stream, 0, SEEK_SET);

    fgets(msg, strlen(string) + 1, stream);
    /* display the string */
    printf("%s", msg);

    fclose(stream);
    return 0;
}

int t7() {
    int fd;
    char buf[11] = "0123456789";
    char *fileName = "test.txt";
    /* create a file containing 10 bytes */
    fd = open(fileName, O_CREAT);
    printf("fd:%d\n", fd);
    if (fd != -1) {
        write(fd, buf, strlen(buf));
        struct stat st;
        fstat(fd, &st);
        printf("file size:%ld", st.st_size);

    }
    close(fd);
}


int t8() {
    char msg[] = "Hello world";
    int i = 0;

    while (msg[i]) {
        fputc(msg[i], stdout);
        i++;
    }

    fputs("#Hello world#\n", stdout);

    return 0;

}

int t9() {
    FILE *fp;
    char c[] = "This is runoob";
    char buffer[20];

    /* 打开文件用于读写 */
    fp = fopen("file.txt", "w+");

    /* 写入数据到文件 */
    fwrite(c, strlen(c) + 1, 1, fp);

    /* 查找文件的开头 */
    fseek(fp, SEEK_SET, 0);

    /* 读取并显示数据 */
    fread(buffer, strlen(c) + 1, 1, fp);
    printf("%s\n", buffer);
    fclose(fp);

    return (0);

}

int t10() {
    char *str;

    /* allocate memory for string */
    str = (char *) malloc(10);
    /* copy "Hello" to string */
    strcpy(str, "Hello");

    /* display string */
    printf("String is %s\n", str);

    /* free memory */
    free(str);


    return 0;


}


//替换一个流
int t11() {
    if (freopen("OUTPUT.FIL", "w", stdout) == NULL)
        fprintf(stderr, "error redirecting stdout\n");
    printf("This will go into a file.");
    /* close the standard output stream */
    fclose(stdout);


}

int t12(){
    double mantissa, number;
    int exponent;

    number = 8.0;
    mantissa = frexp(number, &exponent);


    printf("The number %lf is ", number);
    printf("%lf times two to the ", mantissa);
    printf("power of %d\n", exponent);


}

long filesize(FILE *stream){
    long curpos, length;
    curpos = ftell(stream);
    printf("current pos:%ld\n",curpos);
    fseek(stream, 0L, SEEK_END);
    length = ftell(stream);
    printf("file length:%ld\n",curpos);
    fseek(stream, curpos, SEEK_SET);
    return length;

}
int t13() {
    FILE *stream;
    char *fileName = "D:\\yfk_广告系统合作开发文档1.2.doc";
    stream = fopen(fileName, "a+");
    if (stream != NULL) {
        printf("Filesize of MYFILE.TXT is %ld bytes\n", filesize(stream));
    }
    fclose(stream);
    return 0;
}


int main() {
    t13();
    return 0;
}