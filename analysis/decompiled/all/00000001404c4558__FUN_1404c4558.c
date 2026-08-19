// Function: FUN_1404c4558
// Addr: 1404c4558
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4558(char *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 in_register_00000004;
  undefined4 *unaff_RSI;
  
  uVar2 = *unaff_RSI;
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,uVar2) + CONCAT44(in_register_00000004,uVar2));
  *pbVar1 = *pbVar1 >> 1;
  *(char *)CONCAT44(in_register_00000004,uVar2) =
       *(char *)CONCAT44(in_register_00000004,uVar2) + (char)uVar2;
  *param_1 = *param_1 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

