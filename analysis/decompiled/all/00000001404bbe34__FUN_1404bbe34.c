// Function: FUN_1404bbe34
// Addr: 1404bbe34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bbe34(undefined8 param_1,uint *param_2)

{
  char *in_RAX;
  uint unaff_ESP;
  
  *in_RAX = *in_RAX << 2;
  *param_2 = *param_2 ^ unaff_ESP;
  *in_RAX = *in_RAX + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

