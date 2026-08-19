// Function: FUN_1404b8aa4
// Addr: 1404b8aa4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b8aaa) overlaps instruction at (ram,0x0001404b8aa4)
    */

void FUN_1404b8aa4(uint param_1)

{
  byte bVar1;
  undefined8 in_RAX;
  byte *pbVar2;
  uint *unaff_RBX;
  
  bVar1 = bRam94001e8aeb001e8a;
  pbVar2 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bRam94001e8aeb001e8a);
  *unaff_RBX = param_1;
  *pbVar2 = *pbVar2 | bVar1;
  if ((param_1 & (uint)&stack0x00000000) == 1 || *pbVar2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

