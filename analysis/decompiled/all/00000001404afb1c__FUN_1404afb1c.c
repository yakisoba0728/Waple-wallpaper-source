// Function: FUN_1404afb1c
// Addr: 1404afb1c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404afb1c(char *param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  char in_AL;
  undefined7 in_register_00000001;
  byte bVar3;
  char unaff_SPL;
  undefined1 in_YMM6 [32];
  
  bVar3 = (byte)((ulonglong)param_2 >> 8);
  pbVar1 = (byte *)(CONCAT71(in_register_00000001,in_AL) + param_2);
  *pbVar1 = *pbVar1 | bVar3;
  pbVar1 = (byte *)(CONCAT71(in_register_00000001,in_AL) + -0x34);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar3;
  vunpcklps_avx(in_YMM6,*(undefined1 (*) [32])
                         CONCAT71(in_register_00000001,in_AL + CARRY1(bVar2,bVar3)));
  *param_1 = *param_1 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

