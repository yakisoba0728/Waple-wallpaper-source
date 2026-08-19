// Function: FUN_1404c49cc
// Addr: 1404c49cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c49cc(void)

{
  byte bVar1;
  undefined4 in_EAX;
  int iVar2;
  undefined4 in_register_00000004;
  byte in_CF;
  
  bVar1 = (byte)in_EAX + 0x34;
  iVar2 = CONCAT31((int3)((uint)in_EAX >> 8),bVar1 + in_CF);
  *(uint *)CONCAT44(in_register_00000004,iVar2) =
       *(int *)CONCAT44(in_register_00000004,iVar2) + iVar2 +
       (uint)(0xcb < (byte)in_EAX || CARRY1(bVar1,in_CF));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

