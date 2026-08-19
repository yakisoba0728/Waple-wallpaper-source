// Function: FUN_1404c2ad8
// Addr: 1404c2ad8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c2ad8(undefined8 param_1,undefined1 *param_2)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 in_register_00000004;
  
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (byte)in_EAX;
  cRam00000001734c770c = cRam00000001734c770c - (char)param_2;
  iVar1 = CONCAT31((int3)((uint)in_EAX >> 8),
                   (byte)in_EAX | *(byte *)(CONCAT44(in_register_00000004,in_EAX) + 0x4f));
  *(int *)CONCAT44(in_register_00000004,iVar1) =
       *(int *)CONCAT44(in_register_00000004,iVar1) + iVar1;
  *param_2 = *param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

