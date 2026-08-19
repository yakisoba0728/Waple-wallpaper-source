// Function: FUN_1404c8f64
// Addr: 1404c8f64
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8f64(char *param_1,longlong param_2)

{
  char cVar1;
  char in_AL;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  bool bVar2;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  cVar1 = *(char *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  if (*(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
      == '\0' ||
      SCARRY1(cVar1,in_AL) !=
      *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) <
      '\0') {
    bVar2 = SCARRY1(in_AL,in_AL);
    in_AL = in_AL * '\x02';
    if (in_AL == '\0' || bVar2 != in_AL < '\0') {
      unaff_RSI[(longlong)param_1 * 4 + 0x4c] = unaff_RSI[(longlong)param_1 * 4 + 0x4c] + unaff_BL;
      *param_1 = *param_1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    unaff_RSI[CONCAT71(unaff_00000019,unaff_BL) * 2] =
         unaff_RSI[CONCAT71(unaff_00000019,unaff_BL) * 2] | in_AH;
  }
  *(char *)(param_2 + -0x7da1ffcf) = *(char *)(param_2 + -0x7da1ffcf) + in_AL;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       ^ CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *unaff_RDI = *unaff_RSI;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

