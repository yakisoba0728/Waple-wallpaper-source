// Function: FUN_14049e358
// Addr: 14049e358
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e358(int *param_1)

{
  int iVar1;
  undefined8 in_RAX;
  int *piVar2;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  undefined4 *unaff_RSI;
  
  piVar2 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),0x69);
  *(char *)piVar2 = (char)*piVar2 + 'i';
  iVar1 = *piVar2;
  *(char *)param_1 = (char)*param_1;
  *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(char *)CONCAT44(unaff_0000001c,unaff_EBX) +
       ((byte)((uint)(iVar1 * 0x49e23c00) >> 8) & (byte)((uint)*unaff_RSI >> 8));
  *param_1 = *param_1 + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

