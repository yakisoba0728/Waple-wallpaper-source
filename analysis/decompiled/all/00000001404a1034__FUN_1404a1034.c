// Function: FUN_1404a1034
// Addr: 1404a1034
// Size: 1 bytes


void FUN_1404a1034(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte bVar2;
  undefined3 uVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  int *in_RAX;
  int *piVar7;
  uint *puVar8;
  char cVar9;
  longlong unaff_RBP;
  char *unaff_RSI;
  undefined2 in_DS;
  char cStackX_8;
  
  cVar9 = (char)((ulonglong)param_2 >> 8);
  *(undefined2 *)(unaff_RBP + -0x624dfffd) = in_DS;
  uVar6 = (int)in_RAX + *in_RAX;
  *param_1 = *param_1;
  pbVar4 = (byte *)((ulonglong)uVar6 * 2);
  bVar2 = *pbVar4;
  bVar5 = (byte)uVar6;
  *pbVar4 = *pbVar4 - bVar5;
  uVar6 = CONCAT22((short)(uVar6 >> 0x10),
                   CONCAT11(((char)(uVar6 >> 8) - (char)param_2) - (bVar2 < bVar5),bVar5));
  *(uint *)(ulonglong)uVar6 = *(uint *)(ulonglong)uVar6 | uVar6;
  uVar3 = (undefined3)(uVar6 >> 8);
  uVar6 = CONCAT31(uVar3,bVar5 - 0x3c | *(byte *)(ulonglong)CONCAT31(uVar3,bVar5 - 0x3c));
  uVar6 = uVar6 + *(int *)(ulonglong)uVar6;
  piVar7 = (int *)(ulonglong)uVar6;
  *param_1 = *param_1;
  *(char *)piVar7 = (char)*piVar7 + (char)uVar6;
  pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(cVar9,0x9d)) + -0x25fffc63)
  ;
  *pcVar1 = *pcVar1 + cVar9;
  uVar6 = uVar6 + *piVar7;
  if ((POPCOUNT(uVar6 & 0xff) & 1U) == 0) {
    uVar6 = *(uint *)(ulonglong)uVar6;
  }
  puVar8 = (uint *)(ulonglong)uVar6;
  *puVar8 = *puVar8 & uVar6;
  *(char *)puVar8 = (char)*puVar8 + (char)uVar6;
  *(undefined2 *)(unaff_RBP + -0x624dfffd) = in_DS;
  uVar6 = uVar6 + *puVar8;
  piVar7 = (int *)(ulonglong)uVar6;
  *param_1 = *param_1 + cStackX_8;
  *(char *)piVar7 = (char)*piVar7 + (char)uVar6;
  *(char *)((longlong)piVar7 + -99) = *(char *)((longlong)piVar7 + -99) + cVar9;
  uVar6 = uVar6 + *piVar7;
  *(undefined2 *)(unaff_RBP + -0x1a9bfffd) = in_DS;
  *param_4 = *param_4 + cStackX_8;
  *unaff_RSI = *unaff_RSI + (char)param_1;
  *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)uVar6;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

