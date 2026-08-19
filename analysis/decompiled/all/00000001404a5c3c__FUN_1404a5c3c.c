// Function: FUN_1404a5c3c
// Addr: 1404a5c3c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5c3c(char *param_1,int param_2)

{
  ulonglong in_RAX;
  byte *pbVar1;
  char unaff_BL;
  undefined7 unaff_00000019;
  
  pbVar1 = (byte *)(in_RAX | 0x9d);
  *pbVar1 = *pbVar1 | (byte)pbVar1;
  *param_1 = *param_1 + (byte)pbVar1 + 0x5b;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
  iRam000000014e0a6b4f = iRam000000014e0a6b4f + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

