// Function: FUN_1404d23d8
// Addr: 1404d23d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d23d8(char param_1,undefined8 param_2)

{
  uint uVar1;
  byte bVar3;
  undefined8 in_RAX;
  uint *puVar2;
  byte bVar5;
  byte bVar4;
  
  bVar5 = (byte)((ulonglong)param_2 >> 8);
  param_1 = (char)in_RAX + param_1;
  puVar2 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),param_1);
  *puVar2 = *puVar2 & (uint)puVar2;
  bVar4 = (byte)((ulonglong)in_RAX >> 8);
  bVar3 = bVar4 + bVar5;
  uVar1 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11(bVar3 * '\x02',param_1 + CARRY1(bVar4,bVar5))) + 0x16d40000 +
          (uint)CARRY1(bVar3,bVar3);
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

