// Function: FUN_1404ca214
// Addr: 1404ca214
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca214(int *param_1,longlong param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  char cVar8;
  byte *in_RAX;
  undefined7 uVar9;
  byte *pbVar6;
  byte *pbVar7;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  char unaff_R12B;
  char acStack_10 [16];
  uint *puVar5;
  
  acStack_10[8] = -0x5a;
  acStack_10[9] = -1;
  acStack_10[10] = -1;
  acStack_10[0xb] = -1;
  acStack_10[0xc] = -1;
  acStack_10[0xd] = -1;
  acStack_10[0xe] = -1;
  acStack_10[0xf] = -1;
  uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar3 = (byte)in_RAX ^ *in_RAX;
  puVar5 = (uint *)CONCAT71(uVar9,bVar3);
  if ((POPCOUNT(bVar3) & 1U) != 0) {
    *puVar5 = *puVar5 & (uint)puVar5;
    *(byte *)puVar5 = (char)*puVar5 + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = bVar3 ^ (byte)*puVar5;
  pbVar6 = (byte *)CONCAT71(uVar9,bVar3);
  cVar8 = (char)((ulonglong)in_RAX >> 8);
  *(char *)(param_1 + 0x84013) = (char)param_1[0x84013] - cVar8;
  *pbVar6 = *pbVar6 + bVar3;
  acStack_10[0] = -0x5a;
  acStack_10[1] = -1;
  acStack_10[2] = -1;
  acStack_10[3] = -1;
  acStack_10[4] = -1;
  acStack_10[5] = -1;
  acStack_10[6] = -1;
  acStack_10[7] = -1;
  bVar3 = bVar3 ^ *pbVar6;
  if ((POPCOUNT(bVar3) & 1U) == 0) {
    bVar3 = bVar3 ^ *(byte *)CONCAT71(uVar9,bVar3);
    pbVar6 = (byte *)CONCAT71(uVar9,bVar3);
    *(char *)(param_1 + 0x84013) = (char)param_1[0x84013] - cVar8;
    *pbVar6 = *pbVar6 + bVar3;
    unaff_RSI[-0x5995ffce] = unaff_RSI[-0x5995ffce] - cVar8;
    bVar3 = bVar3 ^ *pbVar6;
    pbVar6 = (byte *)CONCAT71(uVar9,bVar3);
    *(char *)(param_1 + 0x84013) = (char)param_1[0x84013] + cVar8;
    bVar4 = *pbVar6;
    *pbVar6 = *pbVar6 + bVar3;
    unaff_RSI[-0x59d7ffce] = unaff_RSI[-0x59d7ffce] + cVar8 + CARRY1(bVar4,bVar3);
    if ((bVar3 ^ *pbVar6) != 0) {
      *(char *)param_1 = (char)*param_1 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar1 = (undefined1 *)(CONCAT71(uVar9,bVar3 ^ *pbVar6) * 2);
    *puVar1 = *puVar1;
    acStack_10[(longlong)param_1] = acStack_10[(longlong)param_1] + (char)((ulonglong)param_2 >> 8);
    *(char *)(param_2 + (longlong)param_1) = *(char *)(param_2 + (longlong)param_1) + cVar8;
    *unaff_RDI = *unaff_RSI;
    pbVar6 = unaff_RDI + 2;
    unaff_RDI[1] = unaff_RSI[1];
    uVar2 = uRam341c000a1c01004c;
    pbVar7 = (byte *)(ulonglong)uRam341c000a1c01004c;
    bVar3 = *pbVar7;
    bVar4 = (byte)uRam341c000a1c01004c;
    *pbVar7 = *pbVar7 + bVar4;
    *pbVar6 = *pbVar6 >> 1 | *pbVar6 << 7;
    *(int *)(unaff_RSI +
            (ulonglong)
            (CONCAT31((int3)(uVar2 >> 8),(bVar4 + 0x8e) - CARRY1(bVar3,bVar4)) + 0x11e013f0 +
            (uint)(bVar4 < 0x72 || (byte)(bVar4 + 0x8e) < CARRY1(bVar3,bVar4))) + 2) =
         *(int *)(unaff_RSI +
                 (ulonglong)
                 (CONCAT31((int3)(uVar2 >> 8),(bVar4 + 0x8e) - CARRY1(bVar3,bVar4)) + 0x11e013f0 +
                 (uint)(bVar4 < 0x72 || (byte)(bVar4 + 0x8e) < CARRY1(bVar3,bVar4))) + 2) +
         (int)param_1;
    *(char *)(param_2 * 3) = *(char *)(param_2 * 3) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + (int)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

