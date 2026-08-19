// Function: FUN_1404c5b74
// Addr: 1404c5b74
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5b74(byte *param_1,char *param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint *puVar4;
  undefined3 uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  uint in_EAX;
  undefined4 uVar9;
  char *pcVar12;
  byte bVar13;
  char unaff_BL;
  int *unaff_RSI;
  int unaff_EDI;
  uint uVar3;
  char *pcVar10;
  ulonglong uVar11;
  
  bVar7 = *param_1;
  *param_1 = *param_1 - 0x1d;
  *unaff_RSI = (*unaff_RSI - unaff_EDI) - (uint)(0x1c < bVar7);
  *param_1 = *param_1 + unaff_BL;
  if (*param_1 != 0) {
    *param_2 = *param_2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam00000000c04c61c1 = cRam00000000c04c61c1 + (char)unaff_EDI;
  uVar5 = (undefined3)((uint)unaff_EDI >> 8);
  bVar7 = in(0x2e);
  pcVar10 = (char *)(ulonglong)CONCAT31(uVar5,bVar7);
  pcVar12 = (char *)((ulonglong)in_EAX - 0x7fffd11c);
  bVar13 = (byte)param_2;
  *pcVar12 = *pcVar12 + bVar13;
  param_1 = param_1 + -1;
  if (param_1 == (byte *)0x0 || *pcVar12 != '\0') {
    *param_1 = *param_1 + (char)((uint)unaff_EDI >> 8);
    *pcVar10 = *pcVar10 + bVar7;
    pcVar10[-0x68ffd11c] = pcVar10[-0x68ffd11c] + bVar7;
    bVar8 = in(0x2e);
    uVar6 = CONCAT31(uVar5,bVar8);
    uVar11 = (ulonglong)uVar6;
    pbVar1 = (byte *)(uVar11 + 0x210049e1);
    bVar7 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar8;
    puVar4 = (uint *)(uVar11 * 2);
    uVar2 = *puVar4;
    uVar3 = *puVar4;
    *puVar4 = uVar3 + uVar6 + (uint)CARRY1(bVar7,bVar8);
    *(uint *)(param_1 + uVar11) =
         *(int *)(param_1 + uVar11) + (int)param_2 +
         (uint)(CARRY4(uVar2,uVar6) || CARRY4(uVar3 + uVar6,(uint)CARRY1(bVar7,bVar8)));
    uVar9 = in(0x2e);
    *param_1 = *param_1 + bVar13;
    out(0x2e,(char)uVar9);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar7 = bVar7 & bVar13;
  uVar2 = CONCAT31(uVar5,bVar7);
  pcVar12 = (char *)(ulonglong)uVar2;
  *pcVar12 = *pcVar12 + unaff_BL;
  *pcVar12 = *pcVar12 + bVar7;
  *(uint *)(param_1 + (longlong)pcVar12) = *(int *)(param_1 + (longlong)pcVar12) + uVar2;
  *param_2 = *param_2 + bVar7;
  *pcVar12 = *pcVar12 + bVar7;
  uRam00000001a4515bf8 = uRam00000001a4515bf8 & uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

