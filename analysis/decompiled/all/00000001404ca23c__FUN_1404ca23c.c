// Function: FUN_1404ca23c
// Addr: 1404ca23c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca23c(char *param_1,longlong param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  uint uVar4;
  byte bVar5;
  char cVar7;
  byte *in_RAX;
  byte *pbVar6;
  undefined4 unaff_ESP;
  undefined4 unaff_00000024;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  char unaff_R12B;
  char in_CF;
  
  cVar7 = (char)((ulonglong)in_RAX >> 8);
  param_1[0x21004c] = param_1[0x21004c] + cVar7 + in_CF;
  bVar1 = *in_RAX;
  bVar5 = (byte)in_RAX;
  *in_RAX = *in_RAX + bVar5;
  unaff_RSI[-0x59d7ffce] = unaff_RSI[-0x59d7ffce] + cVar7 + CARRY1(bVar1,bVar5);
  if ((bVar5 ^ *in_RAX) != 0) {
    *param_1 = *param_1 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar3 = (undefined1 *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar5 ^ *in_RAX) * 2);
  *puVar3 = *puVar3;
  param_1[CONCAT44(unaff_00000024,unaff_ESP)] =
       param_1[CONCAT44(unaff_00000024,unaff_ESP)] + (char)((ulonglong)param_2 >> 8);
  param_1[param_2] = param_1[param_2] + cVar7;
  *unaff_RDI = *unaff_RSI;
  pbVar2 = unaff_RDI + 2;
  unaff_RDI[1] = unaff_RSI[1];
  uVar4 = uRam341c000a1c01004c;
  pbVar6 = (byte *)(ulonglong)uRam341c000a1c01004c;
  bVar1 = *pbVar6;
  bVar5 = (byte)uRam341c000a1c01004c;
  *pbVar6 = *pbVar6 + bVar5;
  *pbVar2 = *pbVar2 >> 1 | *pbVar2 << 7;
  *(int *)(unaff_RSI +
          (ulonglong)
          (CONCAT31((int3)(uVar4 >> 8),(bVar5 + 0x8e) - CARRY1(bVar1,bVar5)) + 0x11e013f0 +
          (uint)(bVar5 < 0x72 || (byte)(bVar5 + 0x8e) < CARRY1(bVar1,bVar5))) + 2) =
       *(int *)(unaff_RSI +
               (ulonglong)
               (CONCAT31((int3)(uVar4 >> 8),(bVar5 + 0x8e) - CARRY1(bVar1,bVar5)) + 0x11e013f0 +
               (uint)(bVar5 < 0x72 || (byte)(bVar5 + 0x8e) < CARRY1(bVar1,bVar5))) + 2) +
       (int)param_1;
  *(char *)(param_2 * 3) = *(char *)(param_2 * 3) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

