// Function: FUN_1404aefe0
// Addr: 1404aefe0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aefe0(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  longlong in_RAX;
  longlong lVar5;
  byte bVar8;
  char *unaff_RBX;
  char unaff_SPL;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  char *pcVar6;
  uint *puVar7;
  
  bRam210049e0c800138a = (byte)in_RAX;
  lVar5 = CONCAT71((int7)((ulonglong)in_RAX >> 8),bRam210049e0c800138a | *(byte *)(in_RAX * 2));
  bVar8 = (byte)((ulonglong)param_2 >> 8) | param_1[lVar5];
  uVar4 = (int)lVar5 + 0xa2000764;
  pcVar6 = (char *)(ulonglong)uVar4;
  lVar5 = CONCAT71(CONCAT61((int6)((ulonglong)param_2 >> 0x10),bVar8),*unaff_RBX);
  pcVar6[0x400138a] = pcVar6[0x400138a] + bVar8;
  out((short)lVar5,uVar4);
  *param_1 = *param_1 + unaff_SPL;
  cVar3 = (char)uVar4;
  *pcVar6 = *pcVar6 + cVar3;
  pcVar1 = (char *)(lVar5 + -0x4fffec76);
  *pcVar1 = *pcVar1 + (char)(uVar4 >> 8);
  cVar2 = *unaff_RBX;
  *(char *)(unaff_RDI + unaff_RBP * 2) = *(char *)(unaff_RDI + unaff_RBP * 2) + cVar3;
  *param_1 = *param_1 + unaff_SPL;
  *pcVar6 = *pcVar6 + cVar3;
  pcVar6[-0x5dffec76] = pcVar6[-0x5dffec76] + cVar2;
  cVar3 = cVar3 + (char)param_1;
  uVar4 = CONCAT31((int3)(uVar4 >> 8),cVar3);
  puVar7 = (uint *)(ulonglong)uVar4;
  param_1 = param_1 + -1;
  if (param_1 == (char *)0x0 || cVar3 == '\0') {
    *param_1 = *param_1 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar7 = *puVar7 & uVar4;
  *(char *)puVar7 = (char)*puVar7 + cVar3;
  *unaff_RDI = *unaff_RSI;
  *(char *)((longlong)unaff_RSI + -0x6e) =
       *(char *)((longlong)unaff_RSI + -0x6e) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

