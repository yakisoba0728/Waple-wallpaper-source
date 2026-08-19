// Function: FUN_1404a5444
// Addr: 1404a5444
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5444(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *in_RAX;
  uint *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  uint unaff_EDI;
  undefined4 unaff_0000003c;
  byte in_CF;
  int *piVar4;
  
  uVar3 = *param_1;
  uVar2 = (uint)in_RAX;
  uVar1 = *param_1;
  *param_1 = (uVar1 - uVar2) - (uint)in_CF;
  *in_RAX = *in_RAX + uVar2 + (uint)(uVar3 < uVar2 || uVar1 - uVar2 < (uint)in_CF);
  *(char *)CONCAT44(unaff_0000003c,unaff_EDI) =
       *(char *)CONCAT44(unaff_0000003c,unaff_EDI) << 1 |
       *(char *)CONCAT44(unaff_0000003c,unaff_EDI) < '\0';
  uVar3 = uVar2 | 0x9e00bf0 | *unaff_RBX;
  piVar4 = (int *)(ulonglong)uVar3;
  *(char *)unaff_RBX = (char)*unaff_RBX + (char)param_1;
  *piVar4 = *piVar4 + (int)param_1;
  *(int *)((longlong)piVar4 + unaff_RSI) = *(int *)((longlong)piVar4 + unaff_RSI) + uVar3;
  *(char *)piVar4 = (char)*piVar4 + (char)uVar3;
  *(uint *)(unaff_RBP + -0xb42fff4) = *(uint *)(unaff_RBP + -0xb42fff4) & unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

