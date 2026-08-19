// Function: FUN_1404d7184
// Addr: 1404d7184
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

char FUN_1404d7184(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte in_AL;
  char cVar1;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BH;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  char *unaff_RSI;
  char unaff_R12B;
  undefined8 uStack_10;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + '\x01';
  cVar2 = (unaff_BH - *param_2) -
          (*(byte *)CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) < in_AL);
  if (-1 < (char)(*(char *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) - in_AL))
  {
    *param_4 = *param_4 + unaff_R12B;
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) + in_AL;
    cVar1 = in_AL + in_AH + cVar2;
    if (SCARRY1(in_AL + in_AH,cVar2) != cVar1 < '\0') {
      *param_1 = *param_1 + in_AH;
      *unaff_RSI = *unaff_RSI + (char)param_1;
      *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1))) =
           *(char *)CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1))) + cVar1;
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (cVar1 != '\0') {
      puVar3 = (undefined8 *)&stack0xfffffffffffffff8;
      cVar2 = '\x11';
      do {
        unaff_RBP = unaff_RBP + -1;
        puVar3 = puVar3 + -1;
        *puVar3 = *unaff_RBP;
        cVar2 = cVar2 + -1;
      } while ('\0' < cVar2);
      return cVar1 + in_AH;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

