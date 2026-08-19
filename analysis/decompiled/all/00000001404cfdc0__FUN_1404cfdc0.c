// Function: FUN_1404cfdc0
// Addr: 1404cfdc0
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

void FUN_1404cfdc0(longlong param_1,int *param_2,char param_3)

{
  char *pcVar1;
  byte bVar2;
  uint *in_RAX;
  byte *pbVar3;
  char cVar4;
  byte unaff_BL;
  undefined7 unaff_00000019;
  int unaff_EBP;
  char *unaff_RSI;
  int unaff_EDI;
  undefined4 unaff_0000003c;
  char in_R11B;
  char unaff_R13B;
  
  cVar4 = (char)((ulonglong)param_1 >> 8);
  *(char *)param_2 = (char)*param_2 + param_3;
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + cVar4;
  cRam000000014a4d4acf = cRam000000014a4d4acf + in_R11B;
  pbVar3 = (byte *)((ulonglong)in_RAX | 0x50);
  if ((byte)((byte)in_RAX | 0x50) == 0) {
    *(byte *)CONCAT44(unaff_0000003c,unaff_EDI) =
         *(char *)CONCAT44(unaff_0000003c,unaff_EDI) + (byte)param_1;
    pcVar1 = (char *)((ulonglong)(uint)(unaff_EBP + unaff_EDI) + 0x4c +
                     CONCAT44(unaff_0000003c,unaff_EDI) * 8);
    *pcVar1 = *pcVar1 + ((byte)param_1 ^ *(byte *)CONCAT71(unaff_00000019,unaff_BL));
    pbVar3[0x31] = pbVar3[0x31] + cVar4;
  }
  else {
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + (char)((ulonglong)in_RAX >> 8);
    if (!SBORROW4(*param_2,(int)pbVar3)) {
      *unaff_RSI = *unaff_RSI + (char)(unaff_EBP + unaff_EDI);
      pbVar3[0x3a10002b] = pbVar3[0x3a10002b];
      uRam000000014a5346ff = uRam000000014a5346ff << 0xe | uRam000000014a5346ff >> 0x12;
      bRam00000001487b0801 = bRam00000001487b0801 | unaff_BL;
      bVar2 = *pbVar3;
      *pbVar3 = *pbVar3 + (byte)pbVar3;
      *(uint *)CONCAT44(unaff_0000003c,unaff_EDI) =
           (*(int *)CONCAT44(unaff_0000003c,unaff_EDI) - (int)param_1) -
           (uint)CARRY1(bVar2,(byte)pbVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  pbVar3[0x31] = pbVar3[0x31] + unaff_R13B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

