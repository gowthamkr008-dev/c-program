/*
read and validate encode argument 
    arg[2]

    check  file or .bmp 
    strstr(argv[2],".bmp") == NULL    return the strstr return null{
     no need to continue 
        return failure
    }else{
        store
     encinfo -> srcimg_fname = argv[2];
    }
    

    check argv[3] having is not txt or num
        if not a txt file return e_failure
        else 
          store the filename
          encinfo -> secrate_fname =argv[3]

          if(argv[4] != NULL){
                if(strstr(argv[4],".bmp")){
                strcpy(encinfo -> stego_image_fname,"argv[4]");
                }else{
                    encinfo ->stego_img = default.bmp
                }
          }else{
            encinfo ->stego_img = default.bmp
          }

    
return e_success
*/