// Function: FUN_1404d0508
// Addr: 1404d0508
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0508(undefined8 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint in_EAX;
  uint uVar3;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  *(undefined4 *)(unaff_RDI + 0x39) = *(undefined4 *)(unaff_RDI + 0x39);
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  uVar3 = CONCAT31((int3)(in_EAX >> 8),0x6f);
  uVar2 = *(uint *)CONCAT44(in_register_00000004,uVar3);
  *(undefined4 *)(unaff_RDI + 0x39) = *(undefined4 *)(unaff_RDI + 0x39);
  piVar1 = (int *)(unaff_RSI + CONCAT44(in_register_00000004,uVar3));
  *piVar1 = *piVar1 + param_2 + (uint)(uVar2 < uVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

