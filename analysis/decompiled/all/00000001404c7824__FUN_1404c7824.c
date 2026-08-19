// Function: FUN_1404c7824
// Addr: 1404c7824
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7824(char *param_1,undefined2 param_2)

{
  byte bVar1;
  byte in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RDI;
  
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       ^ in_AL;
  *param_1 = *param_1 + in_AH;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       ^ in_AL;
  *param_1 = *param_1 + in_AH;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  bVar1 = in_AL * '\x02';
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar1))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar1)))
       ^ bVar1;
  out(param_2,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar1)));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar1))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar1)))
       ^ bVar1;
  *(byte *)(unaff_RDI + 0x4c) = *(byte *)(unaff_RDI + 0x4c) ^ (byte)((ushort)param_2 >> 8);
  *param_1 = *param_1 + bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

