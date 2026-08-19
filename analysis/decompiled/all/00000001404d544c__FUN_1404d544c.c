// Function: FUN_1404d544c
// Addr: 1404d544c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d544c(uint param_1,uint *param_2,undefined8 param_3,char *param_4)

{
  char in_AL;
  char unaff_R12B;
  char *unaff_retaddr;
  
  *param_2 = *param_2 & param_1;
  cRam00000001444d5e4d = cRam00000001444d5e4d + in_AL;
  *param_4 = *param_4 + unaff_R12B;
  *unaff_retaddr = *unaff_retaddr + (char)unaff_retaddr;
  *param_4 = *param_4 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

