// Function: FUN_1404c8a34
// Addr: 1404c8a34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8a34(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  uint uVar2;
  char *in_RAX;
  byte unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  uint *unaff_retaddr;
  
  *(byte *)(unaff_RBP + 0x4b) = *(byte *)(unaff_RBP + 0x4b) & unaff_BL;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  *in_RAX = *in_RAX + (char)in_RAX;
  *unaff_retaddr = *unaff_retaddr ^ (uint)unaff_retaddr;
  param_1[0x31] = param_1[0x31] | unaff_BL;
  *(char *)unaff_retaddr = (char)*unaff_retaddr + (char)((ulonglong)unaff_retaddr >> 8);
  *param_4 = *param_4 + (char)unaff_retaddr;
  uVar2 = (uint)unaff_retaddr | *(uint *)((longlong)unaff_retaddr * 2);
  cVar1 = (char)uVar2;
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
       *(uint *)CONCAT71(unaff_00000019,unaff_BL) & (uint)param_1;
  uVar2 = CONCAT31((int3)(uVar2 >> 8),cVar1 + -0x6c);
  *(int *)(ulonglong)uVar2 = *(int *)(ulonglong)uVar2 + uVar2 + (uint)(0x9b < (byte)(cVar1 + 0x30U))
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

