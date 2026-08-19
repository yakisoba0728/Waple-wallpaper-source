// Function: FUN_1404b4bc4
// Addr: 1404b4bc4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4bc4(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  undefined8 in_RAX;
  uint *puVar3;
  longlong unaff_RBP;
  char in_CF;
  undefined6 uVar4;
  
  uVar4 = (undefined6)((ulonglong)in_RAX >> 0x10);
  puVar3 = (uint *)CONCAT62(uVar4,CONCAT11(-in_CF,(char)in_RAX));
  *puVar3 = *puVar3 | (uint)puVar3;
  bVar2 = (char)in_RAX - 0x2c;
  bVar2 = bVar2 | *(byte *)CONCAT71((int7)((ulonglong)puVar3 >> 8),bVar2);
  bVar1 = -in_CF + bVar2;
  *(byte *)(unaff_RBP + param_1) =
       *(byte *)(unaff_RBP + param_1) |
       bVar1 | (byte)((uint)*(undefined4 *)CONCAT62(uVar4,CONCAT11(bVar1,bVar2)) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

