// Function: FUN_1404c136c
// Addr: 1404c136c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c136c(int *param_1,uint *param_2)

{
  uint in_EAX;
  int unaff_EBP;
  
  *param_2 = *param_2 & (uint)param_1;
  *param_1 = *param_1 + unaff_EBP + (uint)(0x2ffff7cb < in_EAX);
  cRam00000000cc4c3c93 = cRam00000000cc4c3c93 + (char)in_EAX + '4';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

