// Function: FUN_1404a7544
// Addr: 1404a7544
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7544(undefined1 *param_1,char *param_2)

{
  undefined1 uVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  char unaff_BL;
  longlong unaff_RSI;
  bool in_OF;
  int iVar2;
  
  if (!in_OF) {
    *param_1 = *param_1;
    *param_2 = *param_2 - (char)param_1;
    *(char *)CONCAT44(in_register_00000004,in_EAX) =
         *(char *)CONCAT44(in_register_00000004,in_EAX) + unaff_BL;
    uVar1 = in(0);
    iVar2 = CONCAT31((int3)((uint)in_EAX >> 8),uVar1);
    (&stack0x00000000)[unaff_RSI * 2] = (&stack0x00000000)[unaff_RSI * 2] + (char)param_2;
    *(int *)CONCAT44(in_register_00000004,iVar2) =
         *(int *)CONCAT44(in_register_00000004,iVar2) + iVar2;
    *param_2 = *param_2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1;
  (&stack0x00000000)[unaff_RSI * 2] = (&stack0x00000000)[unaff_RSI * 2] + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

