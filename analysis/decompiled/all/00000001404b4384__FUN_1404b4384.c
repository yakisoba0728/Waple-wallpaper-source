// Function: FUN_1404b4384
// Addr: 1404b4384
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4384(byte *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  char in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  byte bVar3;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  
  param_2 = param_2 + *(int *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 2);
  *param_1 = *param_1 ^ in_AH;
  if (*param_1 == 0) {
    pbVar1 = (byte *)(unaff_RDI + -0xc);
    bVar2 = *pbVar1;
    bVar3 = (byte)((uint)param_2 >> 8);
    *pbVar1 = *pbVar1 + bVar3;
    *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL + CARRY1(bVar2,bVar3)
    ;
    out(*unaff_RSI,(short)param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

