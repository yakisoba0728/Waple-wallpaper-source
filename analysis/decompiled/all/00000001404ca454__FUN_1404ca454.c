// Function: FUN_1404ca454
// Addr: 1404ca454
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca454(char *param_1,longlong param_2,char param_3)

{
  uint *puVar1;
  undefined4 in_EAX;
  uint uVar2;
  undefined4 in_register_00000004;
  uint *unaff_RSI;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + ']');
  *param_1 = *param_1 + param_3;
  puVar1 = (uint *)(CONCAT44(in_register_00000004,uVar2) + CONCAT44(in_register_00000004,uVar2));
  *puVar1 = *puVar1 | uVar2;
  puVar1 = (uint *)(param_2 + 5);
  *puVar1 = *puVar1 | (uint)param_2;
  if (param_1 + -1 == (char *)0x0 || *puVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RSI = *unaff_RSI & (uint)(param_1 + -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

