// Function: FUN_1404b7694
// Addr: 1404b7694
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404b76f7) */

void FUN_1404b7694(char *param_1,int param_2,undefined8 param_3,undefined1 *param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  byte bVar11;
  uint in_EAX;
  uint uVar6;
  uint *puVar7;
  byte *pbVar8;
  int *piVar9;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte unaff_BL;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  byte in_CF;
  char cVar10;
  
  bVar11 = (byte)((ulonglong)param_1 >> 8);
  bVar12 = (byte)param_1;
  pcVar2 = (char *)(unaff_RDI + 1);
  uVar3 = in((short)in_EAX);
  *unaff_RDI = uVar3;
  uVar6 = (param_2 + -0x1d6dc000) - (uint)in_CF;
  pcVar1 = (char *)(unaff_RSI * 2 + 0x21004b);
  *pcVar1 = *pcVar1 + bVar11;
  cVar5 = (char)uVar6 + *(char *)(ulonglong)uVar6;
  bVar13 = (byte)in_EAX;
  cVar10 = (char)(uVar6 >> 8) + bVar13;
  uVar6 = CONCAT22((short)(uVar6 >> 0x10),CONCAT11(cVar10,cVar5));
  puVar7 = (uint *)(ulonglong)uVar6;
  *puVar7 = *puVar7 ^ uVar6;
  uVar4 = *puVar7;
  *(byte *)puVar7 = (byte)*puVar7 + unaff_BL;
  if ((byte)*puVar7 != 0) {
    uVar3 = LocalDescriptorTableRegister();
    *(undefined4 *)(&stack0x00000000 + unaff_RSI) = uVar3;
    *(byte *)puVar7 = (byte)*puVar7 + cVar5 + CARRY1((byte)uVar4,unaff_BL);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + cVar10;
  *(byte *)puVar7 = (byte)*puVar7 + cVar5;
  pbVar8 = (byte *)(param_1 + 0x6d);
  bVar14 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar11;
  uVar6 = (uVar6 + 0xe2926e00) - (uint)CARRY1(bVar14,bVar11);
  pbVar8 = (byte *)(ulonglong)uVar6;
  *pbVar8 = *pbVar8 + unaff_BL;
  bVar11 = (byte)(uVar6 >> 8);
  if (*pbVar8 != 0) {
    *param_4 = *param_4;
    *pbVar8 = *pbVar8 + (char)uVar6;
    pbVar8 = pbVar8 + 0x77;
    bVar14 = *pbVar8;
    *pbVar8 = *pbVar8 + bVar11;
    uVar6 = (uVar6 + 0xe2885800) - (uint)CARRY1(bVar14,bVar11);
    pbVar8 = (byte *)(ulonglong)uVar6;
    bVar11 = *pbVar8;
    *pbVar8 = *pbVar8 + bVar13;
    if (CARRY1(bVar11,bVar13) || *pbVar8 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *param_1 = *param_1 + (char)uVar6;
    *pcVar2 = *pcVar2 + bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + bVar11;
  *pbVar8 = *pbVar8 + (char)uVar6;
  bVar11 = *pbVar8;
  bVar14 = (byte)(in_EAX >> 8);
  *pbVar8 = *pbVar8 + bVar14;
  uVar3 = in((short)in_EAX);
  *(undefined4 *)pcVar2 = uVar3;
  uVar6 = (uVar6 + 0xe2929700) - (uint)CARRY1(bVar11,bVar14);
  pcVar1 = (char *)(unaff_RSI * 2 + 0x1001004b);
  *pcVar1 = *pcVar1 + bVar12;
  piVar9 = (int *)(ulonglong)uVar6;
  *(char *)((ulonglong)in_EAX * 2) = *(char *)((ulonglong)in_EAX * 2) + bVar14;
  *(byte *)piVar9 = (char)*piVar9 + bVar13;
  pbVar8 = (byte *)((longlong)piVar9 + unaff_RSI * 2);
  *pbVar8 = *pbVar8 >> (bVar12 & 7) | *pbVar8 << 8 - (bVar12 & 7);
  *(int *)(unaff_RSI + (longlong)piVar9) = *(int *)(unaff_RSI + (longlong)piVar9) + in_EAX;
  pbVar8 = (byte *)(param_1 + (longlong)piVar9);
  bVar12 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar13;
  *piVar9 = *piVar9 + uVar6 + (uint)CARRY1(bVar12,bVar13);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

