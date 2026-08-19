// Function: FUN_1404a33b8
// Addr: 1404a33b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a33cb) overlaps instruction at (ram,0x0001404a33ca)
    */

void FUN_1404a33b8(char *param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined8 in_RAX;
  byte *unaff_RBX;
  uint uVar5;
  char *unaff_RSI;
  uint *unaff_RDI;
  char in_CF;
  undefined1 auStack_8 [8];
  byte *pbVar4;
  
  uVar5 = (uint)&stack0x00000000;
  cVar2 = *unaff_RSI + 'J' + in_CF;
  *param_1 = *param_1 + cVar2;
  uVar3 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2) | uRam00000001478c3ec3;
  pbVar4 = (byte *)(ulonglong)uVar3;
  param_1 = param_1 + -1;
  if (param_1 == (char *)0x0 || uVar3 == 0) {
    bVar1 = *unaff_RBX;
    *unaff_RBX = *unaff_RBX << 1 | (char)bVar1 < '\0';
    if ((char)bVar1 < '\0' != (char)*unaff_RBX < '\0') {
      *param_1 = *param_1 + (char)(uVar3 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar5 = (uint)auStack_8;
  }
  *pbVar4 = *pbVar4 + (byte)uVar3;
  *unaff_RDI = *unaff_RDI & uVar5;
  *pbVar4 = *pbVar4 | (byte)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

