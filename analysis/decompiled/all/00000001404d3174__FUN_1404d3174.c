// Function: FUN_1404d3174
// Addr: 1404d3174
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3174(undefined8 param_1,undefined8 param_2)

{
  char in_AL;
  char cVar1;
  byte in_AH;
  char cVar2;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar3;
  
  bVar3 = (byte)((ulonglong)param_2 >> 8);
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  cVar1 = in_AL + *(char *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  cVar2 = in_AH + bVar3;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,cVar1))) =
       (*(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,cVar1)))
       - cVar1) - CARRY1(in_AH,bVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

