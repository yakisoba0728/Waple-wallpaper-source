// Function: FUN_1404d53f4
// Addr: 1404d53f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d53f4(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  uint uVar2;
  byte bVar3;
  byte *in_RAX;
  byte bVar4;
  
  bVar4 = (byte)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(param_2 * 3 + 0x21004d);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *in_RAX = *in_RAX | (byte)in_RAX;
  bVar3 = (byte)((ulonglong)in_RAX >> 8);
  uVar2 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar3 + bVar4,(byte)in_RAX)) +
          0x16d40000 + (uint)CARRY1(bVar3,bVar4);
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

