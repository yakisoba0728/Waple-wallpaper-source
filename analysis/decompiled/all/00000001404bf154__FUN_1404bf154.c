// Function: FUN_1404bf154
// Addr: 1404bf154
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf154(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  byte in_AL;
  byte bVar2;
  char in_AH;
  char cVar3;
  undefined6 in_register_00000002;
  uint unaff_EDI;
  
  cVar3 = in_AH + in_AL;
  bVar2 = in_AL | *(byte *)CONCAT62(in_register_00000002,CONCAT11(cVar3,in_AL));
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + cVar3;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(cVar3,bVar2)) + param_1);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(cVar3,bVar2)) + -0x56);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(cVar3,bVar2)) + -0x2fffd956);
  *pcVar1 = *pcVar1 + bVar2;
  uRam000000013488f17e = uRam000000013488f17e & unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

