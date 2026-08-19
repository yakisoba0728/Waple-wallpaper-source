// Function: FUN_14049f320
// Addr: 14049f320
// Size: 1 bytes


void FUN_14049f320(longlong param_1,undefined2 param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  int in_EAX;
  undefined4 in_register_00000004;
  undefined1 *unaff_RDI;
  
  *(undefined1 *)(param_1 + CONCAT44(in_register_00000004,in_EAX)) = 0;
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX;
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}

