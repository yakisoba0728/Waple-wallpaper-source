// Function: FUN_14049f2c4
// Addr: 14049f2c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f2c4(longlong param_1)

{
  byte bVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  int iVar2;
  
  uRam00000001944ef2cc = uRam00000001944ef2cc & in_EAX;
  bVar1 = (byte)in_EAX | *(byte *)CONCAT44(in_register_00000004,in_EAX);
  iVar2 = CONCAT31((int3)(in_EAX >> 8),bVar1);
  if (param_1 == 1 || bVar1 == 0) {
    *(int *)CONCAT44(in_register_00000004,iVar2) =
         *(int *)CONCAT44(in_register_00000004,iVar2) + iVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

