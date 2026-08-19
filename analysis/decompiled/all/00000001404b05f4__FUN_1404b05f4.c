// Function: FUN_1404b05f4
// Addr: 1404b05f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b05f4(undefined8 param_1,undefined8 param_2,char *param_3)

{
  char in_AL;
  char cVar1;
  char in_AH;
  char cVar2;
  undefined6 in_register_00000002;
  
  cVar2 = in_AH + (char)((ulonglong)param_2 >> 8);
  *param_3 = *param_3 + in_AL;
  cVar1 = in(0x4c);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(cVar2,cVar1)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(cVar2,cVar1)) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

