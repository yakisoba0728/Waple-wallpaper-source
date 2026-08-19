// Function: FUN_1404c3c50
// Addr: 1404c3c50
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3c50(char param_1)

{
  byte bVar1;
  uint uVar2;
  uint *in_RAX;
  int *piVar3;
  char *pcVar4;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar2 = *in_RAX;
  bVar1 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar1;
  piVar3 = (int *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                           CONCAT11((char)((ulonglong)in_RAX >> 8) << 1 | CARRY1((byte)uVar2,bVar1),
                                    bVar1));
  uVar2 = ((int)piVar3 - *piVar3) + 0x50002bd5;
  pcVar4 = (char *)(ulonglong)uVar2;
  *pcVar4 = *pcVar4 + param_1;
  *pcVar4 = *pcVar4 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

