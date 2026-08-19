// Function: FUN_1404a9a24
// Addr: 1404a9a24
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9a24(char *param_1,longlong param_2)

{
  int *piVar1;
  char *pcVar2;
  byte in_AL;
  char cVar3;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_SPL;
  char *unaff_RDI;
  
  cVar3 = in_AL + (byte)param_2;
  piVar1 = (int *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)) +
                  CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)));
  *piVar1 = *piVar1 + -1;
  cVar3 = (cVar3 + 'g') - CARRY1(in_AL,(byte)param_2);
  *param_1 = *param_1 + unaff_SPL;
  pcVar2 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)) +
                   CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)));
  *pcVar2 = *pcVar2 + cVar3;
  param_1[param_2] = param_1[param_2] + in_AH;
  pcVar2 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)) + param_2);
  *pcVar2 = *pcVar2 + (char)((ulonglong)param_2 >> 8);
  cVar3 = cVar3 * '\x02';
  piVar1 = (int *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)) +
                  CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)));
  *piVar1 = *piVar1 + -1;
  *param_1 = *param_1 + cVar3 + 'g';
  *unaff_RDI = *unaff_RDI + (char)param_1;
  sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

