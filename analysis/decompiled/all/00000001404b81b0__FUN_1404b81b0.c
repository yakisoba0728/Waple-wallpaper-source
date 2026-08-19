// Function: FUN_1404b81b0
// Addr: 1404b81b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b81b0(char *param_1)

{
  undefined8 in_RAX;
  float10 in_ST0;
  
  dRam000000018bcc15b7 = (double)in_ST0;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

