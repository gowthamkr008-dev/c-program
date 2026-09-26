#include<stdio.h>

#include "types.h"

typedef unsigned int uint;
#define MAX_SECRET_BUF_SIZE 1
#define MAX_IMAGE_BUF_SIZE (MAX_SECRET_BUF_SIZE * 8)
#define MAX_FILE_SUFFIX 4


typedef struct DecodeInfo
{
    /* Source Image info */
    char *src_image_fname; //✅
    FILE *fptr_src_image;//✅
    char image_data[MAX_IMAGE_BUF_SIZE]; /* use during encoding */

    /* Secret File Info */
    char *data_fname;//✅
    FILE *fptr_data;//✅
    char extn_secret_file[MAX_FILE_SUFFIX];/*   .txt */ //✅
}DecodeInfo;


Status read_and_validate_decode_args(char *argv[], DecodeInfo *decInfo);
Status open_file_decoding(DecodeInfo * decInfo);
Status do_decoding(DecodeInfo *decInfo);
Status decode_magic_string(char *str,DecodeInfo * DecInfo);
Status decode_byte_to_lsb(char *ch,char * imgdata);