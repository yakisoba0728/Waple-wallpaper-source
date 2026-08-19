// Function: FUN_1404b77bc
// Addr: 1404b77bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b7836) overlaps instruction at (ram,0x0001404b782d)
    */
/* WARNING: Removing unreachable block (ram,0x0001404b7836) */

void FUN_1404b77bc(char *param_1,longlong param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  byte bVar3;
  int in_EAX;
  uint uVar4;
  char *unaff_RSI;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  byte in_CF;
  byte *pbVar5;
  
  uVar4 = (in_EAX + -0x4b76b800) - (uint)in_CF;
  *param_1 = *param_1 + (char)(uVar4 >> 8);
  *unaff_RSI = *unaff_RSI + (char)uVar4;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
  bVar3 = in(0x11);
  uVar4 = CONCAT31((int3)(uVar4 >> 8),bVar3);
  pbVar5 = (byte *)(ulonglong)uVar4;
  bVar2 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar3;
  pbVar5[in_FS_OFFSET] = pbVar5[in_FS_OFFSET] + bVar3 + CARRY1(bVar2,bVar3);
  unaff_RDI[(longlong)param_1] = unaff_RDI[(longlong)param_1] + (char)param_2;
  *param_1 = *param_1 + (char)(uVar4 + 0xb4894800 >> 8);
  puVar1 = (undefined1 *)(param_2 + 0x2100 + (longlong)param_1 * 2);
  *puVar1 = *puVar1;
  puVar1 = (undefined1 *)(param_2 + 0x60f0100 + (longlong)param_1 * 2);
  *puVar1 = *puVar1;
  *unaff_RDI = *unaff_RDI + (char)param_1;
  param_1[-0x7ea6ffe3] = param_1[-0x7ea6ffe3] & (char)(uVar4 + 0xe88e4802) + 2U;
  uVar4 = (uVar4 + 0xe88e4802 | 0xb920f00) + 0xe88dcc02;
  pbVar5 = (byte *)(ulonglong)uVar4;
  bVar3 = (byte)(uVar4 >> 8);
  *param_1 = *param_1 + bVar3;
  *pbVar5 = *pbVar5 + (char)uVar4;
  bVar2 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar3;
  iRam000000015dccd137 = (iRam000000015dccd137 + -0x4b773400) - (uint)CARRY1(bVar2,bVar3);
  *param_1 = *param_1 + (char)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

