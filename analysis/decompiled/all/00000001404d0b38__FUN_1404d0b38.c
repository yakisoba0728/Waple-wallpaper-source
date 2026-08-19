// Function: FUN_1404d0b38
// Addr: 1404d0b38
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0b38(longlong param_1,undefined2 param_2)

{
  undefined1 in_AL;
  undefined7 in_register_00000001;
  char cVar1;
  longlong unaff_RBX;
  undefined1 *unaff_RSI;
  
  *(undefined1 *)(param_1 + -0x5629ffc2) = 0;
  cVar1 = (char)((ushort)param_2 >> 8);
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + cVar1;
  *(int *)(unaff_RBX + 0xc) = *(int *)(unaff_RBX + 0xc) + (int)unaff_RSI;
  *(char *)(unaff_RBX + -0x1c) = *(char *)(unaff_RBX + -0x1c) + cVar1;
  out(*unaff_RSI,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

