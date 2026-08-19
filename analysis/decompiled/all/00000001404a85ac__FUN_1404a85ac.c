// Function: FUN_1404a85ac
// Addr: 1404a85ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a85ac(void)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_EAX;
  int iVar3;
  undefined4 in_register_00000004;
  
  bVar1 = *(byte *)CONCAT44(in_register_00000004,in_EAX);
  bVar2 = (byte)in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar2;
  iVar3 = CONCAT31((int3)((uint)in_EAX >> 8),(bVar2 + 0x1c) - CARRY1(bVar1,bVar2));
  *(int *)CONCAT44(in_register_00000004,iVar3) =
       *(int *)CONCAT44(in_register_00000004,iVar3) + iVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

