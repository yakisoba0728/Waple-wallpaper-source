// Function: FUN_1404aa524
// Addr: 1404aa524
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa524(char *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 in_RAX;
  
  bVar1 = in(0xfa);
  uVar2 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1) | 0x4aa43400;
  *param_1 = *param_1 + (char)(uVar2 >> 8);
  uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1 | *(byte *)((ulonglong)uVar2 * 2)) + 0x60000664;
  uVar3 = uVar2 | 0xdfb8000;
  uVar2 = CONCAT22((short)(uVar3 >> 0x10),
                   CONCAT11((char)(uVar3 >> 8) + (char)((ulonglong)param_1 >> 8),(char)uVar2)) +
          0x21004a;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

