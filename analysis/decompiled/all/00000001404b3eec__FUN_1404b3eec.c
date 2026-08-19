// Function: FUN_1404b3eec
// Addr: 1404b3eec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3eec(undefined8 param_1,undefined8 param_2)

{
  char in_AL;
  char in_AH;
  char cVar1;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  
  cVar1 = (in_AH + (char)((ulonglong)param_2 >> 8)) * '\x02' + (char)param_2;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,in_AL)))
       + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

