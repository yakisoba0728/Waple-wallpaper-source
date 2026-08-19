// Function: FUN_1404b9db8
// Addr: 1404b9db8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9db8(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char cVar5;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  *(char *)(ulonglong)(in_EAX + 0xc0000864) = *(char *)(ulonglong)(in_EAX + 0xc0000864) + cVar5;
  iVar2 = in_EAX + -0x3fdef752;
  uVar3 = CONCAT22((short)((uint)iVar2 >> 0x10),
                   CONCAT11((char)((uint)iVar2 >> 8) + cVar5,(byte)iVar2));
  uVar3 = CONCAT31((int3)(uVar3 >> 8),(byte)iVar2 | *(byte *)(ulonglong)uVar3);
  pcVar4 = (char *)(ulonglong)uVar3;
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + cVar5;
  pcVar4[-0x571dffe1] = '\0';
  *pcVar4 = *pcVar4 + cVar5;
  uVar3 = uVar3 + 0x21004a;
  bVar1 = (char)uVar3 + *(char *)(ulonglong)uVar3;
  uVar3 = CONCAT22((short)(uVar3 >> 0x10),CONCAT11((char)(uVar3 >> 8) + cVar5,bVar1));
  uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar1 | *(byte *)(ulonglong)uVar3);
  pcVar4 = (char *)(ulonglong)uVar3;
  pcVar4[-0x571dffe1] = '\0';
  *pcVar4 = *pcVar4 + cVar5;
  uVar3 = uVar3 + 0x21004a;
  pcVar4 = (char *)(ulonglong)uVar3;
  *pcVar4 = *pcVar4 + (char)uVar3;
  pcVar4[-0x571dffe1] = '\0';
  *pcVar4 = *pcVar4 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

