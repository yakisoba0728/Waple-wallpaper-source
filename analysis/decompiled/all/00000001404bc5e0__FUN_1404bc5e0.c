// Function: FUN_1404bc5e0
// Addr: 1404bc5e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc5e0(longlong param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte in_AL;
  byte bVar2;
  char in_AH;
  char cVar3;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BL;
  undefined7 unaff_00000019;
  int unaff_ESI;
  int *unaff_RDI;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  cVar3 = in_AH + (char)((ulonglong)param_2 >> 8);
  bVar2 = in_AL ^ *(byte *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL)));
  *(char *)(param_1 + (longlong)unaff_RDI) =
       *(char *)(param_1 + (longlong)unaff_RDI) + (char)param_2;
  bVar2 = bVar2 & *(byte *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar2)));
  *param_4 = *param_4 + -8;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar2)))
       + bVar2;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar2))) + -0x43);
  *pcVar1 = *pcVar1 + bVar2;
  *param_4 = *param_4 +
             (bVar2 & *(byte *)CONCAT44(in_register_00000004,
                                        CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar2))));
  *param_2 = *param_2 + (char)((ulonglong)param_1 >> 8);
  *unaff_RDI = *unaff_RDI + unaff_ESI;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

