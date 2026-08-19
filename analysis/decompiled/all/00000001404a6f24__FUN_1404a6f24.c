// Function: FUN_1404a6f24
// Addr: 1404a6f24
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a6f25) overlaps instruction at (ram,0x0001404a6f24)
    */

void FUN_1404a6f24(longlong param_1,undefined2 param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint *in_RAX;
  char *pcVar4;
  byte bVar6;
  byte unaff_BL;
  char unaff_SPL;
  undefined1 *unaff_RSI;
  undefined7 uVar5;
  
  uVar3 = (uint)in_RAX;
  *in_RAX = *in_RAX & uVar3;
  *(byte *)in_RAX = (byte)*in_RAX + (byte)in_RAX;
  param_1 = param_1 + -1;
  if (param_1 == 0) {
    *in_RAX = *in_RAX | uVar3;
    *in_RAX = *in_RAX | uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)in_RAX = (byte)*in_RAX | (byte)in_RAX;
  bVar6 = unaff_BL | (byte)param_1;
  *in_RAX = *in_RAX | uVar3;
  cVar1 = (byte)param_1 + bVar6;
  uVar5 = (undefined7)((ulonglong)param_1 >> 8);
  pcVar4 = (char *)CONCAT71(uVar5,cVar1);
  *in_RAX = *in_RAX | uVar3;
  unaff_RSI[0x4a] = unaff_RSI[0x4a] - (char)((ulonglong)param_1 >> 8);
  *pcVar4 = *pcVar4 + (char)((ulonglong)in_RAX >> 8);
  uVar3 = uVar3 + 0x74050002;
  uVar2 = CONCAT31((int3)(uVar3 >> 8),(byte)uVar3 + *(byte *)(ulonglong)uVar3);
  pcVar4 = (char *)CONCAT71(uVar5,cVar1 + bVar6 + CARRY1((byte)uVar3,*(byte *)(ulonglong)uVar3));
  *(uint *)(ulonglong)uVar2 = *(uint *)(ulonglong)uVar2 | uVar2;
  uVar2 = uVar2 + 0x2c0009d9;
  out(*unaff_RSI,param_2);
  *pcVar4 = *pcVar4 + unaff_SPL;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
  *pcVar4 = *pcVar4 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

