// Function: FUN_1404d1070
// Addr: 1404d1070
// Size: 1 bytes


void FUN_1404d1070(longlong param_1)

{
  char *pcVar1;
  uint in_EAX;
  uint uVar2;
  int *piVar3;
  char unaff_BL;
  int unaff_EDI;
  undefined4 unaff_0000003c;
  
  *(uint *)CONCAT44(unaff_0000003c,unaff_EDI) =
       (*(int *)CONCAT44(unaff_0000003c,unaff_EDI) - unaff_EDI) - (uint)(0x4ffff29b < in_EAX);
  pcVar1 = (char *)(CONCAT44(unaff_0000003c,unaff_EDI) + 0xc21004d + param_1);
  *pcVar1 = *pcVar1 + (char)param_1;
  piVar3 = (int *)((ulonglong)(in_EAX + 0xb0000d64) | 0x68);
  uVar2 = (int)piVar3 + *piVar3 + 0xc3000c54;
  pcVar1 = (char *)(CONCAT44(unaff_0000003c,unaff_EDI) + 0x21004d + param_1);
  *pcVar1 = *pcVar1 + unaff_BL + (char)(in_EAX + 0xb0000d64);
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
  return;
}

