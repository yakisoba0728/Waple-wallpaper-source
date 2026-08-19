// Function: FUN_1404b6844
// Addr: 1404b6844
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6844(longlong param_1,longlong param_2)

{
  char *in_RAX;
  char cVar1;
  char cVar2;
  longlong unaff_RBX;
  
  cVar2 = (char)((ulonglong)param_2 >> 8);
  cVar1 = (char)param_2;
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + cVar2;
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + (char)((ulonglong)in_RAX >> 8);
  (&stack0x00000000)[param_1] = (&stack0x00000000)[param_1] + cVar1;
  *(char *)(param_1 + 0x1b7cb000) = *(char *)(param_1 + 0x1b7cb000) + cVar2;
  if (SCARRY1(cVar2,cVar1) == (char)(cVar2 + cVar1) < '\0') {
    *in_RAX = *in_RAX + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

