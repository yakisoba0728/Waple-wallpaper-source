// Function: FUN_1404b8060
// Addr: 1404b8060
// Size: 1 bytes


void FUN_1404b8060(char *param_1,longlong param_2)

{
  byte in_AL;
  char in_AH;
  char cVar1;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar2;
  longlong unaff_RBX;
  longlong unaff_RSI;
  
  cVar2 = (char)((ulonglong)param_2 >> 8);
  cVar1 = in_AH + in_AL;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(cVar1,in_AL));
  param_1[param_2] = param_1[param_2] + cVar2;
  param_1[unaff_RBX] = param_1[unaff_RBX] + cVar1;
  (&stack0x00000000)[(longlong)param_1] = (&stack0x00000000)[(longlong)param_1] + (char)param_2;
  param_1[0x1dce8000] = param_1[0x1dce8000] + cVar2;
  *(char *)(unaff_RSI + -0x23ffe232) = *(char *)(unaff_RSI + -0x23ffe232) + cVar1;
  *param_1 = *param_1 + cVar1;
  *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,in_AL))) |
           0x4a) =
       *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,in_AL)))
                | 0x4a) + (char)param_1;
  *(byte *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,in_AL))) |
           0x4a) =
       *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,in_AL)))
                | 0x4a) + (in_AL | 0x4a);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

