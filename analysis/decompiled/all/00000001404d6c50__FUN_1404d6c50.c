// Function: FUN_1404d6c50
// Addr: 1404d6c50
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6c50(undefined8 param_1,uint param_2)

{
  byte bVar1;
  longlong in_RAX;
  uint *puVar2;
  byte in_CF;
  byte bVar3;
  
  bVar3 = (byte)((ulonglong)in_RAX >> 8);
  bVar1 = bVar3 + *(byte *)(in_RAX + 0x11);
  puVar2 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar1 + in_CF,(char)in_RAX));
  *(char *)puVar2 =
       (char)*puVar2 + (char)(param_2 >> 8) +
       (CARRY1(bVar3,*(byte *)(in_RAX + 0x11)) || CARRY1(bVar1,in_CF));
  *(char *)puVar2 = (char)*puVar2 + (char)in_RAX;
  *puVar2 = *puVar2 & param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

