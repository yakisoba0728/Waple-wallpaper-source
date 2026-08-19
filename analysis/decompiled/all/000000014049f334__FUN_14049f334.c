// Function: FUN_14049f334
// Addr: 14049f334
// Size: 1 bytes


void FUN_14049f334(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  char in_AL;
  char in_AH;
  char cVar3;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  undefined1 *unaff_RDI;
  
  cVar3 = in_AH + in_AL;
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + (char)((ulonglong)param_2 >> 8);
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + (char)param_2;
  *(undefined1 *)
   (param_1 + CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL)))) =
       0;
  uVar1 = in((short)param_2);
  *unaff_RDI = uVar1;
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL))) +
       CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL));
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}

