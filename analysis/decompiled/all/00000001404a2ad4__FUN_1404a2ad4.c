// Function: FUN_1404a2ad4
// Addr: 1404a2ad4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2ad4(longlong param_1,int *param_2)

{
  char *pcVar1;
  uint *in_RAX;
  int *piVar2;
  int unaff_EBX;
  int unaff_ESI;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  pcVar1 = (char *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + (char)*in_RAX) +
                   (longlong)param_2);
  *pcVar1 = *pcVar1 + (char)((ulonglong)in_RAX >> 8);
  piVar2 = (int *)(param_1 + -1);
  if (piVar2 == (int *)0x0 || *pcVar1 == '\0') {
    *param_2 = *param_2 - (int)piVar2;
    *piVar2 = *piVar2 + unaff_EBX;
    *(int *)(&stack0x00000000 + (longlong)param_2) =
         *(int *)(&stack0x00000000 + (longlong)param_2) - unaff_ESI;
    *(char *)piVar2 = *(char *)piVar2 + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

