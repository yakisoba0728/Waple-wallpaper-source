// Function: FUN_1404d4998
// Addr: 1404d4998
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4998(char *param_1,undefined4 param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 in_RAX;
  char cVar3;
  longlong unaff_RBX;
  
  cVar3 = (char)((uint)param_2 >> 8);
  param_1[unaff_RBX] = param_1[unaff_RBX] + cVar3;
  cVar2 = (char)in_RAX + (char)((ulonglong)in_RAX >> 8);
  pcVar1 = (char *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2) + 0x4d + (longlong)param_1 * 2);
  *pcVar1 = *pcVar1 + cVar3;
  *param_1 = *param_1 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

