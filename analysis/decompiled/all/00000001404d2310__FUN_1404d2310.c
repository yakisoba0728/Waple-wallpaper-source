// Function: FUN_1404d2310
// Addr: 1404d2310
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2310(undefined8 param_1,char *param_2)

{
  byte *in_RAX;
  
  *param_2 = *param_2 + (byte)param_2;
  *in_RAX = *in_RAX | (byte)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

