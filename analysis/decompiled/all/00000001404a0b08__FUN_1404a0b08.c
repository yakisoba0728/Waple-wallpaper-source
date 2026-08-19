// Function: FUN_1404a0b08
// Addr: 1404a0b08
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0b08(char *param_1,char *param_2)

{
  byte *pbVar1;
  char unaff_BL;
  undefined7 unaff_00000019;
  
  param_1[CONCAT71(unaff_00000019,unaff_BL)] =
       param_1[CONCAT71(unaff_00000019,unaff_BL)] + (char)((ulonglong)param_2 >> 8);
  param_2[(longlong)param_1] = param_2[(longlong)param_1] + (char)param_2;
  pbVar1 = (byte *)((longlong)((ulonglong)&stack0x00000000 & 0xffffffff) + -0x7f01fffd);
  *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
  *param_1 = *param_1 + (char)*(undefined4 *)((ulonglong)&stack0x00000000 & 0xffffffff);
  *param_2 = *param_2 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

