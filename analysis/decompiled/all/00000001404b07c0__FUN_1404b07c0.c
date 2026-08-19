// Function: FUN_1404b07c0
// Addr: 1404b07c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b07c0(undefined8 param_1,char param_2)

{
  uint uVar1;
  undefined8 in_RAX;
  longlong unaff_RBP;
  byte in_CF;
  byte *pbVar2;
  
  uVar1 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),0x83) + 0x1583b800 + (uint)in_CF;
  pbVar2 = (byte *)(ulonglong)uVar1;
  pbVar2[unaff_RBP + 0x2221004b] = pbVar2[unaff_RBP + 0x2221004b] + param_2;
  *pbVar2 = *pbVar2 | (byte)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

