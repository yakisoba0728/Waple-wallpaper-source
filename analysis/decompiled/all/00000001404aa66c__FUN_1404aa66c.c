// Function: FUN_1404aa66c
// Addr: 1404aa66c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa66c(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_SPL;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  cVar2 = cRam7c000e41b6000e41;
  *unaff_RDI = *unaff_RSI;
  *param_1 = *param_1 + unaff_SPL;
  *param_2 = *param_2 + cVar2;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2)))
       + cVar2;
  pcVar1 = (char *)((CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) ^ 6) -
                   0x49fff1bf);
  *pcVar1 = *pcVar1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

