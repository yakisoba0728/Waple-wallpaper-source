// Function: FUN_1404b3f78
// Addr: 1404b3f78
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3f78(uint *param_1)

{
  short in_AX;
  
  *param_1 = *param_1 | (int)in_AX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

