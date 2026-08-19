// Function: FUN_1404b750c
// Addr: 1404b750c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b750c(byte *param_1)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 in_register_00000004;
  int *unaff_RSI;
  
  iVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)in_EAX | *param_1);
  *(int *)CONCAT44(in_register_00000004,iVar1) =
       *(int *)CONCAT44(in_register_00000004,iVar1) + iVar1;
  *unaff_RSI = *unaff_RSI + (int)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

