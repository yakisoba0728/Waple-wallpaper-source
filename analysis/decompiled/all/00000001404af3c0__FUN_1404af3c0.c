// Function: FUN_1404af3c0
// Addr: 1404af3c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af3c0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int *in_RAX;
  char *pcVar2;
  undefined7 uVar3;
  byte bVar4;
  char cVar5;
  char unaff_SPL;
  
  bVar4 = (byte)((ulonglong)param_2 >> 8);
  uVar3 = (undefined7)((ulonglong)param_1 >> 8);
  uVar1 = (int)in_RAX + *in_RAX + (uint)((char)param_1 < '\0');
  cVar5 = bVar4 + (byte)param_2;
  uVar1 = uVar1 + *(int *)(ulonglong)uVar1 + (uint)CARRY1(bVar4,(byte)param_2);
  pcVar2 = (char *)(ulonglong)uVar1;
  *(char *)CONCAT71(uVar3,cVar5) = *(char *)CONCAT71(uVar3,cVar5) + unaff_SPL;
  *pcVar2 = *pcVar2 + cVar5;
  *pcVar2 = *pcVar2 + (char)uVar1;
  cVar5 = in(0x27);
  pcVar2 = (char *)(ulonglong)CONCAT31((int3)(uVar1 >> 8),cVar5);
  *pcVar2 = *pcVar2 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

