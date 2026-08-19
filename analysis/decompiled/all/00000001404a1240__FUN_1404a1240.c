// Function: FUN_1404a1240
// Addr: 1404a1240
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1240(longlong param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  int in_EAX;
  char unaff_SPL;
  char in_ZF;
  int *piVar2;
  
  while (param_1 = param_1 + -1, param_1 != 0 && in_ZF == '\0') {
    uVar1 = in(param_2);
    piVar2 = (int *)(ulonglong)uVar1;
    *param_4 = *param_4 + unaff_SPL;
    *(char *)piVar2 = (char)*piVar2 + (char)uVar1;
    *(char *)piVar2 = (char)*piVar2 + (char)((ushort)param_2 >> 8);
    in_EAX = uVar1 + *piVar2 + *(int *)(ulonglong)(uVar1 + *piVar2);
    in_ZF = in_EAX == 0;
  }
  *param_4 = *param_4 + (char)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

