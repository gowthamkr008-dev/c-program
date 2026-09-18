#include <stdio.h>
#include "encode.h"
#include "types.h"

int main()
{
    EncodeInfo encInfo;
    uint img_size;

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

    return 0;
}


/*

Encoding
Argc  is Less than 4 can accepted not
		If less than 4 
			Print error
            end of program


    
    
            check operation function ir is -e or -d
            call like operationtype(argv[1]);
        
            function check operationtype(char *argv)
                   if( strcmp(argv,"-e") ==0)
                    {
                    userwant to encoding 
                     return enum
                     return e_encode

                    }else if(strcmp(argv,"-d"))
                    {
                    user want decoding
                    return e_decoding 
                    }else
                    {
                    return e_unsoupported 
                    }
     

        collect as a 
        if(ret == e_encode){
        pass file name argument  and stricture address
        
        if(read and validate encode arg(argv[2], &encInfo) == e_success){        
            print success validation
            do encoding
                doencoding(&encinfo);


    }   else{
       printf("Not proper argument");
            return -1
            }
            


        
        }else if (ret = e_docode){
           
        
        }
				























*/
