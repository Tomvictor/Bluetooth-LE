 //working code
 SimpleProfile_SetParameter(SIMPLEPROFILE_CHAR2, sizeof(uint8_t),
                                                 &mycount);
                  mycount++;
                  Display_print1(dispHandle, 4, 0, "count value : %d", mycount);


 // another example for notiff service

   SimpleProfile_SetParameter(SIMPLEPROFILE_CHAR3, sizeof(uint8_t),
                                                 &mycount);
                  mycount++;
                  Display_print1(dispHandle, 4, 0, "count value : %d", mycount);