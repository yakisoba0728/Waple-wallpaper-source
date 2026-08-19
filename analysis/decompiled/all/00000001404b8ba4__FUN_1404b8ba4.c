// Function: FUN_1404b8ba4
// Addr: 1404b8ba4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b8ba4(undefined8 param_1,byte param_2)

{
  int iVar1;
  undefined8 in_RAX;
  int *piVar2;
  longlong unaff_RBP;
  
  piVar2 = (int *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                           CONCAT11((byte)((ulonglong)in_RAX >> 8) & param_2,(char)in_RAX));
  iVar1 = (int)piVar2 - *piVar2;
  *(char *)(unaff_RBP + -0x5a04ffe2) =
       *(char *)(unaff_RBP + -0x5a04ffe2) + ((byte)((uint)iVar1 >> 8) | (byte)iVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

