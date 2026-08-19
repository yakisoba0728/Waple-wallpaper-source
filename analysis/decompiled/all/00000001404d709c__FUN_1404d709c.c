// Function: FUN_1404d709c
// Addr: 1404d709c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d709c(longlong param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  char in_AL;
  undefined7 in_register_00000001;
  byte *unaff_RBX;
  longlong in_FS_OFFSET;
  
  bVar2 = *unaff_RBX;
  *unaff_RBX = *unaff_RBX + (byte)param_1;
  uVar3 = LocalDescriptorTableRegister();
  *(undefined4 *)(&stack0x00000000 + in_FS_OFFSET + param_2 * 2) = uVar3;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL + CARRY1(bVar2,(byte)param_1);
  if (param_1 == 1 || *(char *)CONCAT71(in_register_00000001,in_AL) == '\0') {
    pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + -0x20);
    *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

