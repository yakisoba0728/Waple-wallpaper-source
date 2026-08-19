// Function: FUN_1404aede4
// Addr: 1404aede4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404aee12) overlaps instruction at (ram,0x0001404aee10)
    */

void FUN_1404aede4(char *param_1,byte *param_2)

{
  byte *pbVar1;
  undefined3 uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint *puVar7;
  char cVar8;
  uint unaff_EBX;
  longlong unaff_RBP;
  char *unaff_RSI;
  char *pcVar6;
  
  cVar8 = (char)((ulonglong)param_2 >> 8);
  uVar5 = in(0x49);
  *param_1 = *param_1 + (char)(uVar5 >> 8);
  *unaff_RSI = *unaff_RSI + (char)uVar5;
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)uVar5;
  uVar2 = (undefined3)(uVar5 >> 8);
  cVar3 = in(8);
  pcVar6 = (char *)(ulonglong)CONCAT31(uVar2,cVar3);
  *pcVar6 = *pcVar6 + cVar3;
  if (*pcVar6 == '\0') {
    uVar5 = in(0x49);
    puVar7 = (uint *)(ulonglong)uVar5;
  }
  else {
    *pcVar6 = *pcVar6 + cVar3;
    puVar7 = (uint *)((ulonglong)CONCAT31(uVar2,cVar3) ^ 0xd);
    pbVar1 = (byte *)((longlong)puVar7 + -0x2affec83);
    bVar4 = *pbVar1;
    *pbVar1 = *pbVar1 + cVar8;
    if (SCARRY1(bVar4,cVar8) == (char)*pbVar1 < '\0') {
      *puVar7 = *puVar7 | (uint)puVar7;
    }
  }
  *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + (char)((ulonglong)puVar7 >> 8);
  bVar4 = (byte)puVar7;
  *param_1 = *param_1 + bVar4;
  *param_2 = *param_2 | bVar4;
  *(byte *)puVar7 = (byte)*puVar7 + (char)param_1;
  *puVar7 = *puVar7 & unaff_EBX;
  *(byte *)puVar7 = (byte)*puVar7 | bVar4;
  *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) - cVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

