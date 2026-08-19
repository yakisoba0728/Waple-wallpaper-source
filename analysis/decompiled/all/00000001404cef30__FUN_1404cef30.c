// Function: FUN_1404cef30
// Addr: 1404cef30
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cef30(byte *param_1,char param_2)

{
  byte *pbVar1;
  byte in_AL;
  byte bVar2;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte unaff_BH;
  int *unaff_RDI;
  byte in_CF;
  char in_PF;
  char in_AF;
  char in_ZF;
  char in_SF;
  
  bVar2 = in_SF << 7 | in_ZF << 6 | in_AF << 4 | in_PF << 2 | 2U | in_CF;
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))));
  *pbVar1 = *pbVar1 ^ unaff_BH;
  bVar2 = *param_1;
  *param_1 = *param_1 + in_AL;
  *unaff_RDI = *unaff_RDI + CONCAT22(in_register_00000002,CONCAT11(0x4b,in_AL)) +
               (uint)CARRY1(bVar2,in_AL);
  *param_1 = *param_1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

