// Function: FUN_1404ca2d0
// Addr: 1404ca2d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca2d0(int param_1,longlong param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  pbVar2 = unaff_RDI + 2;
  unaff_RDI[1] = unaff_RSI[1];
  uVar3 = uRam341c000a1c01004c;
  pbVar5 = (byte *)(ulonglong)uRam341c000a1c01004c;
  bVar1 = *pbVar5;
  bVar4 = (byte)uRam341c000a1c01004c;
  *pbVar5 = *pbVar5 + bVar4;
  *pbVar2 = *pbVar2 >> 1 | *pbVar2 << 7;
  *(int *)(unaff_RSI +
          (ulonglong)
          (CONCAT31((int3)(uVar3 >> 8),(bVar4 + 0x8e) - CARRY1(bVar1,bVar4)) + 0x11e013f0 +
          (uint)(bVar4 < 0x72 || (byte)(bVar4 + 0x8e) < CARRY1(bVar1,bVar4))) + 2) =
       *(int *)(unaff_RSI +
               (ulonglong)
               (CONCAT31((int3)(uVar3 >> 8),(bVar4 + 0x8e) - CARRY1(bVar1,bVar4)) + 0x11e013f0 +
               (uint)(bVar4 < 0x72 || (byte)(bVar4 + 0x8e) < CARRY1(bVar1,bVar4))) + 2) + param_1;
  *(char *)(param_2 * 3) = *(char *)(param_2 * 3) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

