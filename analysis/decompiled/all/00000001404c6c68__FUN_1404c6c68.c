// Function: FUN_1404c6c68
// Addr: 1404c6c68
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6c68(char *param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  char *in_RAX;
  longlong unaff_RBP;
  byte *unaff_RSI;
  int *piVar3;
  
  bVar1 = param_1[unaff_RBP];
  in_RAX[(longlong)param_1] = in_RAX[(longlong)param_1] + (char)param_1;
  uVar2 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX - *in_RAX) + 0x200000e0;
  piVar3 = (int *)(ulonglong)uVar2;
  *unaff_RSI = *unaff_RSI >> 1;
  *(char *)piVar3 = (char)*piVar3 + (char)uVar2;
  *piVar3 = *piVar3 + uVar2;
  *param_1 = *param_1 + (char)(uVar2 >> 8);
  if ((char)uVar2 != '\0') {
    *param_1 = *param_1 + ((byte)((ulonglong)param_2 >> 8) & bVar1);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

