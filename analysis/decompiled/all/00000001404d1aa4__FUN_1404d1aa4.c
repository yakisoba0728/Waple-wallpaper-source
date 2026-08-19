// Function: FUN_1404d1aa4
// Addr: 1404d1aa4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1aa4(longlong param_1,char *param_2,undefined8 param_3,char *param_4)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  char *in_RAX;
  byte *pbVar4;
  char cVar6;
  char *pcVar5;
  char *unaff_RBX;
  undefined8 *puVar7;
  char *unaff_RSI;
  undefined1 *puVar8;
  
  while( true ) {
    lVar1 = (longlong)*(int *)((longlong)in_RAX * 2) * 0x3c69f9;
    uVar3 = (uint)in_RAX;
    cVar6 = (char)((ulonglong)param_2 >> 8);
    if ((int)lVar1 == lVar1) break;
    uVar3 = uVar3 + 0x3600470;
    pcVar5 = (char *)(ulonglong)uVar3;
    puVar7 = (undefined8 *)((longlong)register0x00000020 + -8);
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    *puVar7 = pcVar5;
    param_2 = (char *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                               CONCAT11(cVar6 + *pcVar5,(char)param_2));
    uRam00000001a8521aa4 = uRam00000001a8521aa4 & uVar3;
    in_RAX = (char *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),(char)uVar3 + *pcVar5);
  }
  *param_4 = *param_4 + (char)register0x00000020;
  cVar2 = (char)in_RAX;
  *in_RAX = *in_RAX + cVar2;
  in_RAX[0x69] = in_RAX[0x69] + cVar2;
  puVar8 = (undefined1 *)(ulonglong)(uint)(*(int *)((longlong)in_RAX * 2) * 0x49e670);
  *(uint *)(unaff_RBX + 0x14) = *(int *)(unaff_RBX + 0x14) + uVar3;
  unaff_RBX[-0x58] = unaff_RBX[-0x58] + cVar2;
  *unaff_RBX = *unaff_RBX + cVar6;
  *puVar8 = (char)param_1;
  cVar6 = (char)((ulonglong)param_1 >> 8);
  *unaff_RSI = *unaff_RSI + cVar6;
  if (-1 < *unaff_RSI) {
    *param_2 = *param_2 + cVar6;
    *(undefined8 *)((longlong)register0x00000020 + -8) = 0x11e0011;
    uVar3 = (uVar3 | 0xe983b00) & 0x15f01700;
    pcVar5 = (char *)(param_1 + -1);
    if (pcVar5 != (char *)0x0 && uVar3 != 0) {
      pbVar4 = (byte *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),0x60);
      *pbVar4 = *pbVar4 ^ 0x60;
      *pcVar5 = *pcVar5 + (char)(uVar3 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pcVar5 = *pcVar5 << 1;
  }
  *puVar8 = *puVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

