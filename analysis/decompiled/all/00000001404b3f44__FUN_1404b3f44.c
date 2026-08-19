// Function: FUN_1404b3f44
// Addr: 1404b3f44
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3f44(longlong param_1,byte param_2)

{
  char cVar1;
  char in_AL;
  byte bVar2;
  byte in_AH;
  undefined6 in_register_00000002;
  
  *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) & (uint)param_1;
  bVar2 = in_AL + *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  param_2 = in_AH | param_2;
  cVar1 = bVar2 - 2;
  if (param_1 == 1 || cVar1 == '\0') {
    *(char *)CONCAT62(in_register_00000002,CONCAT11(param_2,cVar1)) =
         (*(char *)CONCAT62(in_register_00000002,CONCAT11(param_2,cVar1)) - cVar1) - (bVar2 < 2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT62(in_register_00000002,CONCAT11(param_2 + cVar1,cVar1)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(param_2 + cVar1,cVar1)) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

