// Function: FUN_1404a886c
// Addr: 1404a886c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a886c(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_RAX;
  int *piVar1;
  char cVar3;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char cVar2;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  cVar2 = (char)((ulonglong)in_RAX >> 8) + (char)in_RAX;
  piVar1 = (int *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar2,(char)in_RAX));
  *piVar1 = *piVar1 + (int)piVar1;
  *(char *)(unaff_RDI + (longlong)piVar1) = *(char *)(unaff_RDI + (longlong)piVar1) + cVar3;
  *(char *)(unaff_RSI + (longlong)piVar1) = *(char *)(unaff_RSI + (longlong)piVar1) + cVar2;
  *(char *)(unaff_RBP + (longlong)piVar1) = *(char *)(unaff_RBP + (longlong)piVar1) + (char)param_2;
  (&stack0x00000000)[(longlong)piVar1] = (&stack0x00000000)[(longlong)piVar1] + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

