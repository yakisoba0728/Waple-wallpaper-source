// Function: FUN_1404b8008
// Addr: 1404b8008
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b8008(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte in_AL;
  char cVar4;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte unaff_BH;
  longlong unaff_RDI;
  
  *(byte *)(unaff_RDI + 0x4b) = *(byte *)(unaff_RDI + 0x4b) | unaff_BH;
  bVar2 = *param_1;
  *param_1 = *param_1 + in_AH;
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
  bVar3 = in_AL + *pbVar1;
  cVar4 = bVar3 + CARRY1(bVar2,in_AH) + in_AH +
          (CARRY1(in_AL,*pbVar1) || CARRY1(bVar3,CARRY1(bVar2,in_AH)));
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar4))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar4)))
       | CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar4));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

