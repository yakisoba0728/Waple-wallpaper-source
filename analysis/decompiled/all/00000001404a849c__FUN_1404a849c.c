// Function: FUN_1404a849c
// Addr: 1404a849c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a849c(char *param_1,undefined8 param_2)

{
  uint uVar1;
  uint *in_RAX;
  byte bVar2;
  undefined6 uVar3;
  
  uVar3 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar1 = (uint)in_RAX | *in_RAX;
  if (uVar1 != 0) {
    *param_1 = *param_1 + (byte)uVar1;
    bVar2 = (byte)((ulonglong)param_2 >> 8) |
            param_1[CONCAT31((int3)(uVar1 >> 8),(byte)uVar1 | *(byte *)((ulonglong)uVar1 * 2))];
    *(char *)CONCAT62(uVar3,CONCAT11(bVar2,(char)param_2)) =
         *(char *)CONCAT62(uVar3,CONCAT11(bVar2,(char)param_2)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

