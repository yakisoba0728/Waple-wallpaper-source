// Function: FUN_1404a8e38
// Addr: 1404a8e38
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8e38(byte param_1,uint param_2)

{
  char *pcVar1;
  char cVar2;
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  
  *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) & param_2;
  cVar2 = in_AH + (char)param_2;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(cVar2,in_AL + param_1)) +
                   CONCAT62(in_register_00000002,CONCAT11(cVar2,in_AL + param_1)));
  *pcVar1 = (*pcVar1 - param_1) - CARRY1(in_AL,param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

