// Function: FUN_1404bd718
// Addr: 1404bd718
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd718(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint *puVar2;
  char *pcVar3;
  int iVar4;
  byte in_AL;
  undefined7 in_register_00000001;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RDI;
  byte in_CF;
  
  iVar4 = *(int *)(unaff_RDI + param_2);
  *(char *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + (char)param_2;
  piVar1 = (int *)(CONCAT71(in_register_00000001,in_AL) + CONCAT71(in_register_00000001,in_AL));
  *piVar1 = *piVar1 + (int)param_2;
  *(byte *)(CONCAT71(in_register_00000001,in_AL) | 0x70) =
       *(char *)(CONCAT71(in_register_00000001,in_AL) | 0x70) + (in_AL | 0x70);
  puVar2 = (uint *)((ulonglong)((int)&stack0x00000000 + iVar4 + (uint)in_CF) + param_1);
  *puVar2 = *puVar2 & unaff_EBX;
  pcVar3 = (char *)((CONCAT71(in_register_00000001,in_AL) | 0x70) + unaff_RDI * 4);
  *pcVar3 = *pcVar3 + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

