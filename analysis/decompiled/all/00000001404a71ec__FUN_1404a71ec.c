// Function: FUN_1404a71ec
// Addr: 1404a71ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a71ed) overlaps instruction at (ram,0x0001404a71ec)
    */

void FUN_1404a71ec(char *param_1,undefined2 param_2)

{
  char *pcVar1;
  char cVar2;
  char in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  char unaff_SPL;
  undefined4 *unaff_RSI;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  cVar2 = *(char *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  if (SCARRY1(cVar2,in_AL)) {
    *(char *)(unaff_RBX + -0x1bfff60f) = *(char *)(unaff_RBX + -0x1bfff60f) + in_AH;
    out(*unaff_RSI,param_2);
    *param_1 = *param_1 + unaff_SPL;
    *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) + in_AL;
    pcVar1 = (char *)(CONCAT44(in_register_00000004,
                               CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0xf);
    *pcVar1 = *pcVar1 + (char)((ushort)param_2 >> 8);
  }
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  uRam01004a6fe40009f1 = CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

