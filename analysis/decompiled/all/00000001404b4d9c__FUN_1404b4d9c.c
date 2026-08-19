// Function: FUN_1404b4d9c
// Addr: 1404b4d9c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4d9c(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar3;
  undefined8 in_RAX;
  char *pcVar2;
  char cVar4;
  longlong unaff_RBX;
  uint unaff_EBP;
  
  cVar4 = (char)((ulonglong)param_2 >> 8);
  cVar1 = (char)in_RAX;
  cVar3 = (char)((ulonglong)in_RAX >> 8) + cVar1;
  pcVar2 = (char *)CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar3,cVar1))
                                  >> 8),cVar1);
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + cVar3;
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + cVar4;
  *pcVar2 = *pcVar2 + cVar4;
  *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x24) + (char)((ulonglong)param_1 >> 8);
  *(char *)(unaff_RBX + param_1 * 2) = (char)param_1;
  *(uint *)(param_2 + param_1) = *(uint *)(param_2 + param_1) & unaff_EBP;
  cRam000000014d4b5a99 = cRam000000014d4b5a99 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

