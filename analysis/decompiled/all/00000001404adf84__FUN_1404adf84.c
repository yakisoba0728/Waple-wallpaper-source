// Function: FUN_1404adf84
// Addr: 1404adf84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404adf84(char *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  undefined4 uVar2;
  char unaff_SPL;
  
  uVar2 = (undefined4)((ulonglong)param_2 >> 0x20);
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + -0x2183ffee);
  *(int *)(param_1 + -0x2183ffee) = (int)param_2;
  UNLOCK();
  *param_1 = *param_1 + unaff_SPL;
  *(byte *)CONCAT44(uVar2,uVar1) = *(byte *)CONCAT44(uVar2,uVar1) | in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

