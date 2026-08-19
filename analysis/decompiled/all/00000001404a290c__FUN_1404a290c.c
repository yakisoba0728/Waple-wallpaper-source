// Function: FUN_1404a290c
// Addr: 1404a290c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a290c(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  byte in_AL;
  byte bVar2;
  char in_AH;
  char cVar3;
  undefined6 in_register_00000002;
  char cVar4;
  
  cVar4 = (char)((ulonglong)param_2 >> 8);
  cVar3 = in_AH + cVar4;
  bVar2 = in_AL | *(byte *)CONCAT62(in_register_00000002,CONCAT11(cVar3,in_AL));
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(cVar3,bVar2)) + param_1);
  *pcVar1 = *pcVar1 + cVar4;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(cVar3,bVar2)) + -0x33fffad1);
  *pcVar1 = *pcVar1 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

