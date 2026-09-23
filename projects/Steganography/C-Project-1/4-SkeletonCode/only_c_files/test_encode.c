#include <stdio.h>
#include "encode.h"
#include "types.h"

int main( int arg,char *argv[])
{
    EncodeInfo encInfo;
    uint img_size;

    if(arg < 4){
      printf("Error: Enter the  proper argument\n");
        return -1;
    }

    if( check_operation_type(argv) == e_encode){
        printf("Start Encoding\n");
        if(read_and_validate_encode_args(argv,&encInfo) ==e_success){
            /*
            printf("source file name %s\n",encInfo.src_image_fname);
            printf("secrate file name %s\n",encInfo.secret_fname);
            printf("output file name %s\n\n",encInfo.stego_image_fname);
            */
            if(open_files(&encInfo) == e_success){
                printf("Do Encoding ✅\n");
                if(do_encoding(&encInfo) == e_success){
                    puts("Enocding completed ✅");
                }else{
                    puts("fail to decode ❌");
                    return -1;
                }
            }else{
                printf("Invalid file");
                return -1;
            }


        }else{
            printf("Invalid file\n");
            return -1;
        }

    }else if(check_operation_type(argv) == e_decode){
        printf("Start Decoding\n");
    }else{
        printf("Invalid argunment\n");
        return -1;
    }















    /*
    // Fill with sample filenames
    encInfo.src_image_fname = "beautiful.bmp";
    encInfo.secret_fname = "secret.txt";
    encInfo.stego_image_fname = "stego_img.bmp";

    // Test open_files
    if (open_files(&encInfo) == e_failure)
    {
    	printf("ERROR: %s function failed\n", "open_files" );
    	return 1;
    }
    else
    {
    	printf("SUCCESS: %s function completed\n", "open_files" );
    }

    // Test get_image_size_for_bmp
    img_size = get_image_size_for_bmp(encInfo.fptr_src_image);
    printf("INFO: Image size = %u\n", img_size);

    */


    return 0;
}
