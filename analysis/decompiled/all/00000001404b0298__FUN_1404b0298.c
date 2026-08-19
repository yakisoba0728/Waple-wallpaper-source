// Function: FUN_1404b0298
// Addr: 1404b0298
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0298(char *param_1)

{
  int in_EAX;
  byte in_CF;
  
  *param_1 = *param_1 + (char)(in_EAX + 0x49eda800 + (uint)in_CF >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

