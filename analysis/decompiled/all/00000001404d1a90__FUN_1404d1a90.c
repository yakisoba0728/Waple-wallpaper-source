// Function: FUN_1404d1a90
// Addr: 1404d1a90
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1a90(longlong param_1,char *param_2,undefined8 param_3,char *param_4)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  ulonglong in_RAX;
  int *piVar4;
  byte *pbVar5;
  char *pcVar6;
  char cVar7;
  char *unaff_RBX;
  undefined1 *puVar8;
  char *unaff_RSI;
  undefined1 *puVar9;
  
  piVar4 = (int *)(in_RAX | 1);
  *piVar4 = *piVar4 + (int)piVar4;
  puVar9 = (undefined1 *)register0x00000020;
  do {
    puVar8 = puVar9;
    uVar3 = (int)piVar4 + 0x3600470;
    pcVar6 = (char *)(ulonglong)uVar3;
    *(char **)(puVar8 + -8) = pcVar6;
    cVar7 = (char)((ulonglong)param_2 >> 8) + *pcVar6;
    param_2 = (char *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(cVar7,(char)param_2));
    uRam00000001a8521aa4 = uRam00000001a8521aa4 & uVar3;
    cVar2 = (char)uVar3 + *pcVar6;
    uVar3 = CONCAT31((int3)(uVar3 >> 8),cVar2);
    piVar4 = (int *)(ulonglong)uVar3;
    lVar1 = (longlong)*(int *)((longlong)piVar4 * 2) * 0x3c69f9;
    puVar9 = puVar8 + -8;
  } while ((int)lVar1 != lVar1);
  *param_4 = *param_4 + (char)(puVar8 + -8);
  *(char *)piVar4 = (char)*piVar4 + cVar2;
  *(char *)((longlong)piVar4 + 0x69) = *(char *)((longlong)piVar4 + 0x69) + cVar2;
  puVar9 = (undefined1 *)(ulonglong)(uint)(*(int *)((longlong)piVar4 * 2) * 0x49e670);
  *(uint *)(unaff_RBX + 0x14) = *(int *)(unaff_RBX + 0x14) + uVar3;
  unaff_RBX[-0x58] = unaff_RBX[-0x58] + cVar2;
  *unaff_RBX = *unaff_RBX + cVar7;
  *puVar9 = (char)param_1;
  cVar2 = (char)((ulonglong)param_1 >> 8);
  *unaff_RSI = *unaff_RSI + cVar2;
  if (-1 < *unaff_RSI) {
    *param_2 = *param_2 + cVar2;
    *(undefined8 *)(puVar8 + -0x10) = 0x11e0011;
    uVar3 = (uVar3 | 0xe983b00) & 0x15f01700;
    pcVar6 = (char *)(param_1 + -1);
    if (pcVar6 != (char *)0x0 && uVar3 != 0) {
      pbVar5 = (byte *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),0x60);
      *pbVar5 = *pbVar5 ^ 0x60;
      *pcVar6 = *pcVar6 + (char)(uVar3 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pcVar6 = *pcVar6 << 1;
  }
  *puVar9 = *puVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

