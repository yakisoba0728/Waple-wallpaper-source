// Function: FUN_1404d0440
// Addr: 1404d0440
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0440(int *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *in_RAX;
  longlong unaff_RBX;
  int unaff_EBP;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  byte in_CF;
  char *pcVar3;
  
  *param_1 = *param_1 + (int)&stack0x00000000 + (uint)in_CF;
  uVar2 = (uint)in_RAX | *in_RAX;
  pcVar3 = (char *)(ulonglong)uVar2;
  puVar1 = (uint *)((longlong)param_2 + CONCAT44(unaff_00000034,unaff_ESI));
  *puVar1 = *puVar1 & unaff_ESI;
  *(char *)param_1 = (char)*param_1 + (char)(uVar2 >> 8);
  *param_2 = *param_2 + unaff_EBP;
  cRam00000001522d1841 = cRam00000001522d1841 + (char)param_2;
  *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
  *pcVar3 = *pcVar3 + (char)uVar2;
  pcVar3[unaff_RBX + -0x62d7ffb3] = pcVar3[unaff_RBX + -0x62d7ffb3] + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

