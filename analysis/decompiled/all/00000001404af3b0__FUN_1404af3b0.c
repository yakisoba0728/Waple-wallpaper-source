// Function: FUN_1404af3b0
// Addr: 1404af3b0
// Size: 1 bytes


void FUN_1404af3b0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  int *in_RAX;
  undefined7 uVar3;
  byte bVar4;
  char cVar5;
  
  bVar4 = (byte)((ulonglong)param_2 >> 8);
  uVar3 = (undefined7)((ulonglong)param_1 >> 8);
  uVar2 = (int)in_RAX + *in_RAX + (uint)((char)param_1 < '\0');
  cVar5 = bVar4 + (byte)param_2;
  uVar2 = uVar2 + *(int *)(ulonglong)uVar2 + (uint)CARRY1(bVar4,(byte)param_2);
  *(undefined1 *)CONCAT71(uVar3,cVar5) = *(undefined1 *)CONCAT71(uVar3,cVar5);
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}

