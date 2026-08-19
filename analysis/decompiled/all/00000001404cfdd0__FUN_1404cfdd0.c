// Function: FUN_1404cfdd0
// Addr: 1404cfdd0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cfe1b) overlaps instruction at (ram,0x0001404cfe1a)
    */
/* WARNING: Removing unreachable block (ram,0x0001404cfe65) */
/* WARNING: Removing unreachable block (ram,0x0001404cfebb) */
/* WARNING: Removing unreachable block (ram,0x0001404cfec0) */
/* WARNING: Removing unreachable block (ram,0x0001404cfec9) */
/* WARNING: Removing unreachable block (ram,0x0001404cfecf) */
/* WARNING: Removing unreachable block (ram,0x0001404cfed7) */
/* WARNING: Removing unreachable block (ram,0x0001404cfeea) */

void FUN_1404cfdd0(longlong param_1,int *param_2)

{
  char *pcVar1;
  ulonglong in_RAX;
  byte *pbVar2;
  byte bVar3;
  byte unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  char *unaff_RSI;
  int *unaff_RDI;
  char unaff_R13B;
  
  bVar3 = (byte)param_1;
  *(byte *)param_2 = (char)*param_2 + bVar3;
  pbVar2 = (byte *)(in_RAX | 0x50);
  if ((byte)((byte)in_RAX | 0x50) == 0) {
    *(byte *)unaff_RDI = (char)*unaff_RDI + bVar3;
    pcVar1 = (char *)(unaff_RBP + 0x4c + (longlong)unaff_RDI * 8);
    *pcVar1 = *pcVar1 + (bVar3 ^ *(byte *)CONCAT71(unaff_00000019,unaff_BL));
    pbVar2[0x31] = pbVar2[0x31] + (char)((ulonglong)param_1 >> 8);
  }
  else {
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + (char)(in_RAX >> 8);
    if (!SBORROW4(*param_2,(int)pbVar2)) {
      *unaff_RSI = *unaff_RSI + (char)unaff_RBP;
      pbVar2[0x3a10002b] = pbVar2[0x3a10002b];
      uRam000000014a5346ff = uRam000000014a5346ff << 0xe | uRam000000014a5346ff >> 0x12;
      bRam00000001487b0801 = bRam00000001487b0801 | unaff_BL;
      bVar3 = *pbVar2;
      *pbVar2 = *pbVar2 + (byte)pbVar2;
      *unaff_RDI = (*unaff_RDI - (int)param_1) - (uint)CARRY1(bVar3,(byte)pbVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  pbVar2[0x31] = pbVar2[0x31] + unaff_R13B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

