// Function: FUN_14049e344
// Addr: 14049e344
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e344(int *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint *in_RAX;
  int *piVar3;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  undefined4 *unaff_RSI;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  uVar1 = *in_RAX;
  piVar3 = (int *)(ulonglong)(uVar1 * 0x6a9400);
  *(char *)(param_2 + 0x49) = *(char *)(param_2 + 0x49) + (char)param_1;
  *(char *)param_1 = (char)*param_1 + (char)(uVar1 * 0x6a9400 >> 8);
  *(char *)piVar3 = (char)*piVar3;
  *(char *)((longlong)piVar3 + -0x5ffff97) =
       *(char *)((longlong)piVar3 + -0x5ffff97) + (char)((ulonglong)param_2 >> 8);
  iVar2 = *piVar3;
  *(char *)param_1 = (char)*param_1;
  *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(char *)CONCAT44(unaff_0000001c,unaff_EBX) +
       ((byte)((uint)(iVar2 * 0x49e23c00) >> 8) & (byte)((uint)*unaff_RSI >> 8));
  *param_1 = *param_1 + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

