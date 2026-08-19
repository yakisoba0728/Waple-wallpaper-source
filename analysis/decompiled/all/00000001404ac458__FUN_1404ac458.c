// Function: FUN_1404ac458
// Addr: 1404ac458
// Size: 1 bytes


void FUN_1404ac458(undefined1 *param_1,longlong param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 in_register_00000004;
  char cVar3;
  longlong unaff_RBX;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  uVar2 = *unaff_RSI;
  verw();
  *param_1 = *param_1;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,uVar2) + CONCAT44(in_register_00000004,uVar2));
  *pcVar1 = *pcVar1 + (char)uVar2;
  *(char *)(unaff_RDI + param_2) = *(char *)(unaff_RDI + param_2) + cVar3;
  (&stack0x00000000)[unaff_RBX] = (&stack0x00000000)[unaff_RBX] + cVar3;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,uVar2) + -0xd);
  *pcVar1 = *pcVar1 + (char)param_2;
  verw();
  return;
}

