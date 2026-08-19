// Function: FUN_1404b77e0
// Addr: 1404b77e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b7836) overlaps instruction at (ram,0x0001404b782d)
    */
/* WARNING: Removing unreachable block (ram,0x0001404b7836) */

void FUN_1404b77e0(char *param_1,longlong param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  uint uVar3;
  byte bVar5;
  uint in_EAX;
  byte *pbVar4;
  char *unaff_RDI;
  
  uRam00000001745077e8 = uRam00000001745077e8 & in_EAX;
  puVar1 = (undefined1 *)(param_2 + 0x2100 + (longlong)param_1 * 2);
  *puVar1 = *puVar1;
  puVar1 = (undefined1 *)(param_2 + 0x60f0100 + (longlong)param_1 * 2);
  *puVar1 = *puVar1;
  *unaff_RDI = *unaff_RDI + (char)param_1;
  param_1[-0x7ea6ffe3] = param_1[-0x7ea6ffe3] & (char)in_EAX + 2U;
  uVar3 = (in_EAX | 0xb920f00) + 0xe88dcc02;
  pbVar4 = (byte *)(ulonglong)uVar3;
  bVar5 = (byte)(uVar3 >> 8);
  *param_1 = *param_1 + bVar5;
  *pbVar4 = *pbVar4 + (char)uVar3;
  bVar2 = *pbVar4;
  *pbVar4 = *pbVar4 + bVar5;
  iRam000000015dccd137 = (iRam000000015dccd137 + -0x4b773400) - (uint)CARRY1(bVar2,bVar5);
  *param_1 = *param_1 + (char)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

