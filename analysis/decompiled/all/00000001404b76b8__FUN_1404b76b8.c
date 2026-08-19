// Function: FUN_1404b76b8
// Addr: 1404b76b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404b76f7) */

void FUN_1404b76b8(char *param_1,longlong param_2,undefined8 param_3,undefined1 *param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar6;
  byte *in_RAX;
  int *piVar4;
  byte *pbVar5;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  char unaff_BL;
  longlong unaff_RSI;
  char *unaff_RDI;
  
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  bVar8 = (byte)param_2;
  bVar7 = (byte)param_1;
  *in_RAX = *in_RAX + unaff_BL;
  bVar6 = (byte)((ulonglong)in_RAX >> 8);
  if (*in_RAX == 0) {
    *param_1 = *param_1 + bVar6;
    *in_RAX = *in_RAX + (char)in_RAX;
    bVar6 = *in_RAX;
    *in_RAX = *in_RAX + bVar9;
    uVar2 = in((short)param_2);
    *(undefined4 *)unaff_RDI = uVar2;
    uVar3 = ((int)in_RAX + -0x1d6d6900) - (uint)CARRY1(bVar6,bVar9);
    pcVar1 = (char *)(unaff_RSI * 2 + 0x1001004b);
    *pcVar1 = *pcVar1 + bVar7;
    piVar4 = (int *)(ulonglong)uVar3;
    *(char *)(param_2 * 2) = *(char *)(param_2 * 2) + bVar9;
    *(byte *)piVar4 = (char)*piVar4 + bVar8;
    pbVar5 = (byte *)((longlong)piVar4 + unaff_RSI * 2);
    *pbVar5 = *pbVar5 >> (bVar7 & 7) | *pbVar5 << 8 - (bVar7 & 7);
    *(int *)(unaff_RSI + (longlong)piVar4) = *(int *)(unaff_RSI + (longlong)piVar4) + (int)param_2;
    pbVar5 = (byte *)(param_1 + (longlong)piVar4);
    bVar6 = *pbVar5;
    *pbVar5 = *pbVar5 + bVar8;
    *piVar4 = *piVar4 + uVar3 + (uint)CARRY1(bVar6,bVar8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4;
  *in_RAX = *in_RAX + (char)in_RAX;
  pbVar5 = in_RAX + 0x77;
  bVar9 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar6;
  uVar3 = ((int)in_RAX + -0x1d77a800) - (uint)CARRY1(bVar9,bVar6);
  pbVar5 = (byte *)(ulonglong)uVar3;
  bVar6 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar8;
  if (CARRY1(bVar6,bVar8) || *pbVar5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + (char)uVar3;
  *unaff_RDI = *unaff_RDI + bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

