// Function: FUN_1404d7780
// Addr: 1404d7780
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7780(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  uint *in_RAX;
  char *unaff_RSI;
  char unaff_R12B;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *unaff_RSI = *unaff_RSI + (char)((ulonglong)param_1 >> 8);
  *param_4 = *param_4 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

