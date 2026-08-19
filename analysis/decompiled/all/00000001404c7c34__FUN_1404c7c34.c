// Function: FUN_1404c7c34
// Addr: 1404c7c34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7c34(char *param_1,undefined2 param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar2;
  longlong unaff_RBX;
  undefined1 *unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  
  out(*unaff_RSI,param_2);
  pcVar1 = (char *)(unaff_RBX + unaff_RDI * 2);
  cVar2 = (char)((ushort)param_2 >> 8);
  *pcVar1 = *pcVar1 + cVar2;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x28003137);
  *pcVar1 = *pcVar1 + in_AH;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x10049ea);
  *pcVar1 = *pcVar1 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

