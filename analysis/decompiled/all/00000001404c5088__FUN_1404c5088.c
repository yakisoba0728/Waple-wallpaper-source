// Function: FUN_1404c5088
// Addr: 1404c5088
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5088(longlong param_1,uint *param_2)

{
  int *piVar1;
  char *pcVar2;
  undefined3 uVar3;
  uint uVar4;
  uint uVar5;
  uint *in_RAX;
  byte *pbVar6;
  byte bVar8;
  char *pcVar7;
  undefined1 uVar9;
  byte bVar10;
  undefined2 uVar11;
  undefined4 uVar12;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  bool bVar13;
  
  uVar12 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar11 = (undefined2)((ulonglong)param_2 >> 0x10);
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  uVar9 = SUB81(param_2,0);
  *param_2 = *param_2 & (uint)param_1;
  uVar4 = (uint)in_RAX;
  *in_RAX = *in_RAX | uVar4;
  uVar5 = uVar4 + 0xa2000bc4;
  pbVar6 = (byte *)(ulonglong)uVar5;
  pcVar7 = (char *)(param_1 + -1);
  if (pcVar7 == (char *)0x0 || uVar5 != 0) {
    bVar8 = (byte)((ulonglong)pcVar7 >> 8);
    bVar13 = CARRY1(bVar10,bVar8);
    bVar10 = bVar10 + bVar8;
    bVar8 = (byte)uVar5;
    if (param_1 + -2 == 0 || bVar10 != 0) {
      pcVar7 = (char *)(unaff_RDI + 0x21004c + (param_1 + -2) * 2);
      *pcVar7 = *pcVar7 + (char)(uVar5 >> 8);
      *pbVar6 = *pbVar6 + bVar8;
      bRama4002de1ee002de1 = bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(*unaff_RSI,CONCAT11(bVar10,uVar9));
    pcVar7 = (char *)(param_1 + -3);
    if (pcVar7 != (char *)0x0 && bVar10 == 0) {
      piVar1 = (int *)(CONCAT44(uVar12,CONCAT22(uVar11,CONCAT11(bVar10,uVar9))) + 0x1c01300d);
      *piVar1 = *piVar1 + CONCAT22(uVar11,CONCAT11(bVar10,uVar9)) + (uint)bVar13;
      *pbVar6 = *pbVar6 | bVar8;
      uVar3 = (undefined3)(uVar5 >> 8);
      uVar4 = CONCAT31(uVar3,bVar8 + 0x8c);
      *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 | uVar4;
      pbVar6 = (byte *)(ulonglong)CONCAT31(uVar3,bVar8 + 0x28);
      *pbVar6 = *pbVar6 | bVar8 + 0x28;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    pbVar6 = (byte *)(ulonglong)(uVar4 + 0x741e9cc4);
  }
  pcVar2 = (char *)(unaff_RDI + 0x4c + (longlong)pcVar7 * 2);
  *pcVar2 = *pcVar2 + (char)((ulonglong)pcVar7 >> 8);
  *pcVar7 = *pcVar7 + (char)((ulonglong)pbVar6 >> 8);
  *(char *)CONCAT44(uVar12,CONCAT22(uVar11,CONCAT11(bVar10,uVar9))) =
       *(char *)CONCAT44(uVar12,CONCAT22(uVar11,CONCAT11(bVar10,uVar9))) + (char)pbVar6;
  *pbVar6 = *pbVar6 + (char)pbVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

