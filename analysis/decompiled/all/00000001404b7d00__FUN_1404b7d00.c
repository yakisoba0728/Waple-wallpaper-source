// Function: FUN_1404b7d00
// Addr: 1404b7d00
// Size: 1 bytes


void FUN_1404b7d00(char *param_1)

{
  char in_AL;
  char in_AH;
  char cVar1;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_SPL;
  char *unaff_RSI;
  
  cVar1 = in_AH + '\x1d';
  if ((POPCOUNT(cVar1) & 1U) == 0) {
    *param_1 = *param_1 + cVar1;
    *unaff_RSI = *unaff_RSI + in_AL;
    *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,in_AL))
                          ) + in_AL;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *param_1 = *param_1 + unaff_SPL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,in_AL)))
       + (char)param_1;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,in_AL)))
       + in_AL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

