// Function: FUN_1404a8b3c
// Addr: 1404a8b3c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8b3c(undefined8 param_1,undefined2 param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 in_RAX;
  int *piVar3;
  uint *puVar4;
  byte in_CF;
  
  bVar1 = (byte)in_RAX - 0x2c;
  piVar3 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1 + in_CF);
  *piVar3 = (*piVar3 - (int)piVar3) - (uint)(0x2b < (byte)in_RAX || CARRY1(bVar1,in_CF));
  uVar2 = in(param_2);
  uVar2 = uVar2 | *(uint *)(ulonglong)uVar2 |
          *(uint *)(ulonglong)(uVar2 | *(uint *)(ulonglong)uVar2);
  puVar4 = (uint *)(ulonglong)uVar2;
  *puVar4 = *puVar4 & uVar2;
  *(char *)puVar4 = (char)*puVar4 + (char)uVar2;
  uVar2 = in(param_2);
  uVar2 = uVar2 | *(uint *)(ulonglong)uVar2 |
          *(uint *)(ulonglong)(uVar2 | *(uint *)(ulonglong)uVar2);
  *(uint *)(ulonglong)uVar2 = *(uint *)(ulonglong)uVar2 & uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

