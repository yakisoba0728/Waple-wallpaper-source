// Function: FUN_1404a5528
// Addr: 1404a5528
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5528(int param_1,byte param_2)

{
  int *piVar1;
  undefined8 in_RAX;
  
  piVar1 = (int *)((ulonglong)
                   (*(int *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                     CONCAT11((byte)((ulonglong)in_RAX >> 8) & param_2,(char)in_RAX)
                                    ) + 0x11009274) * 2 + -0x3ff71ff6);
  *piVar1 = *piVar1 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

