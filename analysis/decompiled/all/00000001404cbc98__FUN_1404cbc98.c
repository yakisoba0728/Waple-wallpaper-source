// Function: FUN_1404cbc98
// Addr: 1404cbc98
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cbc98(longlong param_1,longlong param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined8 in_RAX;
  int *piVar3;
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  piVar3 = (int *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                           CONCAT11((char)((ulonglong)in_RAX >> 8) + (char)in_RAX,(char)in_RAX));
  uVar2 = (int)piVar3 + *piVar3;
  (&stack0x00000000)[uVar2] = (&stack0x00000000)[uVar2] + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(unaff_RBP + (ulonglong)uVar2);
  *pcVar1 = *pcVar1 + (char)(uVar2 >> 8);
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + (char)param_2;
  *(undefined1 *)(param_2 + 0x34) = *(undefined1 *)(param_2 + 0x34);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

