// Function: FUN_1404ca2c0
// Addr: 1404ca2c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca2c0(longlong param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  undefined8 in_RAX;
  byte *pbVar6;
  undefined4 unaff_ESP;
  undefined4 unaff_00000024;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  pcVar1 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + param_1);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + (char)((ulonglong)in_RAX >> 8);
  *unaff_RDI = *unaff_RSI;
  pbVar3 = unaff_RDI + 2;
  unaff_RDI[1] = unaff_RSI[1];
  uVar4 = uRam341c000a1c01004c;
  pbVar6 = (byte *)(ulonglong)uRam341c000a1c01004c;
  bVar2 = *pbVar6;
  bVar5 = (byte)uRam341c000a1c01004c;
  *pbVar6 = *pbVar6 + bVar5;
  *pbVar3 = *pbVar3 >> 1 | *pbVar3 << 7;
  *(int *)(unaff_RSI +
          (ulonglong)
          (CONCAT31((int3)(uVar4 >> 8),(bVar5 + 0x8e) - CARRY1(bVar2,bVar5)) + 0x11e013f0 +
          (uint)(bVar5 < 0x72 || (byte)(bVar5 + 0x8e) < CARRY1(bVar2,bVar5))) + 2) =
       *(int *)(unaff_RSI +
               (ulonglong)
               (CONCAT31((int3)(uVar4 >> 8),(bVar5 + 0x8e) - CARRY1(bVar2,bVar5)) + 0x11e013f0 +
               (uint)(bVar5 < 0x72 || (byte)(bVar5 + 0x8e) < CARRY1(bVar2,bVar5))) + 2) +
       (int)param_1;
  *(char *)(param_2 * 3) = *(char *)(param_2 * 3) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

