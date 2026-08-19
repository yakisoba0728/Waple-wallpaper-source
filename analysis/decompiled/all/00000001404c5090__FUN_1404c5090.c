// Function: FUN_1404c5090
// Addr: 1404c5090
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5090(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  char *pcVar2;
  undefined3 uVar3;
  int in_EAX;
  uint uVar4;
  byte *pbVar5;
  byte bVar7;
  char *pcVar6;
  undefined1 uVar8;
  byte bVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  bool bVar12;
  
  uVar11 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar10 = (undefined2)((ulonglong)param_2 >> 0x10);
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  uVar8 = (undefined1)param_2;
  uVar4 = in_EAX + 0xa2000bc4;
  pbVar5 = (byte *)(ulonglong)uVar4;
  pcVar6 = (char *)(param_1 + -1);
  if (pcVar6 == (char *)0x0 || uVar4 != 0) {
    bVar7 = (byte)((ulonglong)pcVar6 >> 8);
    bVar12 = CARRY1(bVar9,bVar7);
    bVar9 = bVar9 + bVar7;
    bVar7 = (byte)uVar4;
    if (param_1 + -2 == 0 || bVar9 != 0) {
      pcVar6 = (char *)(unaff_RDI + 0x21004c + (param_1 + -2) * 2);
      *pcVar6 = *pcVar6 + (char)(uVar4 >> 8);
      *pbVar5 = *pbVar5 + bVar7;
      bRama4002de1ee002de1 = bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(*unaff_RSI,CONCAT11(bVar9,uVar8));
    pcVar6 = (char *)(param_1 + -3);
    if (pcVar6 != (char *)0x0 && bVar9 == 0) {
      piVar1 = (int *)(CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(bVar9,uVar8))) + 0x1c01300d);
      *piVar1 = *piVar1 + CONCAT22(uVar10,CONCAT11(bVar9,uVar8)) + (uint)bVar12;
      *pbVar5 = *pbVar5 | bVar7;
      uVar3 = (undefined3)(uVar4 >> 8);
      uVar4 = CONCAT31(uVar3,bVar7 + 0x8c);
      *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 | uVar4;
      pbVar5 = (byte *)(ulonglong)CONCAT31(uVar3,bVar7 + 0x28);
      *pbVar5 = *pbVar5 | bVar7 + 0x28;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    pbVar5 = (byte *)(ulonglong)(in_EAX + 0x741e9cc4);
  }
  pcVar2 = (char *)(unaff_RDI + 0x4c + (longlong)pcVar6 * 2);
  *pcVar2 = *pcVar2 + (char)((ulonglong)pcVar6 >> 8);
  *pcVar6 = *pcVar6 + (char)((ulonglong)pbVar5 >> 8);
  *(char *)CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(bVar9,uVar8))) =
       *(char *)CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(bVar9,uVar8))) + (char)pbVar5;
  *pbVar5 = *pbVar5 + (char)pbVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

