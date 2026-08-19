// Function: FUN_1404d5ce8
// Addr: 1404d5ce8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5ce8(undefined8 param_1,undefined8 param_2,char param_3,char *param_4)

{
  uint uVar1;
  uint *in_RAX;
  longlong unaff_RBP;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar1 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + (byte)in_RAX;
  *(char *)(unaff_RBP + -0x4ac2ffca) =
       *(char *)(unaff_RBP + -0x4ac2ffca) + (char)((ulonglong)param_2 >> 8) +
       CARRY1((byte)uVar1,(byte)in_RAX);
  *param_4 = *param_4 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

