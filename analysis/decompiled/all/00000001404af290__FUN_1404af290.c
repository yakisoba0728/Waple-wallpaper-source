// Function: FUN_1404af290
// Addr: 1404af290
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af290(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 in_RAX;
  int *piVar3;
  undefined7 uVar5;
  char unaff_SPL;
  char *pcVar4;
  
  cVar2 = (char)((ulonglong)param_2 >> 8);
  uVar5 = (undefined7)((ulonglong)param_1 >> 8);
  piVar3 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                           (byte)in_RAX ^ (byte)((ulonglong)in_RAX >> 8));
  uVar1 = (int)piVar3 + *piVar3;
  pcVar4 = (char *)(ulonglong)uVar1;
  *(char *)CONCAT71(uVar5,cVar2) = *(char *)CONCAT71(uVar5,cVar2) + unaff_SPL;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + (char)uVar1;
  cVar2 = in(0x27);
  pcVar4 = (char *)(ulonglong)CONCAT31((int3)(uVar1 >> 8),cVar2);
  *pcVar4 = *pcVar4 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

