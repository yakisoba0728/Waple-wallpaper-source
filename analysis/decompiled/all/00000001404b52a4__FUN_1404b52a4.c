// Function: FUN_1404b52a4
// Addr: 1404b52a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b52a4(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  byte in_AL;
  char cVar2;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char *pcVar3;
  uint *unaff_RSI;
  bool bVar4;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  bVar4 = CARRY1(*(byte *)CONCAT44(in_register_00000004,
                                   CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))),in_AL);
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  bVar1 = 0x7b - *(char *)CONCAT44(in_register_00000004,
                                   CONCAT22(in_register_00000002,CONCAT11(in_AH,0x7b)));
  cVar2 = bVar1 - bVar4;
  pcVar3 = (char *)(param_1 + -1);
  if (pcVar3 == (char *)0x0) {
    cVar2 = (cVar2 - *(char *)CONCAT44(in_register_00000004,
                                       CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2)))) -
            (0x7b < *(byte *)CONCAT44(in_register_00000004,
                                      CONCAT22(in_register_00000002,CONCAT11(in_AH,0x7b))) ||
            bVar1 < bVar4);
    *param_4 = *param_4 + -0x10;
    *(char *)unaff_RSI = (char)*unaff_RSI;
    *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))
                          ) + cVar2;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *param_4 = *param_4 + -8;
  *unaff_RSI = *unaff_RSI & CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2));
  *pcVar3 = *pcVar3 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

