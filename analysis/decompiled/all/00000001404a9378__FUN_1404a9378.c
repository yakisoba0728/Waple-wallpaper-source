// Function: FUN_1404a9378
// Addr: 1404a9378
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9378(longlong param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  char in_AL;
  char cVar1;
  uint uVar2;
  uint unaff_EBX;
  char unaff_SPL;
  char in_R11B;
  char *pcVar3;
  
  while (cVar1 = in_AL, param_1 = param_1 + -1, param_1 != 0 && in_R11B != '\0') {
    uVar2 = in(param_2);
    pcVar3 = (char *)(ulonglong)uVar2;
    *param_4 = *param_4 + unaff_SPL;
    *pcVar3 = *pcVar3 + (char)uVar2;
    *pcVar3 = *pcVar3 + (char)(uVar2 >> 8);
    in_AL = (char)unaff_EBX;
    unaff_EBX = uVar2;
    in_R11B = cVar1;
  }
  *param_4 = *param_4 + in_R11B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

