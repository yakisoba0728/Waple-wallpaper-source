// Function: FUN_1404c6f9c
// Addr: 1404c6f9c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6f9c(void)

{
  byte bVar1;
  undefined4 in_EAX;
  uint uVar2;
  undefined4 in_register_00000004;
  
  bVar1 = (char)in_EAX * '\x02';
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
  *(byte *)CONCAT44(in_register_00000004,uVar2) =
       *(char *)CONCAT44(in_register_00000004,uVar2) + bVar1;
  uRam0000000194516fa8 = uRam0000000194516fa8 & uVar2;
  verr();
  *(byte *)CONCAT44(in_register_00000004,uVar2) =
       *(byte *)CONCAT44(in_register_00000004,uVar2) ^ bVar1;
  if ((POPCOUNT(*(undefined1 *)CONCAT44(in_register_00000004,uVar2)) & 1U) != 0) {
    *(byte *)CONCAT44(in_register_00000004,uVar2) =
         *(byte *)CONCAT44(in_register_00000004,uVar2) ^ bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

