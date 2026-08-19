// Function: FUN_1404ad414
// Addr: 1404ad414
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad414(void)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 in_AL;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + unaff_RSI);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + in_AH;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,0xb0))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,0xb0))) +
       CONCAT22(in_register_00000002,CONCAT11(in_AH,0xb0)) + (uint)CARRY1(bVar2,in_AH);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

