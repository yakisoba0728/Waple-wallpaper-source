// Function: FUN_1404d3164
// Addr: 1404d3164
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3164(undefined8 param_1,undefined8 param_2)

{
  char in_AL;
  byte in_AH;
  char cVar1;
  undefined6 in_register_00000002;
  byte bVar2;
  
  bVar2 = (byte)((ulonglong)param_2 >> 8);
  cVar1 = in_AH + bVar2;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(cVar1,in_AL)) =
       (*(char *)CONCAT62(in_register_00000002,CONCAT11(cVar1,in_AL)) - in_AL) - CARRY1(in_AH,bVar2)
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

