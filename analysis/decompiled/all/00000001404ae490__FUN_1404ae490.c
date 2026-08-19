// Function: FUN_1404ae490
// Addr: 1404ae490
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae490(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar4;
  int in_EAX;
  uint uVar2;
  char *pcVar3;
  char cVar5;
  byte in_CF;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  uVar2 = in_EAX + 0x21004a + (uint)in_CF;
  uVar2 = CONCAT22((short)(uVar2 >> 0x10),
                   CONCAT11(((char)(uVar2 >> 8) + cVar5) * '\x02',
                            (byte)uVar2 | *(byte *)(ulonglong)uVar2));
  uVar2 = uVar2 | *(uint *)(ulonglong)uVar2;
  bVar1 = (byte)uVar2;
  cVar4 = (char)(uVar2 >> 8) + bVar1;
  uVar2 = CONCAT22((short)(uVar2 >> 0x10),CONCAT11(cVar4,bVar1));
  pcVar3 = (char *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar1 | *(byte *)(ulonglong)uVar2);
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + (char)param_2;
  pcVar3[param_1] = pcVar3[param_1] + cVar5;
  *pcVar3 = *pcVar3 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

