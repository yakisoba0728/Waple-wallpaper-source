// Function: FUN_1404c2090
// Addr: 1404c2090
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c2090(undefined8 param_1,ulonglong param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  uint *unaff_RDI;
  
  bVar3 = (byte)((ulonglong)param_1 >> 8);
  pbVar2 = (byte *)(param_2 & 0xffffffff);
  *pbVar2 = *pbVar2 + (char)pbVar2;
  bVar1 = *pbVar2;
  *pbVar2 = *pbVar2 + bVar3;
  *unaff_RDI = *unaff_RDI >> 1 | (uint)CARRY1(bVar1,bVar3) << 0x1f;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

