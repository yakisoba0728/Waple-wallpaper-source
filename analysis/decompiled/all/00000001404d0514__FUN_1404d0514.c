// Function: FUN_1404d0514
// Addr: 1404d0514
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0514(undefined8 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 in_EAX;
  uint uVar3;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),0x6f);
  uVar2 = *(uint *)CONCAT44(in_register_00000004,uVar3);
  *(undefined4 *)(unaff_RDI + 0x39) = *(undefined4 *)(unaff_RDI + 0x39);
  piVar1 = (int *)(unaff_RSI + CONCAT44(in_register_00000004,uVar3));
  *piVar1 = *piVar1 + param_2 + (uint)(uVar2 < uVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

