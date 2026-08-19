// Function: FUN_1404b539c
// Addr: 1404b539c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b539c(char *param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  byte in_AL;
  byte bVar3;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte *unaff_RBX;
  char unaff_SPL;
  uint *unaff_RSI;
  bool bVar4;
  bool bVar5;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  bVar4 = CARRY1(*(byte *)CONCAT44(in_register_00000004,
                                   CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))),in_AL);
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  bVar3 = 0x80 - *(char *)CONCAT44(in_register_00000004,
                                   CONCAT22(in_register_00000002,CONCAT11(in_AH,0x80)));
  bVar5 = 0x80 < *(byte *)CONCAT44(in_register_00000004,
                                   CONCAT22(in_register_00000002,CONCAT11(in_AH,0x80))) ||
          bVar3 < bVar4;
  bVar3 = bVar3 - bVar4;
  if (param_1 != (char *)0x0) {
    cVar1 = *(char *)CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)));
    *unaff_RBX = *unaff_RBX | (byte)param_1;
    *param_1 = *param_1 + unaff_SPL;
    *unaff_RSI = *unaff_RSI & CONCAT22(in_register_00000002,CONCAT11(in_AH,(bVar3 - cVar1) - bVar5))
    ;
    *param_1 = *param_1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar2 = bVar3 - *(char *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)));
  *(char *)(param_2 + 0x4b) =
       *(char *)(param_2 + 0x4b) + (char)param_2 +
       (bVar3 < *(byte *)CONCAT44(in_register_00000004,
                                  CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) ||
       bVar2 < bVar5);
  cRam0000000000000000 = cRam0000000000000000 + in_AH;
  *unaff_RSI = *unaff_RSI & CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2 - bVar5));
  cRam0000000000000000 = cRam0000000000000000 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

