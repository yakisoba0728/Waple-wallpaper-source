// Function: FUN_1404b15e0
// Addr: 1404b15e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b15e0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined3 uVar2;
  byte bVar3;
  uint uVar4;
  uint *in_RAX;
  char *pcVar5;
  int unaff_EBP;
  
  *(int *)(param_2 + 0xd) = *(int *)(param_2 + 0xd) + unaff_EBP;
  *(char *)(param_2 + 0x68) = *(char *)(param_2 + 0x68) + (char)((ulonglong)param_1 >> 8);
  uVar4 = (uint)in_RAX | *in_RAX;
  bVar3 = (char)uVar4 - 0x34;
  uVar2 = (undefined3)(uVar4 >> 8);
  bVar3 = bVar3 & *(byte *)(ulonglong)CONCAT31(uVar2,bVar3);
  cVar1 = bVar3 - 1;
  pcVar5 = (char *)(ulonglong)CONCAT31(uVar2,cVar1);
  *pcVar5 = (*pcVar5 - cVar1) - (bVar3 == 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

