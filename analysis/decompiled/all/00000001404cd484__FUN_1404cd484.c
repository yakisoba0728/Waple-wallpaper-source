// Function: FUN_1404cd484
// Addr: 1404cd484
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd484(uint *param_1)

{
  byte *pbVar1;
  int in_EAX;
  byte unaff_BL;
  uint unaff_EBP;
  
  *param_1 = in_EAX + 0x60000774U;
  *param_1 = unaff_EBP;
  pbVar1 = (byte *)((ulonglong)(in_EAX + 0x60000774U) + 0x4b);
  *pbVar1 = *pbVar1 & unaff_BL;
  *(char *)param_1 = (char)*param_1 + (char)(unaff_EBP >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

