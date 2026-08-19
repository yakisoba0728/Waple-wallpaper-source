// Function: FUN_1404a07a4
// Addr: 1404a07a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a07a4(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char *in_RAX;
  int *piVar2;
  ulonglong uVar3;
  char cVar4;
  
  cVar4 = (char)((ulonglong)param_1 >> 8);
  *(byte *)(param_2 + 3) = ~*(byte *)(param_2 + 3);
  in_RAX[0x21004a06] = in_RAX[0x21004a06] + cVar4;
  *in_RAX = *in_RAX + (char)in_RAX;
  piVar2 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                           (char)in_RAX + (char)((ulonglong)in_RAX >> 8));
  uVar3 = (ulonglong)(uint)((int)piVar2 + *piVar2);
  *(byte *)(param_2 + 3) = ~*(byte *)(param_2 + 3);
  pcVar1 = (char *)(uVar3 + 0x21004a06);
  *pcVar1 = *pcVar1 + cVar4;
  pcVar1 = (char *)(uVar3 * 2);
  *pcVar1 = *pcVar1 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

