// Function: FUN_1404b9dc8
// Addr: 1404b9dc8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9dc8(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  uint *in_RAX;
  byte *pbVar3;
  char *pcVar4;
  char cVar5;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  pbVar3 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) + cVar5,(byte)in_RAX));
  pcVar4 = (char *)CONCAT71((int7)((ulonglong)pbVar3 >> 8),(byte)in_RAX | *pbVar3);
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + cVar5;
  pcVar4[-0x571dffe1] = '\0';
  *pcVar4 = *pcVar4 + cVar5;
  uVar2 = (int)pcVar4 + 0x21004a;
  bVar1 = (char)uVar2 + *(char *)(ulonglong)uVar2;
  uVar2 = CONCAT22((short)(uVar2 >> 0x10),CONCAT11((char)(uVar2 >> 8) + cVar5,bVar1));
  uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1 | *(byte *)(ulonglong)uVar2);
  pcVar4 = (char *)(ulonglong)uVar2;
  pcVar4[-0x571dffe1] = '\0';
  *pcVar4 = *pcVar4 + cVar5;
  uVar2 = uVar2 + 0x21004a;
  pcVar4 = (char *)(ulonglong)uVar2;
  *pcVar4 = *pcVar4 + (char)uVar2;
  pcVar4[-0x571dffe1] = '\0';
  *pcVar4 = *pcVar4 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

