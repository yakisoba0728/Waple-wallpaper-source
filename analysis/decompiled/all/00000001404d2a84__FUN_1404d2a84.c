// Function: FUN_1404d2a84
// Addr: 1404d2a84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d2aae) overlaps instruction at (ram,0x0001404d2aad)
    */

void FUN_1404d2a84(char *param_1,int param_2)

{
  char *pcVar1;
  byte bVar2;
  byte in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BL;
  longlong unaff_RBP;
  byte *unaff_RSI;
  byte *unaff_RDI;
  
  *param_1 = *param_1 + in_AH;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  param_1[unaff_RBP + 0x4d] = param_1[unaff_RBP + 0x4d] + unaff_BL;
  *param_1 = *param_1 + unaff_BL;
  *unaff_RDI = *unaff_RDI & in_AL;
  *unaff_RSI = *unaff_RSI + (char)param_1;
  *(int *)unaff_RSI = *(int *)unaff_RSI + param_2;
  bVar2 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + in_AL;
  if (param_1 == (char *)0x1 || *unaff_RDI == 0) {
    if (!SCARRY1(bVar2,in_AL)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) ^ in_AL;
    *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) + in_AH;
    *unaff_RSI = *unaff_RSI >> 1;
    pcVar1 = (char *)(CONCAT44(in_register_00000004,
                               CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + 0x19000000);
    *pcVar1 = *pcVar1 + in_AH;
  }
  else {
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) + in_AL;
    pcVar1 = (char *)(CONCAT44(in_register_00000004,
                               CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL & (byte)param_2)))
                     + 0x19000000);
    *pcVar1 = *pcVar1 + in_AH;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

