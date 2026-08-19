// Function: FUN_1404a3c88
// Addr: 1404a3c88
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3c88(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  char cVar2;
  undefined6 in_register_00000002;
  char cVar3;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined2 in_ES;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  cVar2 = in_AH + in_AL;
  *(undefined2 *)CONCAT62(in_register_00000002,CONCAT11(cVar2,in_AL)) = in_ES;
  pcVar1 = (char *)(unaff_RBP + param_1 * 4);
  *pcVar1 = *pcVar1 + cVar3;
  unaff_RSI[param_1 * 4] = unaff_RSI[param_1 * 4] + cVar2;
  pcVar1 = (char *)(unaff_RBX + param_2 * 4);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(cVar2,in_AL)) + -0x2efff95c);
  *pcVar1 = *pcVar1 + (char)param_2;
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

