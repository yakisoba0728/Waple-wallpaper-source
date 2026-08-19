// Function: FUN_1404cbeb8
// Addr: 1404cbeb8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cbeb8(void)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  uint *in_RAX;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX | (byte)in_RAX;
  bVar4 = (byte)((ulonglong)in_RAX >> 8);
  bVar2 = (byte)in_RAX + CARRY1(bVar4,bVar4);
  uVar3 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar4 * '\x02' + bVar2,bVar2)) +
          0x16640000 + (uint)CARRY1(bVar4 * '\x02',bVar2);
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
  pcVar1 = (char *)(((ulonglong)uVar3 ^ 0x1e) - 0x15);
  *pcVar1 = *pcVar1 + (char)((ulonglong)uVar3 ^ 0x1e);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

