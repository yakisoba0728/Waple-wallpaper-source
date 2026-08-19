// Function: FUN_1404cef10
// Addr: 1404cef10
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cef10(byte *param_1,undefined2 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  byte in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BL;
  byte unaff_BH;
  int *unaff_RDI;
  char unaff_R12B;
  
  out(param_2,in_AL);
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *(char *)(unaff_RDI + -0x107ff0f4) = (char)unaff_RDI[-0x107ff0f4] + unaff_BL;
  pbVar2 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
  *pbVar2 = *pbVar2 ^ unaff_BH;
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0x60ffc3d0);
  *pcVar1 = *pcVar1 + in_AL;
  pbVar2 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
  *pbVar2 = *pbVar2 ^ unaff_BH;
  bVar3 = *param_1;
  *param_1 = *param_1 + in_AL;
  *unaff_RDI = *unaff_RDI + CONCAT22(in_register_00000002,CONCAT11(0x4b,in_AL)) +
               (uint)CARRY1(bVar3,in_AL);
  *param_1 = *param_1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

