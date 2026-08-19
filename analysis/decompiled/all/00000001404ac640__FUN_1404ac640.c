// Function: FUN_1404ac640
// Addr: 1404ac640
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac640(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  char cVar2;
  undefined6 in_register_00000002;
  char cVar3;
  char unaff_BL;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  cVar2 = in_AH + in_AL;
  *(char *)(param_2 * 2) = *(char *)(param_2 * 2) + cVar3;
  *(char *)(param_1 + param_2) = *(char *)(param_1 + param_2) + (char)param_2;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(cVar2,in_AL)) + param_2);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(cVar2,in_AL)) + -0x3cffefc7);
  *pcVar1 = *pcVar1 + cVar3;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(cVar2,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(cVar2,in_AL)) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

