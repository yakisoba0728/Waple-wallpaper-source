// Function: FUN_1404d7840
// Addr: 1404d7840
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7840(char *param_1,char param_2)

{
  char *pcVar1;
  char cVar4;
  int in_EAX;
  uint uVar2;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  longlong unaff_RDI;
  char *pcVar3;
  
  uVar2 = in_EAX + 0x50000a54;
  pcVar3 = (char *)(ulonglong)uVar2;
  cVar4 = (char)(uVar2 >> 8);
  param_1[-0x7b] = param_1[-0x7b] + cVar4;
  pcVar1 = (char *)(unaff_RDI + 0x4d + CONCAT44(unaff_00000034,unaff_ESI) * 2);
  *pcVar1 = *pcVar1 + param_2;
  *param_1 = *param_1 + cVar4;
  *pcVar3 = *pcVar3 + (char)uVar2;
  pcVar3[-0x7b] = pcVar3[-0x7b] + param_2;
  param_1[-0x7b] = param_1[-0x7b] + cVar4;
  pcVar1 = (char *)(unaff_RDI + 0x4d + CONCAT44(unaff_00000034,unaff_ESI) * 2);
  *pcVar1 = *pcVar1 + param_2;
  *param_1 = *param_1 + (char)uVar2;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar4;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

