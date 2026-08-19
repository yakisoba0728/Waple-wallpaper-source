// Function: FUN_1404a9cac
// Addr: 1404a9cac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9cac(uint param_1)

{
  char in_AL;
  char cVar1;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  
  cVar1 = in_AL + 'P';
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1)))
       + cVar1;
  *(uint *)(unaff_RSI + 0x348e000a) = *(uint *)(unaff_RSI + 0x348e000a) & param_1;
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1))) -
       CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

