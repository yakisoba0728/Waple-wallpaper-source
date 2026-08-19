// Function: FUN_1404ac104
// Addr: 1404ac104
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac104(char *param_1,byte *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  char unaff_SPL;
  
  verw();
  uVar1 = TaskRegister();
  *(undefined2 *)(CONCAT44(in_register_00000004,in_EAX) + CONCAT44(in_register_00000004,in_EAX) * 8)
       = uVar1;
  *param_1 = *param_1 + unaff_SPL;
  cVar3 = (char)in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + cVar3;
  *(char *)(unaff_RBX + -0x51) = *(char *)(unaff_RBX + -0x51) + (char)param_1;
  verw();
  uVar1 = TaskRegister();
  *(undefined2 *)(CONCAT44(in_register_00000004,in_EAX) + CONCAT44(in_register_00000004,in_EAX) * 8)
       = uVar1;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + cVar3;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)param_2;
  uVar1 = TaskRegister();
  *(undefined2 *)(unaff_RBX + -0x51) = uVar1;
  uVar2 = LocalDescriptorTableRegister();
  *(undefined4 *)CONCAT44(in_register_00000004,in_EAX) = uVar2;
  *param_2 = *param_2 >> 1 | *param_2 << 7;
  *param_2 = *param_2 + cVar3;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

