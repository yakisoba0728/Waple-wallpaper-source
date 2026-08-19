// Function: FUN_1404a1fc4
// Addr: 1404a1fc4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1fc4(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar3;
  undefined8 in_RAX;
  undefined7 uVar4;
  uint *puVar2;
  
  *param_2 = *param_2 | (byte)((ulonglong)param_2 >> 8);
  uVar4 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar1 = (char)in_RAX + 0x70;
  bVar3 = (byte)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 ^ bVar3;
  puVar2 = (uint *)CONCAT71(uVar4,(bVar1 | *(byte *)CONCAT71(uVar4,bVar1)) ^ bVar3);
  *puVar2 = *puVar2 | (uint)puVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

