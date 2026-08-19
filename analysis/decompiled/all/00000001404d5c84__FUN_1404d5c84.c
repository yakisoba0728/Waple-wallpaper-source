// Function: FUN_1404d5c84
// Addr: 1404d5c84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5c84(byte *param_1,longlong param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  char unaff_BL;
  undefined7 unaff_00000019;
  char *unaff_RDI;
  
  *(char *)(param_2 + 0x4c) = *(char *)(param_2 + 0x4c) - unaff_BL;
  bVar1 = *param_1;
  *param_1 = *param_1 + in_AH;
  uVar2 = *(undefined4 *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
  in(4);
  *unaff_RDI = *unaff_RDI + (((char)param_1 - (char)uVar2) - CARRY1(bVar1,in_AH));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

