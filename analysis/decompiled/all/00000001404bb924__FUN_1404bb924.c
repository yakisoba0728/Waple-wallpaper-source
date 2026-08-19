// Function: FUN_1404bb924
// Addr: 1404bb924
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb924(longlong param_1,longlong param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined8 in_RAX;
  uint *puVar3;
  char cVar4;
  
  cVar4 = (char)((ulonglong)param_2 >> 8);
  puVar3 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) + cVar4 + (char)in_RAX,
                                     (char)in_RAX));
  uVar2 = *puVar3;
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + cVar4;
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + (char)param_2;
  pcVar1 = (char *)((ulonglong)((uint)puVar3 | uVar2) + param_1);
  *pcVar1 = *pcVar1 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

