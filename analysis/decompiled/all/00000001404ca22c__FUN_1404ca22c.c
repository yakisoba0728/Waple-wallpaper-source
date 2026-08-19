// Function: FUN_1404ca22c
// Addr: 1404ca22c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca22c(char *param_1,longlong param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  uint uVar3;
  byte bVar4;
  char cVar7;
  byte *in_RAX;
  undefined7 uVar8;
  byte *pbVar6;
  undefined4 unaff_ESP;
  undefined4 unaff_00000024;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  char unaff_R12B;
  byte *pbVar5;
  
  cVar7 = (char)((ulonglong)in_RAX >> 8);
  param_1[0x21004c] = param_1[0x21004c] - cVar7;
  *in_RAX = *in_RAX + (byte)in_RAX;
  unaff_RSI[-0x5995ffce] = unaff_RSI[-0x5995ffce] - cVar7;
  uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar4 = (byte)in_RAX ^ *in_RAX;
  pbVar5 = (byte *)CONCAT71(uVar8,bVar4);
  param_1[0x21004c] = param_1[0x21004c] + cVar7;
  bVar1 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar4;
  unaff_RSI[-0x59d7ffce] = unaff_RSI[-0x59d7ffce] + cVar7 + CARRY1(bVar1,bVar4);
  if ((bVar4 ^ *pbVar5) != 0) {
    *param_1 = *param_1 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar2 = (undefined1 *)(CONCAT71(uVar8,bVar4 ^ *pbVar5) * 2);
  *puVar2 = *puVar2;
  param_1[CONCAT44(unaff_00000024,unaff_ESP)] =
       param_1[CONCAT44(unaff_00000024,unaff_ESP)] + (char)((ulonglong)param_2 >> 8);
  param_1[param_2] = param_1[param_2] + cVar7;
  *unaff_RDI = *unaff_RSI;
  pbVar5 = unaff_RDI + 2;
  unaff_RDI[1] = unaff_RSI[1];
  uVar3 = uRam341c000a1c01004c;
  pbVar6 = (byte *)(ulonglong)uRam341c000a1c01004c;
  bVar1 = *pbVar6;
  bVar4 = (byte)uRam341c000a1c01004c;
  *pbVar6 = *pbVar6 + bVar4;
  *pbVar5 = *pbVar5 >> 1 | *pbVar5 << 7;
  *(int *)(unaff_RSI +
          (ulonglong)
          (CONCAT31((int3)(uVar3 >> 8),(bVar4 + 0x8e) - CARRY1(bVar1,bVar4)) + 0x11e013f0 +
          (uint)(bVar4 < 0x72 || (byte)(bVar4 + 0x8e) < CARRY1(bVar1,bVar4))) + 2) =
       *(int *)(unaff_RSI +
               (ulonglong)
               (CONCAT31((int3)(uVar3 >> 8),(bVar4 + 0x8e) - CARRY1(bVar1,bVar4)) + 0x11e013f0 +
               (uint)(bVar4 < 0x72 || (byte)(bVar4 + 0x8e) < CARRY1(bVar1,bVar4))) + 2) +
       (int)param_1;
  *(char *)(param_2 * 3) = *(char *)(param_2 * 3) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

