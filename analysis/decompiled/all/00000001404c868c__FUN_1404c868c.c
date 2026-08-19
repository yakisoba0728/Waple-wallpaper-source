// Function: FUN_1404c868c
// Addr: 1404c868c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c868c(undefined4 param_1,longlong param_2)

{
  uint uVar1;
  byte bVar2;
  uint *in_RAX;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar1 = *in_RAX;
  bVar2 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar2;
  *(char *)(param_2 + -0x5541ffd0) =
       *(char *)(param_2 + -0x5541ffd0) + (char)((uint)param_1 >> 8) + CARRY1((byte)uVar1,bVar2);
  *(byte *)in_RAX = (byte)*in_RAX ^ bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

